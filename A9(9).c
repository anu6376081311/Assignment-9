
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1 : printf(" Uper nearest odd number is %d",x+1);
                 break;
        case 0 : printf(" the given number is odd so %d",x);
                 break;
    }
}
