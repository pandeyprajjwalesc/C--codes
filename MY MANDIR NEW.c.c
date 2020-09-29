                                                   //PATTERN PART (2) - MY MANDIR//
#include<stdio.h>
void main()
{  int i,j;
                                                   //<HOME PART 1 DISIGNING>//
   printf("\n                                   WELCOME TO MY HOME\n\n");
/*
   for(i=0;i<7;i++)
     {
       for(j=0;j<5+i;j++)
       {if(i<5 && j==5-i)
       {
         printf("*");
       }
       else if(i>=5&&j==0)
       {
        printf("*");
       }
       {
           printf(" ");
       } else

       }
       for(j=5+i;j<20+i;j++)
       {
        printf("*");
       }
        printf("\n");
       }
      for(i>=7;i<17;i++)
      { for(j=0;j<27;j++)
        {
        if(j==0 || j==11 ||j==24)
        {

         printf("*");
        }
        else if (j>2 &&  j<9&& i>10&&  i<17)
        {
        printf(":");
        }
        else if (j>2 &&  j<9&& i>8 && i<=10)
        {
        printf("/");
        }
        else if (j>=2&&j<=9&&i==7)
        {
        printf("-");
        }
        else if (i>9&&i<13&&j>15&&j<20)
        {
        printf("/");
        }
        else
        {
        printf(" ");

        }
        }
        printf("\n");
      }
      for(i=17;i<19;i++)
      { for(j=0;j<26;j++)
      {
        printf("^");
      }
      printf("\n");
      }

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\a");                                          // HOME  DISIGNING ENDED//

 */
                                                      //HOME PART 2 DISIGNING//

    for(i=0;i<15;i++)
    {
        for(j=0;j<75;j++)
        {
            if(j<10)
            {
                printf(" ");
            }
            else if(i>6 && i<10 && j>17 && j<23)
            {
                printf("#");
            }
            else if (j==21&&i==6 || j==19&&i==6 || j==20 && i==6 ||j==20&&i==5)
            {
             printf("#");
            }
            else if (i>6 && i<10 && j<66 && j>60)
            {
             printf("#");
            }
            else if (j==64&&i==6||j==63&&i==6|| j==62&&i==6||j==63&&i==5)
            {
             printf("#");
            }
            else if (j>65+i || j<19-i)
            {
                printf(" ");
            }
            else if (j>43-i&&j<36&i<14 || j>49&&j<42+i&&i<14||i<8&&j>43-i&&j<42+i&&j!=43&&j!=42||i>6&&j>43&&j!=57-i&&j<42+i&&i<14||i>6&&j<42&&j!=28+i&&j>43-i&&i<14)
            {
                printf(" ");
            }
            else if(j==42-i && i>=0&&i<15)
            {
                printf("/");
            }
            else if (j==43+i &&i>=0&&i<15)
            {
                printf("\\");
            }
            else if(j==43-i && i>0&&i<15)
            {
                printf("/");
            }
            else if (j==42+i &&i>0&&i<15)
            {
                printf("\\");
            }
            else if (j==42||j==43||i==14||j==41&&i==13||j==44&&i==13||j==28+i&&i>6||i>6&&j==57-i)
            {
                printf(".");
            }
            else
            {
            printf(".");
            }
        }
             printf("\n");
    }
    printf("          -----------------------------------------------------------------\n          [ VIGYANAM:       :ONE CAN BUY HOUSE NOT HOME:           :BRAMH ]\n");
     for(i=0;i<20;i++)
         {
         for(j=0;j<75;j++)
         {
          if(j<10)
          {
              printf(" ");
          }
          else if (i==0 &&j<75&&j>=10)
          {
              printf("-");
          }
          else if(j==12 || j==13 || j==72 ||j==71 ||j==29 ||j==55)
          {
              printf("|");
          }
          else if(i==5 && j<24 && j>18 || i==5 && j<66 &&j>60)
          {
              printf("-");
          }
          else if (j<24 && j>18 && i>5&&i<10  || j<66 &&j>60 && i>5&&i<10)
          {
              printf(":");
          }
          else if (j<24 && j>18 &&i>=10&&i<15 || j<66 &&j>60 && i>=10&&i<15)
          {
              printf("/");
          }
          else if (j>33 && j<42 && i>4&& i<10 || j>42 && j<51 && i>4 && i<10)
          {
              printf(",");
          }
          else if (j==42 && i>4 && i<20)
          {
              printf("|");
          }
          else if (j>33 && j<42 && i>=10 && i<20 || j>42 && j<51 && i>=10 && i<20)
          {
              printf("^");
          }
          else if(i==4 && j>33 && j<51)
          {
              printf("-");
          }
          else
          {
              printf(" ");
          }
         }
         printf("\n");
         printf("\a");
     }
      for(i=0;i<11;i++)
      {
          for (j=0;j<78;j++)
          {
           if(j<7)
           {
            printf(" ");
           }
           else if (i==0 &&j>=7 && j<78 || i==10&&j>=26 && j<59||i==3&&j>28&&j<56||i==6&&j>26&&j<58)
           {
               printf("-");
           }
           else if (j==7&&i>0 &&i<10 || j==77 &&i>0 &&i<10)
           {
               printf("|");
           }
           else if(i>0&&i<3&&j==29 ||j==55&&i>0&&i<3 ||j==28&&i>=3&i<6||j==56&&i>=3&i<6||j==26&&i>=6&&i<10||j==58&&i>=6&&i<10)
           {
               printf("|");
           }
           else if(i>0&&i<3&&j>=7&&j<29||i>0&&i<3&&j>=55||i>=3&&i<6&&j>=7&&j<28||i>=3&&i<6&&j>=56||i>=6&&i<=10&&j>=7&&j<26||i>=6&&i<=10&&j>=58)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }

          }
          printf("\n");
      }
      for(i=0;i<17;i++)
      {
          for(j=0;j<78;j++)
          {
              if(j<26)
              {
                  printf(" ");
              }
              else if (i>=0&&i<5&&j==58||i>=0&&i<5&&j==26||i>=15&&i<17&&j==58||i>=15&&i<17&&j==26)
              {
                  printf("|");
              }
              else if (i>=5&&i<10&&j==22+i||i>=5&&i<10&&j==54+i)
              {
                  printf("\\");
              }
              else if (i>=10&&i<15&&j==41-i||j==73-i&&i>=10&&i<15)
              {
                  printf("/");
              }
              else if (i>=0&&i<5&&j<58&&j>26||i>=15&&i<17&&j<58&&j>26||i>=5&&i<10&&j>22+i&&j<54+i||i>=10&&i<15&&j>41-i&&j<73-i)
              {
                  printf(".");
              }
              else
              {
                  printf(" ");
              }
          }
          printf("\n");
      }
      printf("\n\n\n\n\n\n\n");
}                                                 //HOME DISIGNING ENDED//















