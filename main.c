
#include<stdio.h>
void main()
{
    int num1, num2, temp;
    printf("Ente the number to be swapped\n");
    printf("Enter the 1st number: \n");
    scanf ("%d",&num1);
    printf("Enter the 2nd number: \n");
    scanf ("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("First number: %d\n",num1);
    printf("Second number: %d\n",num2);
}
