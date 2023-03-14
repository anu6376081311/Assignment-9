#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1 :
                {
                 printf(" The negative number of the given positive number is  %d",-n);
                    break;
                }

        case 0 :
                {
                 printf("The positive number of the given negative number is %d",-n);
                    break;
                }

    }
    return 0;

}
