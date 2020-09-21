#include<stdio.h>
#include<math.h>

void main()
{   float a,b,X;

    printf("Enter two numbers here:");
    scanf("%f %f",&a,&b);
   
    X = b - a;
    a = X + a;
    b = b - X;

    printf("%.1f %.1f",a,b);

                 //OTHER METHOD(ZERO OPERATIONS)//
 
   /*X = a;a = b;b=X;
     printf("%.1f %.1f",a,b); */

}
