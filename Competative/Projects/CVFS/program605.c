/*
    take file name from user and Read all the contents from file
*/

#include<stdio.h>
#include<fcntl.h>       //used for file io
#include<unistd.h>      //used for file io
#include<string.h>

#define BUFFER_SIZE 1024


int CountCapital(char *FileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int iRet = 0, fd = 0, iCount = 0, i = 0;

    fd = open(FileName,O_RDONLY);         //used to open file

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return iCount;
    }

    while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)                        
    {
        for( i = 0; i <= iRet; i++)         //Issue
        {
            if(iRet(i) >= 'A' && iRet(i) <= 'Z')
            {
                iCount++;
            }
        }                               
        memset(Buffer,'\0',sizeof(Buffer));
    }
    
    close(fd);

    return iCount;
}

int main()
{
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%[^'\n']s",Fname);

    iRet = CountCapital(Fname);

    printf("Number of Capital letters are : %d\n",iRet);

    return 0;
}