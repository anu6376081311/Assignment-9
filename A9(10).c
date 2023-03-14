#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,D,Im;
    printf("Enter the value of a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>=0)
    {
        case 1 : switch(D==0)
                   {
                     case 1 :

                       {
                             printf("The roots of the quadratic equation is real and equal\n");
                             x1=x2=-b/2*a;
                             printf("2root 1 is %f and root 2 is%f",x1,x2);
                             break;
                       }
                     case 0 :
                       {
                              printf("The roots of the quadratic equation is real and different \n");
                              x1=(-b+sqrt(D))/2*a;
                              x2=(-b-sqrt(D))/2*a;
                              printf("root 1 is %f and root 2 is%f",x1,x2);
                              break;
                        }
                   }
                   break;
        case 0 :
        {
            printf("The roots of the quadratic equation is imaginary \n");
            x1=x2=-b/2*a;
            Im=sqrt(D);
            printf("root 1 is %f+i*%f and root 2 is %f+i*%f ",x1,Im,x2,Im);
           break;

        }
    }
    return 0;

}
