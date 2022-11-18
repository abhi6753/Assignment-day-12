//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void ReverseEven(int );
int main()
{
    int N;
    printf("How many first N even natural numbers in reverse order wants to print:\n");
    scanf("%d",&N);
    ReverseEven(N);
    getch();
    return 0;
}
void ReverseEven(int N)
{
      printf("%d ",2*N);
      if(N>1)
      {
          ReverseEven(N-1);
      }
}