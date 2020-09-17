/*TEMPERATURE PARAMETRE*/

 #include <stdio.h>
 void main()
 {
     int X;
     float C,K,R,F;

     printf("Enter temperature here (in degree celcious) : ");

     scanf("%f",&C);


     printf("Press - 1 for Kelvin Scale :\nPress - 2 for Rumer Scale :\nPress - any for Farhenahite Sclae :");

     scanf("%d",&X);

     if(X == 1)



              {
                K = (C + 273);

                printf("In Kelvin Scale Temperature = %.3f K",K);
              }

     else if(X == 2)


               {
                R = (4*C+ 5);

                printf("In Rumer Scale Temperature = %.3f *R",R);
               }
     else

               {
                F = (1.8*C+ 32);

                printf("In Farhenahite Scale = %.3f *F",F);
               }
     printf("        \nThank You for using this software.");
}
