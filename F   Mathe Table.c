//Maths Table PAHADA//
 #include <stdio.h>
 void main()
 {
     int i,j,X,Y,Z,a,c,b,d;

     printf("Welcome !\nIf you want to know the table of one number press 1\nif you want for two numbers Press 2:  ");
     scanf("%d",&a);

     if( a ==2 )
     {
                 printf("Enter small  number and also enter the positive differnce ( If A>B then give( A - B)) between them here:\n ");
                 scanf("%d %d",&b,&c);
                 for(j = b;  j<=b+c ; j = j+c)
                        {
                                printf("\nThe table for %d is as follows : \n",j);
                                for(i=1 ; i<11; i=i+1)
                                {
                                X = j*i;


                                printf("\n%d * %d = %d\n",j,i,X);
                                }
                        }
     }
     else
     {
          printf("Enter the number here : ");
          scanf("%d",&d);
        printf("The table for the number %d is as follows :\n",d);
          for(i=1;i<11;i=i+1)
          {
              Z = d * i;
          printf("\n%d * %d = %d",d,i,Z);
          }
     }

    printf("\nThank you !");

}























