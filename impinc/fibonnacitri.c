#include<stdio.h>
int main()
{
    int adding,first=0,second=1,i,j,size;
    printf("Enter the limit of fibonnaci series\n");
    scanf("%d",&size);
    printf("\t\t\t\t\t\t\t\tHere is Your Fibbonaci Series Upto %d\n",size);
    for(i=1;i<=size;i++)    
    {    
        first=0;    
        second=1;    
        printf("%d\t",first);    
        for(j=1;j<i;j++)    
        {    
            adding=first+second;    
            printf("%d\t",adding);    
            first=second;    
            second=adding;    
    
        }    
        printf("\n");    
    }    
    return 0;
}