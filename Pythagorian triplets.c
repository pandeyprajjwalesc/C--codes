// PYTHAGORIAN TRIPLETS//
#include<stdio.h>
void main()
{  float a,b,c,X,Y,Z;
   printf("Enter the triplets here:");
   scanf("%f %f %f",&a,&b,&c);

   X = a*a;
   Y = b*b;
   Z = c*c;

   if(X==Y+Z || Y==X+Z ||Z==X+Y)
       {
       printf("\n\nEntered triplets are PYTHAGORIAN TRIPLETS.");
       }
   else
       {
       printf("Entered triplets are NOT PYTHAGORIAN TRIPLETS.");
       }
       printf("\n\nThank You for using this software.");
}
