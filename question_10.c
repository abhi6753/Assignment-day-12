//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
#include<conio.h>
void reverse(int);
int main()
{
    int num;
    printf("Enter number to print into reverse order:\n");
    scanf("%d",&num);
    printf("After reverse:\n");
    reverse(num);
    getch();
    return 0;
}
void reverse(int num)
{
    
   if(num) 
   {
     printf("%hi",num%10);
     reverse(num/10);
   }
}