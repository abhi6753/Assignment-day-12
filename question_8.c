//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
#include<conio.h>
#include<math.h>
void Binary(int);
int main()
{
    int num;
    printf("Enter decimal number to convert into binary number:\n");
    scanf("%d",&num);
    printf("Binary number repersentation of %d is:\n",num);
    Binary(num);
    getch();
    return 0;
}
void Binary(int num)
{
    short bit;
    if(num>0)
    {                  //First time logic clicked
        Binary(num/2);        
        bit = num%2;
        printf("%hi",bit);
    }
   /* if(num>0)
    {                // After watched doubt session
        Binary(num/2);
    }
    printf("%hi",num%2);*/
    
}
/*void Binary(int num)
{
    if(num==)
     return 0;
    Binary(num>>1);
    printf("%hi",num&1);
}*/
//1100001101010011