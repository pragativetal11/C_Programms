/*
    create
    file open
    write into the file
    read
    file closed
    L_Seek(location)
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
        lseek(fd,-10,2);              //kashat    kuthe   kuthun( 0 = Start : 1 = Current: 2 = End)

        iRet = read(fd,Data,10);

        printf("%d Bytes gets succesfully read\n",iRet);

        printf("Data from file is : %s\n",Data);

        memset(Data,'\0',sizeof(Data));



        close(fd);
    }
    

    return 0;
}