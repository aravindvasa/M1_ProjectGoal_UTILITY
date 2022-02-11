#include <stdio.h>


// function definition  
int addition()  
{  
    int i, sum = 0, num, A;   
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &A);  
        sum = sum + A;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
 