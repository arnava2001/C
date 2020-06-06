#include <stdio.h> 

int main()
{
    int nums[5]; 
    int *arr = nums; //equivalent to &nums[0]
    
    int fill = 2; 
    for(;arr < &nums[5]; arr++)  //loop through the memory addresses
    { 
        *arr = fill;  //change the value of what the pointer at this address in the array is pointing to
        fill = fill*2; 
    }

    int i; 
    for(i= 0; i<5; i++) 
    {
        printf("%d\n", nums[i]); 
    }
}