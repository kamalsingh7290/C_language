
                                    //    by recursion
#include<stdio.h>
#include<stdlib.h>
void fibonnaci(int n)
{
    if(n>2)
    {
        static int n1=0,n2=1,n3;
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\t",n3);
        fibonnaci(n-1);
    }
}
int main()
{
    int size;
    printf("enter the size of fibonnaci series\n");
    scanf("%d",&size);
    if (size==0)
        {
            printf("SORRY! Invalid choice\n");
        }
    else if (size==1)
        {
            printf("0 is the only value in fibonnaci series\n");
        }
    else
        {
            printf("%d\t%d\t",0,1);
            fibonnaci(size);
        }
    return 0;
}