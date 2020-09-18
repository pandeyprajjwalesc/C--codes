//FRUIT PREDICTOR//
#include <stdio.h>
void main()
{
int N,X,Y,a,b,c,d,e;
printf("\n\nWELCOME TO MY FRUIT PREDICTOR SOFTWARE\n\nChoose your favourite fruit: \n\n(1) APPLE\n(2) MANGO\n(3) BANANA\n(4) GRAPES\n(5) GUAVA\n(6) ORANGE\n(7) WATERMELON\n\nEnter Password to continue: ");
scanf("%d",&N);

if(N == 1001)
{
    printf("Page-1\n\nNote the page code if your favourite fruit is in it:\n\nAPPLE\nMANGO\nGRAPES\nORANGE.");
    printf("\n\nPress 1 to continue:");
    scanf("%d",&a);
    if(a == 1){
               printf("Page-2\n\nNote the page code if your favourite fruit is in it:\nMANGO\nBANANA\nGRAPES\nGUAVA.");
               printf("\n\nPress 2 to continue:");
               scanf("%d",&b);
               if(b == 2){
                          printf("Page-3\n\nNote the page code if your favourite fruit is in it:\nGUAVA\nWATERMELON\nORANGE\nAPPLE\nGRAPES.");
                          printf("\n\nPress 3 to continue:");
                          scanf("%d",&c);
                          if(c == 3){
                                    printf("Page-4\n\nNote the page code if your favourite fruit is in it:\nMANGO\nWATERMELON\nBANANA\nORANGE.");
                                    printf("\n\nPress 4 to continue:");
                                    scanf("%d",&d);
                                    if(d == 4){
                                               printf("Page-5\n\nNote the page code if your favourite fruit is in it:\nWATERMELON\nAPPLE\nGUAVA\nBANANA.");
                                               printf("\n\nPress 5 to continue:");
                                               scanf("%d",&e);
                                               if(e == 5){
                                                          printf("\n\nEnter the Codes here :");
                                                          scanf("%d",&X);

                                                          if(X == 135){
                                                                       printf("\n\nYour favourite fruit is APPLE.");
                                                                      }

                                                          else if(X == 124)
                                                                      {
                                                                      printf("\n\nYour favourite fruit is MANGO.");
                                                                      }
                                                          else if(X == 245)
                                                                      {
                                                                      printf("\n\nYour favourite fruit is BANANA.");
                                                                      }

                                                          else if(X == 123)
                                                                      {
                                                                      printf("\n\nYour favourite fruit is GRAPES.");
                                                                      }

                                                          else if(X == 235)
                                                                      {
                                                                      printf("\n\nYour favourite fruit is GUAVA.");
                                                                      }

                                                          else if(X == 134)
                                                                      {
                                                                      printf("\n\nYour favourite fruit is ORANGE.");
                                                                      }

                                                           else
                                                                      {
                                                                      printf("\n\nYour favourite fruit is WATERMELON.");
                                                                      }


                                               }
                                    }
                          }
               }
    }
}
    printf("\nThank You !! For playing a game with me.");
}



