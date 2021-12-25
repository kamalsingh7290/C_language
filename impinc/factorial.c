// // #include<stdio.h>
// // int main()
// // {
// //     int num,fact=1;
// //     printf("enter the number whose you wanna find factorial\n");
// //     scanf("%d",&num);
// //     for(int i=0;i<num;i++)
// //     {
// //         fact=fact*(num-i);
// //         // printf("%d\n",fact);
// //     }
// //     printf("%d is factorial of number %d",fact,num);
// //     return 0;
// // }
//                                 // BY RECURSION
#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
    int term;
    if(n==0)
    {
        return 1;
    }
    else
    {
        return term=n*factorial(n-1);
    }   
    }
    
int main(void)
{
    int num;
    printf("enter the number whose you wanna find factorial\n");
    scanf("%d",&num);
    printf("factoral of %d is %d\n",num,factorial(num));
    return 0;
}
