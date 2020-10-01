                                                              //CALENDAR//
#include <stdio.h>
void main()
{
    int A,b,D,i,W,m,e[3],x,z,y;

    printf("Press 1 for LEAP year\nPress 2 for day at a given DATE and YEAR\nPress 3 for ODD days:");
    scanf("%d",&A);
                                                          //Leap Year//
if(A==1)

    {
        printf("Enter Year here:");
        scanf("%d",&b);

         if((b%4==0)&&(b%100!=0)||(b%400==0))
         {
             printf("It's a Leap year.");
         }
         else {printf("It's not a Leap year.");}
    }
                                                         //Odd Days//
else if(A==3)
    {
                                                         // IN 100 YEARS 24 LEAP YEARS AND 5 ODD DAYS//
        printf("Enter No. of Years Or Days here:");
        scanf("%d",&b);

       W=b/20;

          if(W<7)
          {
              printf("In %d Years, %d Odd Days. ",b,W);
          }
          else
          {
              printf("In %d Years, %d Complete Odd Days.",b,W%7);
          }
              printf("\nIn %d Days, %d Complete Odd Days.",b,b%7);
    }
                                                           //Day Founder//1920-2099//
else
   {
                    printf("Enter Year:");
                    scanf("%d",&b);
                      if((b%4==0)&&(b%100!=0)||(b%400==0))
                      {
                            printf("Enter Date and Month No.:");
                            for(i=0;i<2;i++)
                                 {
                                  scanf("%d",&e[i]);
                                 }
                                 if(e[1]==1)
                                 {
                                    m=6;
                                 }
                                 else if(e[1]==2)
                                 {
                                    m=2;
                                 }
                                  else if(e[1]==3)
                                 {
                                    m=3;
                                 }
                                  else if(e[1]==4)
                                 {
                                    m= 6;
                                 }
                                  else if(e[1]==5)
                                 {
                                    m= 1;
                                 }
                                  else if(e[1]==6)
                                 {
                                    m= 4;
                                 }
                                  else if(e[1]==7)
                                 {
                                    m= 6;
                                 }
                                  else if(e[1]==8)
                                 {
                                    m= 2;
                                 }
                                  else if(e[1]==9)
                                 {
                                    m= 5;
                                 }
                                  else if(e[1]==10)
                                 {
                                    m= 0;
                                 }
                                  else if(e[1]==11)
                                 {
                                    m= 3;
                                 }
                                  else
                                 {
                                    m= 5;
                                 }
                       if(b<2000)
                        {
                            if((b%100)>=0&&(b%100)<10)
                                 {
                                  x=(b%100)+10;
                                  y=x/4;
                                  z=y+x+e[0]+m;
                                 }
                             else
                                 {
                                    y=(b%100)/4;
                                    z=y+e[0]+(b%100)+m;
                                 }
                         }
                        else
                         {
                             if(b%1000>=0 &&b%1000<100)
                                 {
                                   x=(b%1000)+100;
                                   y=x/4;
                                   z=y+x+e[0]+m;
                                  }
                              else
                                  {
                                   y=b%1000/4;
                                   z=y+e[0]+b%1000+m;
                                  }
                          }
                      }
                                               //Not Leap Year//
                     else
                             {
                              printf("Enter Date and Month No.:");
                              for(i=0;i<2;i++)
                             {
                              scanf("%d",&e[i]);
                             }
                             if(e[1]==1)
                             {
                                 m=0;
                             }
                             else if(e[1]==2)
                             {
                                m= 3;
                             }
                              else if(e[1]==3)
                             {
                                m= 3;
                             }
                              else if(e[1]==4)
                             {
                                m= 6;
                             }
                              else if(e[1]==5)
                             {
                                m= 1;
                             }
                              else if(e[1]==6)
                             {
                                m= 4;
                             }
                              else if(e[1]==7)
                             {
                                m= 6;
                             }
                              else if(e[1]==8)
                             {
                                m= 2;
                             }
                              else if(e[1]==9)
                             {
                                m= 5;
                             }
                              else if(e[1]==10)
                             {
                                m= 0;
                             }
                              else if(e[1]==11)
                             {
                                m= 3;
                             }
                              else
                             {
                                m= 5;
                             }
                        if(b<2000)
                             {
                            if((b%100)>0 &&(b%100)<10)
                             {
                              x=(b%100)+10;
                              y=x/4;
                              z=y+x+e[0]+m;
                             }
                            else
                             {
                                y=(b%100)/4;
                                z=y+e[0]+(b%100)+m;
                             }
                             }
                        else
                             {
                             if(b%1000>=0 &&b%1000<100)
                             {
                              x=b%1000+100;
                              y=x/4;
                              z=y+x+e[0]+m;
                             }
                             else
                             {
                                y=b%1000/4;
                                z=y+e[0]+b%1000+m;
                             }
                             }
                         }

                                D=z%7;

                    if(D==0)
                    {
                        printf("SUNDAY");
                    }

                      else if (D==1)
                    {
                        printf("MONDAY");
                    }
                      else if (D==2)
                    {
                        printf("TUESDAY");
                    }
                      else if (D==3)
                    {
                        printf("WEDNESDAY");
                    }
                     else if (D==4)
                    {
                        printf("THURSDAY");
                    }
                     else if (D==5)
                    {
                        printf("FRIDAY");
                    }
                    else
                    {
                        printf("SATURDAY");
                    }

                printf("\nThank You!\n\n");
}
}
