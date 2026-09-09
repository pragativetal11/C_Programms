/*
    create
    file open
    write into the file
    read
    file closed
    L_Seek(location)
    Delete(Unlink)
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h
#include<unistd.h>              //only linux based OS
#include<string.h>

#define BUFFER_SIZE 100         //Macro creation

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    
    int iRet = 0, fd = 0;

    fd = open("Marvellous.txt", O_RDONLY);
    while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    
    close(fd);

    return 0;
}