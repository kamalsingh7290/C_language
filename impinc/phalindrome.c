#include<stdio.h>
int main()
{
    int num,rem,result=0,b;
    printf("enter the number to check whether its a phalindrome number or not\n");
    scanf("%d",&num);
    b=num;
    for(;num!=0;)
    {
        rem=num%10;
        result=(result*10)+rem;
        num=num/10;
    }
    if(b==result)
    {
        printf("this is phalindrome number\n");
    }
    else 
    {
        printf("this is not phalindrome number\n");
    }
    return 0;
}
