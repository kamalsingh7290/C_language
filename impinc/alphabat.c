#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch=65;
    system("cls");
    for(int i=0;i<6;i++)
    {
        for(int j=6;j>i;j--)
        {
            printf(" ");
        }
        for(int m=0;m<=i;m++)
        {
            printf("%c",ch++);
        }
        ch--;
        for(int n=0;n<i;n++)
        {
          
            printf("%c",--ch);
        }
        printf("\n");
    }
    return 0;
}
