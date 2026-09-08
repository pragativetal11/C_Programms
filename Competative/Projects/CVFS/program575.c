/*
    file open
    file closed
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h
#include<unistd.h>              //only linux based OS

int main()
{
    int fd = 0;         //file descriptor      : index in UFDT 

    fd = open("Marvellous.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets sunccesfully opend with fd : %d\n",fd);
        close(fd);
    }
    

    return 0;
}