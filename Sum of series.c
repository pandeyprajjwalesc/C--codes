/*The Sum Of Series PASSWORD 1001*/
#include <stdio.h>
#include <math.h>
void main()
{                int X,Y,T,Z,A;
                 float a,b,d,r,i,S,P,Q,R;

                 printf("Enter Password to countinue: ");
                 scanf("%d",&A);

                 if(A == 1001)
                 {
                 printf("Press 1 (if arithmetic series)\nPress 2 (if geometric series)\nPress 3 (if A.G.S. series) : ");
                 scanf("%d",&X);

if(X == 1)
                {


                 printf("Enter first two digits of the series and enter the number of terms(with space)  : ");
                 scanf("%f %f %d",&a ,&b , &T);


                 d = (b - a);
                 S = ( T*a + 0.5*T*T*d - 0.5*d*T );

                 printf("The sum of the series is %.2f to %d terms.",S,T);
                 }
else if (X == 2)
                 {
                 printf("For the sum of T terms PRESS 1 \nFor infinite terms PRESS 2 :");
                 scanf("%d",&Y);

                 if(Y == 1)

                           {
                           printf("Enter first two digits of the series and enter the number of terms(with space)  : ");
                           scanf("%f %f %d",&a ,&b , &T);


                           if(a == 0 || a == b )
                           {
                           printf("Invalid Term !!\nThank You. ");
                           }

                           else
                           {

                           r = b/a;
                           P =   a*(pow(r,T))/(r-1) - a/(r-1) ;
                           }


                            printf("The sum of the series is %.3f to %d terms.",P,T);

                           }
                  else
                           {
                            printf("Enter first two terms :");
                            scanf("%f %f",&a,&b);
                            i = b/a;
                            if(i >= 1 || i <= -1 )
                                                {
                                                printf("Uncountable !!\nThank You.");
                                                }
                            else
                                                {
                                                i = b/a;
                                                Q =  a/(1-i);

                                                printf("The sum of the series is %.3f to infinite terms.",Q);
                                                }
                            }
                 }
else
                 {
                 printf("Press 1 for T terms \nPress 2 for infinite terms :");
                 scanf("%d",&Z);


                 if(Z == 1)
                          {
                          printf("Please Enter :\n(1) First term of series\n(2) Common difference\n(3) Common ratio (not equal 1)\n(4) No. of terms :");
                          scanf("%f %f %f %d",&a,&d,&r,&T);

                          if( r == 1)
                                    {
                                    printf("Invalid Common Ratio !!");
                                    }
                          else
                                    {
                                    R = a/(1-r) + r*d / pow((1-r),2) - d* pow(r,T)/pow((1-r),2) - (a + d*T - d)*pow(r,T) / (1-r);

                                    printf("The sum of A.G.S. is %.3f to %d terms.",R,T);
                                    }
                           }

                   else
                         {
                         printf("Please Enter :\n(1) First term of series\n(2) Common difference\n(3) Common ratio (not equal 1):");
                         scanf("%f %f %f",&a,&d,&r);
                         if( r == 1)
                                    {
                                    printf("Invalid Common Ratio !!");
                                    }
                         else
                                   {
                                   R = a/ (1-r) + r*d/pow((1-r),2);
                                   printf("The sum of A.G.S. is %.3f to infinite terms.",R);
                                   }
                         }

                   }
  printf("\nThank You !! You came to this software. ");
                 }
            else
            {
                printf("Incorrect Password !!!");
            }
}



