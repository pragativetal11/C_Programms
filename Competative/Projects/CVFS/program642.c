#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    #ifdef _WIN32
        printf("Project is running on Windows Platform\n");
    #else
        printf("Project is running on Linux platform\n");
    #endif
        

    return 0;
}