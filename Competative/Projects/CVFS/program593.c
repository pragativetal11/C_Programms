/*
    Read whole file
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h
#include<unistd.h>              //only linux based OS
#include<string.h>

#define BUFFER_SIZE 1024         //Macro creation

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    
    int iRet = 0, fd = 0;           //iRet used to take read file and fd is used to take opened file

    fd = open("program592.c", O_RDONLY);
    while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    
    close(fd);

    return 0;
}