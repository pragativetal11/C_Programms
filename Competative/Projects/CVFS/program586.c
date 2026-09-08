/*
    file open
    write into the file
    file closed
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h
#include<unistd.h>              //only linux based OS
#include<string.h>

#define BUFFER_SIZE 100         //Macro creation

int main()
{
    int fd = 0;         //file descriptor      : index in UFDT 
    int iRet = 0;
    char Data [BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt", O_RDONLY);             

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets sunccesfully opend with fd : %d\n",fd);

        iRet = read(fd,Data,13);          // where to wite :  what to write :  how much going to write

        printf("%d bytes gets succesfully read \n",iRet);

        printf("Data from file is : %s\n", Data);\

        //Reuse of data buffer
        //ISSUE SOLVED

        memset(Data,'\0',sizeof(Data));              //to clean previous data

        iRet = read(fd,Data,3);          // where to wite :  what to write :  how much going to write

        printf("%d bytes gets succesfully read \n",iRet);

        printf("Data from file is : %s\n", Data);

        close(fd);
    }
    

    return 0;
}