
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float d,e,f,g,h,X;

    printf("Enter First Integral Digit : ");
    scanf("%d",&a);

    printf("Enter Second Integral Digit : ");
    scanf("%d",&b);

    c =(a - b);

    printf("The subtraction of the two digits is %d.\nEnter another integral digit(not equal to ZERO) : " ,c);
    scanf("%f",&d);

    e =(c/d);

    printf("The value after dividing the substracted value with entered number is %.3f \nPlease enter another number :" ,e);
    scanf("%f",&f);

    g = (e*f);

    printf("The value after multiplying the divided value to entered value is %.3f \nFinally enter another number :",g);
    scanf("%f",&h);


     X = pow(g,h);
     printf("If the entered value is the power of multiplied value then the final value comes equal to %.3f \n Thank you.",X);


}
