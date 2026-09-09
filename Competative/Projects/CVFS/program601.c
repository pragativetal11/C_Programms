/*
    calculate size of file using stat function
*/

#include<stdio.h>
#include<fcntl.h>       //used for file io
#include<unistd.h>      //used for file io
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
   struct stat sobj;

   stat(FileName, &sobj);

   return sobj.st_size;

}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%[^'\n']s",Fname);

    iRet = CalculateFileSize(Fname);
    printf("Size of File is : %d bytes\n",iRet);

    return 0;
}