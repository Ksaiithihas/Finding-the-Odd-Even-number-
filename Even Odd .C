
#include <stdio.h>

void main()
{
    int a,Reminder;
    int i=1;
    while (i==1)
    {
    printf("Please enter the number :");
    scanf("%d",&a);
    Reminder =a%2;
    
    if (Reminder== 0)
    {
        printf("The number is Even \n");

    }
    if (Reminder==1)
    {
        printf("The number is Odd \n");
    }
    printf("Enter 0 to exit or 1 to continue : ");
    scanf("%d",&i);
    
    
    }
}
