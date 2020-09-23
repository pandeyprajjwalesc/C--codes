                                               //Ascending And Descending Order//
#include<stdio.h>
void main()
{
int a,b[100],i,j,X,N,max=b[0],min=b[0];

printf("Enter total number of digits here:");
scanf("%d",&a);

printf("Enter numbers here:");
for(i=0;i<a;i=i+1)
   {
    scanf("%d",&b[i]);
   }
printf("Press 1 for Greatest Number\nPress 2 for Lowest Number\nPress 3 for Ascending Order\nPress 4 for Descending Order:");
scanf("%d",&N);

if(N==1)                          //Maximum Number//
{    max = b[0];
     for(i=1;i<a;i++)
     {
     if(b[i]>max)
          {
          max=b[i];
          }
     }
     printf("In given numbers the maximum number is:\n\n   %d",max);
}
else if(N==2)                     //Lowest Number//
{    min=b[0];
     for(i=1;i<a;i++)
     {
     if(b[i]<min)
          {
          min=b[i];
          }
     }
     printf("In given numbers the minimum number is:\n\n   %d",min);

}
else if (N==3)                    //Ascending Order//
{
     printf("Ascending Order of entered numbers is as follows;");
     for(i=0;i<a;i++)
     {
         for(j=0;j<a;j++)
         {
            if(b[i]<b[j])
            {
            X=b[i];
            b[i]=b[j];
            b[j]=X;
            }
         }

     }

     for(i=0;i<a;i++)
     {
         printf("%d ",b[i]);
     }

}





}
