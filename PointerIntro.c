#include <stdio.h> 
#include <stdlib.h> 

int main() 
{
    int x = 7; 
    printf("x is %d\n", x); 
    x = 14; 
    printf("x is %d\n", x); 

    int *ptrx = &x; //create a pointer to x (& gives the memory address)
    printf("ptr is %x\n", ptrx); 

    printf("x is %d\n", *ptrx);  //* will give you the value of a pointer reference

    *ptrx = 21; //change value of object pointer refers to
    printf("x is %d, pointer is %d", x, *ptrx); 

}