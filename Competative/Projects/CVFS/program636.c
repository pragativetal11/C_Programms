/*
    Actual CVFS project starts
    -Macro Declaration
    -Structure Declaration
    -Global Variable Declaration
    -UAREA initialise
    -Super block initalise
    -DILB creation
    -shell started
*/
///////////////////////////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  user Defined Macros
//
///////////////////////////////////////////////////////////////////////////////////////////

#define MAXINODES 10

#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

///////////////////////////////////////////////////////////////////////////////////////////
//
//  User defined macros for Error Handling
//
///////////////////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIT -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name : BootBlock                          (Hard disk 1st block)
//  Description : It holds the Information to boot the Operating system
//
///////////////////////////////////////////////////////////////////////////////////////////

struct BootBlock                //Boot block is Inactive due to project runs on RAM hence OS is already present to run the project)
{
    char Information[100];
};


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name : SuperBlock
//  Description :   it holds the information of complete File System
//
///////////////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name : Inode
//  Description :   it holds information of files
//
///////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)

struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer; 
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name : FileTable
//  Description :   it holds information of opened files
//
///////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)

struct FileTable
{
    int ReadOffset;         //kuthun read kartoy tyach location
    int WriteOffset;        //kuthe wtite kartoy tyach location
    int Mode;
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name : UAREA
//  Description :   it holds information of process
//
///////////////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Global Varials used in the project
//
///////////////////////////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :- InitialiseUAREA
//  Description :-  It is used to Initialised UARE
//  Author :- Pragati Ramchandra Vetal
//  Date :- 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");

    for( i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initalised successfully\n");
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :- InitialiseSuperBlock()
//  Description :-  It is used to Initialised super block
//  Author :- Pragati Ramchandra Vetal
//  Date :- 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODES;
    superobj.FreeInodes = MAXINODES;

    printf("Marvellous CVFS : Super Block gets initalised successfully\n");
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :- CreateDILB()
//  Description :-  It is used to create linked list of inodes
//  Author :- Pragati Ramchandra Vetal
//  Date :- 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for(i = 1; i <= MAXINODES; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        newn->InodeNumber = i;
        strcpy(newn->FileName, "\0");
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created successfully\n");
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :- StartAuxillaryDataInitialisation()
//  Description :-  It is used to call all such functions which are used to
//                  initialise Auxillary data
//  Author :- Pragati Ramchandra Vetal
//  Date :- 31/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information, "Booting Process of Marvellous CVFS is Completed\n");

    printf("%s",bootobj.Information);

    InitialiseUAREA();

    InitialiseSuperBlock();

    CreateDILB();
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of CVFS project
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};     
    int iRet = 0, iCount = 0;

    StartAuxillaryDataInitialisation();

    printf("---------------------------------------------------------------------\n");
    printf("-----------------Marvellous CVFS started successfully----------------\n");
    printf("---------------------------------------------------------------------\n");

    // Infinite Listening shell
    while (1)
    {
        fflush(stdin);          //old input buffer gets clean

        strcpy(str,"");         //old str gets clean(it takes actual input)

        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);       //str gets split into tokens

        fflush(stdin);

    }
    

    return 0;
}