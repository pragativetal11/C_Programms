/*
    Actual CVFS project starts
    -Macro Declaration
    -Structure Declaration
    -Global Variable Declaration
    -UAREA initialise
    -Super block initalise
    -DILB creation
    -shell started
    -Exit and help handled
    - 2 Command Handled
    - clear 
    -Create Function
    - ls -a function
    - stat function
    - unlink function(delete)
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

#define MAXINODES 5

#define MAXFILESIZE 50
#define MAXOPENFILES 5

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
//  Function Name :- DisplayHelp()
//  Description :-  It is used to display help to the user of the project
//  Author :- Pragati Ramchandra Vetal
//  Date :- 01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("---------------------------------------------------------------------\n");
    printf("-----------------------Marvellous CVFS Help Page---------------------\n");
    printf("---------------------------------------------------------------------\n"); 
    
    printf("man : It is used to display the manual page\n");
    printf("clear : it is used to clear the terminal screen\n");
    printf("creat :It is used to create new regular file\n");
    printf("open : It is used to open regular file\n");
    printf("close : It is used to close the regular file\n");
    printf("write : it is used to write the data into the file\n");
    printf("read : It is used to read the data from the file\n");
    printf("stat : it is used to display statistical information of file\n");
    printf("unlink : It is used to delete the file\n");
    printf("exit : It is used to terminate Marvellous CVFS\n");
    
    printf("---------------------------------------------------------------------\n");  
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  ManPageDisplay()
//  Description :-   It is used to display man page of specific command
//  Input:-          Name of command
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp(Name,"exit") == 0)
    {
        printf("About : It is used to Terminate the project\n");
        printf("Usage : exit");
    }
    else if(strcmp(Name,"ls") == 0)
    {
        printf("About : It is used to list all files from current directory\n");
        printf("Usage : ls");
    }
    else if(strcmp(Name,"clear") == 0)
    {
        printf("About : It is used to clear the Terminal\n");
        printf("Usage : clear");
    }
    else if(strcmp(Name,"creat") == 0)
    {
        printf("About : It is used to creat new File\n");
        printf("Usage : creat File_name Permission\n");

        printf("File Name : Name of file that we want to creat\n");
        printf("Permission : Permission of the new file\n");

        printf("Permission : Read -> 1\n");
        printf("Permission : Write -> 2\n");
        printf("Permission : Read + Write -> 3\n");
    }
    else if(strcmp(Name,"unlink") == 0)
    {
        printf("About : It is used to delete existion file\n");
        printf("Usage : unlink File_name\n");

        printf("File Name : Name of file that we want to delete\n");
    }
    else if(strcmp(Name,"stat") == 0)
    {
        printf("About : It is used to get Information of specific file\n");
        printf("Usage : stat File_name\n");

        printf("File Name : Name of file whose information should be fetch\n");
    }
    else 
    {
        printf("No manual entry found for %s\n",Name);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  IsFileExit()
//  Description :-   It is used to check whether file is present or not
//  Input:-          name of file
//  Output:-         true : if present
//                   false : if not present
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

bool IsFileExit(
                    char name[]               //Name of File
                )
{
    PINODE temp = head;
    bool bflag = false;

    while (temp != NULL)
    {
        if(strcmp(temp->FileName, name) == 0)           //comparision between two string(filename comparision)
        {
            bflag = true;
            break;
        }
        temp = temp->next;
    }

    return bflag;
}


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  CreateFile()
//  Description :-   It is used to create new file
//  Input:-          name of file and permissions
//  Output:-         File Descriptor
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

int CreateFile  (
                    char name[],                //Name of file
                    int permission              //File Perission
                )
{
    PINODE temp = head;
    int i = 0;

    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }
    
    //Permission Value is wrong
    //permission = 1 -> READ
    //permission = 2 -> WRITE
    //permission = 3 -> READ + WRITE

    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExit(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    //Search for empty inode
    while (temp != NULL)
    {
        if(temp->FileType == 0)
        {
            break;
        }

        temp = temp->next;
    }

    //Rare Case
    if(temp == NULL)
    {
        ERR_NO_INODES;
    }
    
    //Search empty UFDT entry
    //Reserved first 3 FD's
    for(i = 3; i < MAXINODES; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    //Allocate memory for file table

    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    //Initialize file table
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = permission;

    //Connect File table with Inode
    uareaobj.UFDT[i]->ptrinode = temp;

    // Initialise of all members of inode
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName, name);

    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;

    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;

    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;

    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 1;

    uareaobj.UFDT[i]->ptrinode->Permission = permission;

    // Allocate memory for files data(Data Block)

    uareaobj.UFDT[i]->ptrinode->Buffer = (char *)malloc(MAXFILESIZE);

    superobj.FreeInodes--;
    
    return i;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  LsFile()
//  Description :-   It is used to display names of all files
//  Input:-          None
//  Output:-         None
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void LsFile()
{
    PINODE temp = head;

    printf("---------------------------------------------------------------------\n");
    printf("----------------  Marvellous CVFS Files Information   ---------------\n");
    printf("---------------------------------------------------------------------\n");

    while (temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s\n",temp->FileName);
        }

        temp = temp->next;
    }
    
}


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  LsFile_All()
//  Description :-   It is used to display All details of all files
//  Input:-          None
//  Output:-         None
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          02/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

void LsFile_All()
{
    PINODE temp = head;

    printf("---------------------------------------------------------------------\n");
    printf("----------------  Marvellous CVFS Files Information   ---------------\n");
    printf("---------------------------------------------------------------------\n");

    while (temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s %d %d\n",temp->FileName, temp->InodeNumber, temp->ActualFileSize);
        }

        temp = temp->next;
    }
    
}


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  stat_file()
//  Description :-   It is used to display All Details of specific file
//  Input:-          File Name
//  Output:-         Exit status of function
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          02/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////

int stat_file(char name[])
{
    PINODE temp = NULL;
    int Permission = 0, Type = 0;

    if(IsFileExit(name) == false)
    {
        return ERR_FILE_NOT_EXIT;
    }

    temp = head;

    while (temp != NULL)
    {
        if(strcmp(temp->FileName , name) == 0)
        {
            printf("---------------------------------------------------------------------\n");
            printf("------------------ Statistical INformation of File ------------------\n");
            printf("---------------------------------------------------------------------\n");

            printf("File Name : %s\n",temp->FileName);

            printf("Inode Number : %d\n",temp->InodeNumber);

            printf("File Size : %d\n",temp->FileSize);

            printf("Actual File Size : %d\n", temp->ActualFileSize);

            printf("Reference Count : %d\n",temp->ReferenceCount);

            Permission = temp->Permission;

            if(Permission == READ)
            {
                printf("File Permission : Read Only\n");
            }
            else if(Permission == WRITE)
            {
                printf("File Permission : Write\n");
            }
            else if(Permission == READ + WRITE)
            {
                printf("File Permission : Read + Write\n");
            }

            Type = temp-> FileType;
            
            if(Type == REGULARFILE)
            {
                printf("File Type : Regular File\n");
            }
            else if(Type == SPECIALFILE)
            {
                printf("File Type : Special File\n");
            }

            printf("---------------------------------------------------------------------\n");
            
            break;
        }

        temp = temp-> next;
    }
    return EXECUTE_SUCCESS;
    
}


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :-  unlink_file()
//  Description :-   It is used to delete the specific file
//  Input:-          File Name
//  Output:-         Exit status of function
//  Author :-        Pragati Ramchandra Vetal
//  Date :-          02/08/2026
///////////////////////////////////////////////////////////////////////////////////////////

int unlink_file(
                    char name[]
                )
{
    PINODE temp = NULL;
    int i = 0;

    if(IsFileExit(name) == false)
    {
        return ERR_FILE_NOT_EXIT;
    }

    //Travel the UFDT
    for(i = 3; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] != NULL)
        {
            if(strcmp(uareaobj.UFDT[i]->ptrinode->FileName, name) == 0)
            {
                //Deallocate Memory of Buffer
                free(uareaobj.UFDT[i]->ptrinode->Buffer);

                uareaobj.UFDT[i]->ptrinode->Buffer = NULL;

                strcpy(uareaobj.UFDT[i]->ptrinode->FileName , "\0");

                uareaobj.UFDT[i]->ptrinode->FileSize = 0;

                uareaobj.UFDT[i]->ptrinode->Permission = 0;

                uareaobj.UFDT[i]->ptrinode->FileType = 0;

                uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;

                uareaobj.UFDT[i]->ptrinode->ReferenceCount = 0;

                //Deallocate memory of file table
                free(uareaobj.UFDT[i]);

                uareaobj.UFDT[i] = NULL;

                superobj.FreeInodes++;

                break;

            }
        }//End of it

    }// end of for

    return EXECUTE_SUCCESS;

}//End of unlink_file function


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

        if(iCount == 1)
        {
            // Marvellous CVFS : > exit
            if(strcmp(Command[0],"exit") == 0)
            {
                printf("Thankyou for using Marvellous CVFS\n");
                printf("Deallocation of all resources of Marvellous CVFS\n");
                break;
            }
            //// Marvellous CVFS : > help
            else if(strcmp(Command[0],"help") == 0)
            {
                DisplayHelp();
            }
            // Marvellous CVFS : > clear
            else if(strcmp(Command[0],"clear") == 0)
            {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            }
            else if(strcmp(Command[0],"ls") == 0)
            {
                LsFile();
            }
            else
            {
                printf("Command not found\n");
                printf("please refer help option to get more information\n");
                printf("please refer manual page of command using man\n");
            }
        }
        else if(iCount == 2)
        {
            //// Marvellous CVFS : > man open(example)
            if(strcmp(Command[0],"man") == 0)
            {
                ManPageDisplay(Command[1]);
            }

            //Marvellous CVFS : > ls -a
            else if((strcmp(Command[0],"ls") == 0 && (strcmp(Command[1], "-a")) == 0))
            {
                LsFile_All();
            }

            //// Marvellous CVFS : > stat Ganesh.txt
            else if(strcmp(Command[0],"stat") == 0)
            {
                iRet =  stat_file(Command[1]);

                if(iRet == ERR_FILE_NOT_EXIT)
                {
                    printf("Error : File not exits\n");
                }
            }

            //// Marvellous CVFS : > Unlink Ganesh.txt
            else if(strcmp(Command[0],"unlink") == 0)
            {
                iRet =  unlink_file(Command[1]);

                if(iRet == ERR_FILE_NOT_EXIT)
                {
                    printf("Error : File not exits\n");
                }
            }
            
            else
            {
                printf("Command not found\n");
                printf("please refer help option to get more information\n");
                printf("please refer manual page of command using man\n");
            }
        }
        // Marvellous CVFS : > create Ganesh.txt 3
        else if(iCount == 3)
        {
            if(strcmp(Command[0],"creat") == 0)
            {
                iRet = CreateFile(Command[1], atoi(Command[2]));    //typecasting due to 3rd parameter is integer(ascii to int)

                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because their no free inode\n");
                }
                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because parameters of command are invalid\n");
                    printf("Please use man page to get actual parametrs\n");
                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the file name is already present\n");
                    printf("Please use ls command to check names of all files\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the UFDT is full\n");
                    printf("Please close some opened file\n");
                }
                else
                {
                    printf("File Successfully created with FD : %d\n",iRet);
                }
            }
        }
        else if(iCount == 4)
        {

        }
        else
        {
            printf("Command not found\n");
            printf("please refer help option to get more information\n");
            printf("please refer manual page of command using man\n");
        }

    }   //End of While
    

    return 0;
}   //End of Main