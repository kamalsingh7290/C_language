#include<stdio.h>
int main()
{
    int i,num,arr[20];
    printf("enter the number to convert into binary\n");
    scanf("%d",&num);
    for( i=0;num>0;i++)
    {
        arr[i]=num%2;
        num=num/2;
    }
    for( i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
