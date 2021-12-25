#include<stdio.h>
#define start main
int start()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int rem,result=0;
    int orginial=num;
    for(;num!=0;)
    {
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;
    }
    if(orginial==result)
    {
        printf("%d is armstrong number\n",result);
    }
    else
    {
        printf("%d is not a armstrong\n",result);
    }
    return 0;
}