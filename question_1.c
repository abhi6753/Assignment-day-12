//1. Write a recursive function to print first N natural numbers.
#include<stdio.h>
#include<conio.h>
void natural (int);
int main()
{
    int N;
    printf("How many first N natural number you wants to print:\n");
    scanf("%d",&N);
    natural(N);
    getch();
    return 0;
}
void natural (int N)
{   
    /*if(N>1)  
    {
      natural(N-1);         we can also do like this
    }
    printf("%d ",N); */
    if(N==0)
    {
      return;  // here we can write return keyword to return the control
    }
    natural(N-1);
    printf("%d ",N);
}