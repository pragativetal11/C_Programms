/*
Accept divsion of student from user and depends o the division display exam timing.
there are 4 division in school as A,B,C,D. Exam of division A at 7 AM,
B at 8:30 AM, C at 9:20 A<, D at 10:30AM.

input = C
output = exam at 9:20 AM

*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Exam at 7AM\n");
    }
    else if (chDiv == 'B')
    {
        printf("Exam at 8:30 AM\n");
    }
    else if (chDiv == 'C')
    {
        printf("Exam at 9:20 AM\n");
    }
    else if (chDiv == 'D')
    {
        printf("Exam at 10:30 AM");
    }
    else
    {
        printf("Invalid Division\n");
        printf("Please enter valid Division...\n");
        return;
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division : \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}