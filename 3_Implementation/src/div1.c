#include <stdio.h>
#include <stdlib.h>
int divide(int operand1, int operand2) //division of two numbers
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
    
}