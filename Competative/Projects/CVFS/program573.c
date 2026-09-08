/*
    file creation
*/

#include<stdio.h>
#include<fcntl.h>               //file control.h

int main()
{
    int fd = 0;         //file descriptor      : index in UFDT 

    fd = creat("Marvellous.txt", 0777);

    if (fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets sunccesfully created with fd : %d\n",fd);
    }
    
    return 0;
}