#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for(; num>0; num/=10)
    {
        sum=sum+num%10;
    }
    printf("Sum of the digits = %d", sum);
    return 0;
}