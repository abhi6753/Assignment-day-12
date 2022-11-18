//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
#include<conio.h>
void Octal(int);
int main()
{
    int num;
    printf("Enter decimal number to convert into octal:\n");
    scanf("%d",&num);
    printf("Octal number:\n");
    Octal(num);
    getch();
    return 0;
}
void Octal(int num)
{
    short bit;
    if(num>0)
    {
        Octal(num/8);
        bit = num%8;
        printf("%hi",bit);
    }
}