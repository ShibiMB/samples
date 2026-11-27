#include<stdio.h>
void reverse_number(int num);
int main()
{
    int num;
    printf("Enter the 3 digit number\n");
    scanf("%d", &num);
    reverse_number(num);
    return 0;
}
void reverse_number(int num)
{
    int first_digit =num%10; //6
    int new_first =first_digit;
    int temp=num/10; //25
    int new_second =temp %10; //5
    int new_third = num/100;
    printf("The reverse number=%d%d%d", new_first, new_second, new_third);


}