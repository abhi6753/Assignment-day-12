//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
void Sqaure_Of_Natural_num(int);
int main()
{
    int N;
    printf("Enter number to print squares of first N natural numbers:\n");
    scanf("%d",&N);
    Sqaure_Of_Natural_num(N);
    getch();
    return 0;
}
void Sqaure_Of_Natural_num(int N)
{
    if(N>1)
    {
       Sqaure_Of_Natural_num(N-1);  
    }
    printf("%d ",N*N);
    
}