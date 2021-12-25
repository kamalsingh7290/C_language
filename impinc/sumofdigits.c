#include<stdio.h>
int main()
{
    int num,rem,result;
    printf("enter the number to sum\n");
    scanf("%d",&num);
    int original=num;
    for(;num!=0;)
    {
        rem=num%10;
        result+=rem;
        num=num/10;
    }
    printf("%d is sum of %d",result,original);
    return 0;
}