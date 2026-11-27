//swap 2 numbers 
#include <stdio.h>
//function to swap the numbers 
void swap(int *aptr, int *bptr)
{
    //swapping should happen here! - pass by reference
    int temp = *aptr; //temp holds value of a 
    *aptr = *bptr;  //aptr got updated with bptr value
    *bptr = temp; //bptr got updated with temp value
}
int main()
{
    int a = 10;
    int b = 12;
    
    //after swap: a = 12 and b = 10;
    printf("Before swap\na = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap\na = %d and b = %d\n", a, b);

}