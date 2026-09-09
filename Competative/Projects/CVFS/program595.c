/*
    Read all the contents from file(using write)
*/

#include<stdio.h>
#include<fcntl.h>       //used for file io
#include<unistd.h>      //used for file io
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    write(1,"Jay ganesh...",13);            // 0 = system.in(take input from user from keyboard)
                                            //1 = system.out(print on console)
                                            //2 = system.err(error)

    return 0;
}