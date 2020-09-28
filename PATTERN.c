                                                    //PATTERNS IN C PROGRAMMING//
#include<stdio.h>
void main ()
{  int i,j,n,m;



            printf("Enter number of steps here(<41):");
            scanf("%d",&n);


    /*            for (i=0;i<n;i++)
                {
                for(j=0;j<m;j++)
                   {m=i+1;
                    printf("*");
                   }
                  printf("\n");
                }

              for (j=0;j<n-1;j++)
                {
                    for(i=n;i>j+1;i--)
                    {
                    printf("*");
                    }
                    printf("\n");
                }


              for (i=0;i<n-1;i++)
               {
                    for(j=0;j<i;j++)
                    {
                    printf("*");
                    }
                    printf("\n");

               }

                for (j=0;j<n-1;j++)
               {
                    for(i=n;i>j+1;i--)
                    {
                    printf("*");
                    }
                    printf("\n");

               }

                for (i=0;i<n-1;i++)
               {
                    for(j=0;j<m;j++)
                    {m=i+1;
                    printf("*");
                    }
                    printf("\n");

               }


              printf("\a");
                 for(i=0;i<n;i++)
               {
                     for(j=0;j<2*i+1;j=j+1)    //use different value of 2*i+1//2*i+2//2*i+3//
                    {
                  for(j=0;j<n-1-i;j++)
                   {
                    printf(" ");

                   }

                  for(j=n-1-i;j<n+i;j++)
                    {
                     printf("*");


                    }
                    }
                    printf("\n");
                    printf("\a");
               }

                 for(i=0;i<n;i++)     //put n = 1000;5000;500;//
               {
                    for(j=0;j<i+n;j=j+1)
                   {
                   if(j==n-1+i || j==n-1-i)
                        {
                         printf("*");
                        }
                   else
                        {
                        printf(" ");
                        }

                   }printf("\n");

               }
                if(i==n)
                    for(j=0;j<i;j=j+1)
                   {
                       printf("* ");
                   }

                  printf("\a");
                                                    //SADI KA KINARA//
*/
    for(i=0;i<n;i++)
    {
            for(j=0;j<2*n-1;j++)
            {
            if(j<i)      //j>(n-1-i); n=40;//
            {
            printf("|");
            }
            else if (j> 2*n-2-i )
            {
            printf("+");
            }
            else
            {
            printf("*");
            }
            }
            printf("\n");
     }
     for(i=0;i<n;i++)
            {
            for(j=0;j<2*n+1;j=j+1)
            {
            for(j=0;j<n-1-i;j++)
            {
            printf("~");
            }

            for(j=n-1-i;j<n+i;j++)
            {
            printf(".");
            }
            for(j=n+i+1;j<2*n;j++)
            {
            printf(":");
            }
            }
            printf("\n");
            printf("\a");
            }
  }













