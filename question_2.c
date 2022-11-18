//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void reverseNatural(int);
int main()
{
    int N;
    printf("How many first N natural numbers in reverse order you want to print:\n");
    scanf("%d",&N);
    reverseNatural(N);
    getch();
    return 0;
}
void reverseNatural(int N)
{
    printf("%d ",N);
    if(N>1)
    {    
        reverseNatural(N-1); 
    }
        
}
    