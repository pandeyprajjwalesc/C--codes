                                                              //MATRICS//
#include<stdio.h>
int main()
{  int i,j,k,P,M,a,b,c,d,sum=0,R=1,Q=1;
   int A[100][100],B[100][100],X[100][100],Y[100][100],C[100][100];

   printf("Press 1 for Addition or Subtraction\nPress 2 for Transpose of a matrix\nPress 3 for multiplication of two matrices\nPress 4 for determinant\n:");
   scanf("%d",&M);
                                             //ADDITION OR SUBTRACTION OF TWO MATRICES//
 if(M==1)
{  printf("Enter the number of Rows and Column here:");
   scanf("%d %d",&b,&a);

   printf("Enter the digits of first matrix here:");
   for(i=0;i<b;i = i +1)
   {
       for(j=0;j<a;j++)
       {
        scanf("%d",&A[i][j]);
       }
   }
    printf("Enter the digits of second matrix here:");
    for(i=0;i<b;i++)
   {
       for(j=0;j<a;j++)
       {
        scanf("%d",&B[i][j]);
       }
   }
    printf("Press 1 for ADDITION\nPress 2 for subtraction\n:");
    scanf("%d",&P);

    if(P==1)
    {
    printf("The addition of two matrices is as follows:\n\n   ");
    for(i=0;i<b;i=i+1)
        {
        for(j=0;j<a;j=j +1)
        {
         X[i][j] = A[i][j] + B[i][j];
         printf("%d   ",X[i][j]);
        }
         printf("\n\n   ");
        }
    }
    else
    {
    printf("The subtraction of two matrices is as follows:\n\n   ");
    for(i=0;i<b;i=i+1)
         {
         for(j=0;j<a;j=j +1)
         {
          X[i][j] = A[i][j] - B[i][j];
          printf("%d   ",X[i][j]);
         }
          printf("\n\n   ");
         }
    }
}
                                                                   //TRANSPOSE OF A MATRIX//
else if(M==2)
{      printf("Enter the number of Rows and Column here:");
       scanf("%d %d",&b,&a);

       printf("Enter the digits of matrix here:");

   for(i=0;i<b;i=i+1)
   {
       for(j=0;j<a;j=j+1)
       {
       scanf("%d",&A[i][j]);
       }
   }
       printf("The transpose of given Matrix is as follows:\n\n   ");
    for(i=0;i<a;i=i+1)
    {
       for(j=0;j<b;j=j+1)
       {
       C[i][j]=A[j][i];
       printf("%d   ",C[i][j]);
       }
        printf("\n\n   ");
     }

}
                                                                 //MULTIPLICATION OF TWO MATRICES//
else if (M==3)
{
    printf("Enter the number of Rows and Column of first here: ");
    scanf("%d %d",&b,&a);
    printf("Enter the number of Rows and Column of second here: ");
    scanf("%d %d",&c,&d);

    if(a==c)
  {
       printf("Enter the digits of first matrix here:");

       for(i=0;i<b;i=i+1)
       {
       for(j=0;j<a;j=j+1)
       {
       scanf("%d",&A[i][j]);
       }
       }

       printf("Enter the digits of second matrix here:");

       for(j=0;j<c;j++)
       {
       for(k=0;k<d;k++)
       {
       scanf("%d",&B[j][k]);
       }
       }
            printf("Multiplication of the two matrices (First*Second) is as follows:\n\n");
            for(i=0;i<b;i=i+1)
              {
            for (k=0;k<d;k++)
              {
            for (j=0;j<c;j++)
              {
                sum = sum + A[i][j]*B[j][k];
              }
                printf("%d  ",sum);
                sum=0;
              }
                printf("\n\n");
              }
    }
   else
    {
       printf("MULTIPLICATION OF ENTERED MATRICES IS NOT POSSIBLE!\nTRY AGAIN !....THANK YOU.");
    }
}
else
    {
       printf("Enter the number of Rows here: ");
       scanf("%d",&b);

      printf("Enter the digits of determinant here:");
      for(i=0;i<b;i++)
      {
         for(j=0;j<b;j++)
         {
             scanf("%d",&A[i][j]);
         }
      }


      printf("The Value of Determinant is equal to:\n  ");
      for(i=0;i<b;i++)
      {
          for(j=0;j<b;j++)
          {
            if(i==j)
            {
                R=R*A[i][j];
            }
            else
            {
                Q=Q*A[i][j];
            }
          }
      }
                M=R-Q;
               //OR  M = A[0][0]*A[1][1] - A[0][1]*A[1][0];//
                printf("%d",M);
  }



















                      printf("\n\n\n\n\n\n");
}

