                                 // PREDEFINE MATRIX USING LOOPS

// #include<stdio.h>
// int main()
// {
//     int i,j,matrix1[3][3],matrix2[3][3],matrix3[3][3]={0};
//     printf("enter the forst matrix output\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     printf("enter the second matrix output\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&matrix2[i][j]);
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             for(int k=0;k<3;k++)
//             {
//                 matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
//             }
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d\t",matrix3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }





                                            // USER DEFINE MATRXI USING FUNCTIONS
#include<stdio.h>
int input(int r,int c,int matr[][c],int flag)
{
    if (flag==0)
    {
        printf("enter the data for first matrix\n");
    }
    else{
        printf("enter the data for second matrix\n");
    }
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matr[i][j]);
            fflush(stdin);
        }
    }
    
}
int mul(int r1,int c1,int r2,int c2,int matr1[r1][c1],int matr2[r2][c2],int matr3[r1][c2])
{
    int i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c2;k++)
            {
                matr3[i][j]=matr3[i][j]+matr1[i][k]*matr2[k][j];
            }
        }
    }  
}
int print(int r1,int c2,int r2,int c1,int matr3[r1][c2])
{
    int i,j;
    printf("product is here\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",matr3[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r1,r2,c1,c2;
    printf("enter the size of first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("enter the size of second matrix\n");
    scanf("%d %d",&r2,&c2);
    int matr1[r1][c1],matr2[r2][c2],matr3[r1][c2];
    input(r1,c1,matr1,0);
    input(r2,c2,matr2,1);
    // matr3[r1][c2]=0;
    mul(r1,c1,r2,c2,matr1,matr2,matr3);
    print(r1,c2,r2,c1,matr3);
    return 0;
}