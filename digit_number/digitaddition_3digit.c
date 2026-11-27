#include<stdio.h>
void add_digit(int num);
int main()
{
    int num;
    printf("Enter the 3 digit number\n");
    scanf("%d", &num);
    add_digit(num);
    return 0;
}
void add_digit (int num)
{
       //eg: 256
    int third_digit = num %10; //6
    int temp = num/10; //25
    int second_digit = temp %10; //5
    int first_digit = num/100; //2
    int sum = third_digit + second_digit + first_digit;
    printf("The sum of each digit of the entered number = %d\n", sum);
}
