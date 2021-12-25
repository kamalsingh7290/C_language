#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter the number to check\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d is not prime number\n",num);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number\n",num);
    }
    return 0;
}
// lorem sl'SLas;aNSLnsn