/*
    file open
    write into the file
    file closed
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h
#include<unistd.h>              //only linux based OS

int main()
{
    int fd = 0;         //file descriptor      : index in UFDT 

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets sunccesfully opend with fd : %d\n",fd);

        write(fd,"jay Ganesh...",13);          // where to wite :  what to write :  how much going to write

        close(fd);
    }
    

    return 0;
}