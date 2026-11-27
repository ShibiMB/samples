#include<stdio.h>
int main()
{
    int reverse=0, reminder, num;
    printf("Enter the number\n");
    scanf("%d", &num);
    while(num!=0)
    {
        reminder=num%10;//123 reminder=3 , 2 , 1 , 
        reverse=10*reverse +reminder;//3 , 32 , 321
        num/=10;//num=12 , 1 , 0.1
    }
    printf("Reverse of the value = %d", reverse);
    return 0;
}