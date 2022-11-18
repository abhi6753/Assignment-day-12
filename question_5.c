//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
#include<conio.h>
void EvenNatural(int);
int main()
{
    int N;
    printf("How many first N even natural numbers want to print:\n");
    scanf("%d",&N);
    EvenNatural(N); //Actual Argument
    getch();
    return 0;
}
void EvenNatural(int N) //formal argument
{
    if(N>=1)
    {
      EvenNatural(N-1);
      printf("%d ",N*2);
    }
    
}
