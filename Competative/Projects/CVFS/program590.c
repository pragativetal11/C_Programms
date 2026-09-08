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
    unlink("Marvellous.txt");   

    return 0;
}