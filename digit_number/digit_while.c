#include<stdio.h>
int main()
{
    int num, sum=0, reminder;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<0)
    {
        num=-num; // to change -ve number to +ve 
    }
    while(num)// while(num!=0)
    {
        reminder=num%10; // eg 4523 get last digit 3
        sum=sum+reminder;//3
        num/=10; //num=452
    }    
    printf("Sum value of the digit of the given num = %d", sum);
    return 0;
}