//GREAT NUMBER//
#include <stdio.h>
void main ()
{   float a,b,c;
    printf("Enter three numbers here:");
    scanf("%f %f %f",&a,&b,&c);
    if (a >= c && a>=b)
    {
        printf("The greatest number is %.1f.\n",a);
    }

     else if(b>= a && b >=c)
     {
         printf("The greatest number is %.1f.\n",b);
     }


     else
     {
         printf("\nThe greatest number is %.1f.\n",c);
     }
     printf("Thank You for using this software.\n");
}
