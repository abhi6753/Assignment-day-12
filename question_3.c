//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
#include<conio.h>
void OddNatural(int);
int main()
{
    int N;
    printf("How many first N odd natural numbers you want to print:\n");
    scanf("%d",&N);
    OddNatural(N);
    getch();
    return 0;
}
void OddNatural(int N)
{
    if(N>1)
    {
       OddNatural(N-1);
    }      
    printf("%d ",2*N-1);
    /*if(N==0)
    {             we can also make logic like this
        return 0;     
    }
    OddNatural(N-1);
    printf("%d",2*N-1);*/
}