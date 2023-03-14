#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.division\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1 :
        printf("The addition of two number is %d",a+b);
        break;
    case 2 :
        printf("The subtraction of two number is %d ",a-b);
        break;
    case 3 :
        printf("The multiplication of two number is %d",a*b);
        break;
    case 4 :
       printf("the division of two number is %d",a/b);
       break;

    }
    return 0;
}
