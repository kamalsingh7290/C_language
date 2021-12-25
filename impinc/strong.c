#include<stdio.h>
int fact(int rem)
{
    int factorial=1;
    for(int i=1;i<=rem;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int f,num,rem,orginial,result=0;
    printf("enter a number to check whether its a strong number or not\n");
    scanf("%d",&num);
    orginial=num;
    while(num!=0)
    {
        rem=num%10;
        f=fact(rem);
        num=num/10;
        result+=f;
    }
    if(orginial==result)
    {
        printf("%d is strong number\n",orginial);
    }
    else
    {
        printf("%d is not a strong number\n",orginial);
    }
    return 0;
}