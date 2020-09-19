 //THE SUM OF NATURAL NUMBERS//
#include<stdio.h>
void main()
{  int S,i,s,E,N,d,sum=0;
                        printf("Enter the starting two and ending one point of the series here:\n");
                        scanf("%d %d %d",&S,&s,&E);
                        d =(s - S);
                        for(i = S;i <= E;i = i + d)
                        {
                         sum = sum + i;
                        }
                          printf("\nThe sum of formed series from %d to %d is  %d.\n\nThank You for using this software\n\n.",S,E,sum);
}
