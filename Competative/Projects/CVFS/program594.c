/*
    Read all the contents from file
*/

#include<stdio.h>
#include<fcntl.h>       //used for file io
#include<unistd.h>      //used for file io
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int iRet = 0, fd = 0;

    fd = open("program594.c",O_RDONLY);         //used to open file

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)                        
    {
        printf("%s",Buffer);                                        //printf internally call write function and scanf internally calls read function
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return 0;
}