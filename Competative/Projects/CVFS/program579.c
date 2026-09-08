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
    int iRet = 0;
    char Data [] = "Marvellous Infosystems";

    fd = open("Marvellous.txt", O_RDWR | O_APPEND);             //imp to write append dut to this data gets added into next to old data

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets sunccesfully opend with fd : %d\n",fd);

        iRet = write(fd,Data,10);          // where to wite :  what to write :  how much going to write

        printf("%d bytes gets succesfully written \n",iRet);

        close(fd);
    }
    

    return 0;
}