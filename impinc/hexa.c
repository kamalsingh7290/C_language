// // HexaDECIMAL TO BINARY
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char Hexadecimal[20];
    int i,var,result=0;
    printf("enter the Hexadecimal number\n");
    gets(Hexadecimal);
     int len=strlen(Hexadecimal);
     len--;
     for(i=0;Hexadecimal[i]!='\0';i++)
     {

         if(Hexadecimal[i]>='0'&&Hexadecimal[i]<='9')
         {
             result+=(Hexadecimal[i]-48)*pow(16,(len));
         }
         else if(Hexadecimal[i]>='A'&&Hexadecimal[i]<='F')
         {
             result+=(Hexadecimal[i]-55)*pow(16,(len));
         }
         else if(Hexadecimal[i]>='a'&&Hexadecimal[i]<='f')
         {
             result+=(Hexadecimal[i]-87)*pow(16,(len));
         }
         len--;
     }
     printf("Hexa decimal conversion of given code is %d",result);
    return 0;
    }
