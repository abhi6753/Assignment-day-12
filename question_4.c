//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void Reverse_Odd_Natural(int);
int main()
{
    int N;
    printf("How many first N odd natural numbers in reverse order you want to print:\n");
    scanf("%d",&N);
    Reverse_Odd_Natural(N);
    getch();
    return 0;
}
void Reverse_Odd_Natural(int N)
{ 
    printf("%d ",2*N-1);  
    if(N>1)
    {
       Reverse_Odd_Natural(N-1);
    }
}