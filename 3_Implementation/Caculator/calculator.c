#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "add.c"
#include "sub.c"
#include "multi.c"
#include "div.c"
#include "sqr.c"
#include "sqrt.c"
#include "mod.c"

int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();  
int sqrt1();  
int modulos();
void exit();  
  
int main()  
{  
    
    int op;  
    do  
    {  

        printf ("Welcome To The Calculator");  
        printf (" \n 1 Addition  \n 2 Subtraction \n 3 Multiplication \n 4 Division \n 5 Square \n 6 Square Root \n 7.Modulos \n 8 Exit \n \n Enter Operation: ");      
          
        scanf ("%d", &op);
      
      
     
    switch (op)  
    {  
        case 1:  
            addition();
            break; 
              
        case 2:  
            subtraction(); 
            break; 
              
        case 3:  
            multiply();   
            break; 
              
        case 4:  
            divide(); 
            break;
              
        case 5:  
            sq();  
            break;  
              
        case 6:  
            sqrt1();  
            break;  
              
        case 7: 
            modulos();
            break; 

        case 8:  
            exit(0);   
            break;   
        
        
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n-------------------------------------\n ");  
    } while (op != 8);  
      
  
    return 0;        
}  