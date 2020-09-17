 /*Division Predictor*/
 #include <stdio.h>

 void main()
{
   float M;

   printf("Enter Obtained Marks : ");
   scanf("%f",&M);

   if(60<M  &&  M<=100)
   {
       printf("Hurrah ! You got first division.");
   }

   else if(45<M && M<=60)
   {
       printf("Excellent ! You got second division. ");
   }

   else if(45<M  &&  M <=33)
   {
       printf("Good job ! You got third division. ");
   }

   else
   {
       printf(" Better Luck ! Next Time.");
   }

   printf("\nThank you for using this software !");

}

