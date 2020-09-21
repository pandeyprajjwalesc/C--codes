//FACTORIAL OF NUMBERS //
#include<stdio.h>
void main()
{   int N,i=1,mult=1;
    printf("Enter a NATURAL number here for its factorial:");

    scanf("%d",&N);
                                                                                      //USING FOR LOOP//
   /* for(i=N;i>=1;i=i-1)
      {
       mult = mult * i;
      }
       printf("The value of factorial of given %d! is equals to %d.\nThank You.",N,mult);*/

                                                                                      //USING WHILE LOOP//
     /* while(i<=N)
     {
      mult = mult * i;
      i=i+1;
     }
printf("The value of factorial of given %d! is equals to %d.\nThank You.",N,mult);*/
                                                                                    //USING DO WHILE LOOP//
       do
       {
        mult = mult*i;
        i = i+1;
       }
       while(i<=N);

       printf("The value of factorial of given %d! is equals to %d.\nThank You.",N,mult);












































}
