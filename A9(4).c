#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("\n###############################\n");
    printf("\nEnter your choice :\n");
    printf("1.To check isoscles tringle \n");
    printf("2.To check right angle tringle \n");
    printf("3.To check Equilateral tringle \n");
    printf("4.Exit\n");
    scanf("%d",&choice);

    printf("Enter the length of 3 sides of tringle :");
    scanf("%d %d %d",&a,&b,&c);


    switch(choice)
    {
   case 1 : if(a == b || b == c || c == a)
           printf(" Isoceles\n");
           else
            printf(" Not an isoceles\n");
            break;

  case 2 : if(a*a == b*b + c*c || c*c == a*a +b*b || c*c == a*a+b*b)
           printf(" right angle triangle\n");
           else
            printf(" Not a right angle triangle\n");
            break;

  case 3 : if((a == b) && (b == c))
           printf("equilateral\n");
           else
            printf(" Not an equilateral\n");
            break;
 case 4 : return;
 default : printf("invalid");
      }
  }
    return 0;
}
