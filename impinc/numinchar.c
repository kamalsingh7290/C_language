#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        // printf("%d\n",sum);
    }
    n=sum;
    while (n>0)
    {
        r=n%10;
        switch (r)
        {
        case 1:
            printf("one ");
            break;
case 2:
            printf("two ");
            break;
case 3:
            printf("three ");
            break;
case 4:
            printf("four ");
            break;
case 5:
            printf("five ");
            break;
case 6:
            printf("six ");
            break;
case 7:
           printf("seven ");
            break;
case 8:
            printf("eight ");
            break;
case 9:
            printf("nine ");
            break;
case 0:
            printf("zero ");
            break;
        default:printf("not valid");
            break;
        }
        n=n/10;
    }
    return 0;
}