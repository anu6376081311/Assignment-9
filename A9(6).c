#include<stdio.h>
int main()
{
    int n;
    printf("enter year ");
    scanf("%d",&n);

    switch(n%100 == 0)
    {
    case 1 :
        switch(n%400 == 0)
        {
        case 1 :
            printf("leap year");
            break;
        case 0 :
            printf("non leap year");
            break;
        }
        break;
        case 0 :
            switch(n%4 == 0)
            {
            case 1 :
                printf("leap year");
                break;
            case 0 :
                printf("Non leap year");
                break;
            }
       break;
    }
    return 0;

}

