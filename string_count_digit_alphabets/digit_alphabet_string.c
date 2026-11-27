#include<stdio.h>
int main()
{
    char string[50];
    printf("Enter the string\n");
    scanf("%s",string);
    int i=0, digi_count=0,small_count=0, capital_count=0;
    while (string[i])
    {
        if(string[i]>= '0' && string[i]<= '9')//ASCII value 0=48 9=57
            digi_count++;
      else if(string[i]>= 'a' && string[i]<= 'z') //a=97 z=122
                  small_count++; 
        else if(string[i]>= 'A' && string[i]<= 'Z')//A=65 Z=90
            capital_count++;
            i++;      
    }
        printf("No.of digits in a string = %d\n", digi_count); 
        printf("No.of small letters in a string = %d\n", small_count); 
        printf("No.of capital letters in a string = %d\n", capital_count);   
    return 0;
}