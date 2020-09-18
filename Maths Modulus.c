// Mod ( ||) finder//
#include <stdio.h>
void main()
{
    int N;
    float a,b,M;
    printf("Press 1 for MOD of subtraction of two numbers \nPress 2 for MOD of one Real Number :");
    scanf("%d",&N);

    if(N == 1 )
    {
    printf("\nEnter the two numbers  :");
    scanf("%f %f",&a,&b);

         if(a >= b){
                    M = a - b;
                    printf("The MOD of subtraction of the two number : \n\n\n(%.2f , %.2f)\n\n\nis %.2f.  ",a,b,M);
                   }
         else      {
                    M = b - a;
                    printf("The MOD of subtraction of the two number : \n\n\n(%.2f , %.2f)\n\n\nis %.2f.  ",a,b,M);
                   }

    }
    else
    {
    printf("\nEnter the Real Number :");
    scanf("%f",&a);
         if(a >= 0){
                   printf("The MOD of the number %.2f is %.2f.",a,a);
                   }
         else
                   { M = (-a);
                   printf("The MOD of the number %.2f is %.2f.",a,M);
                   }
    }



}

