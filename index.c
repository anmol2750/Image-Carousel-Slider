#include<stdio.h>
#include<conio.h>
void BubbleSort(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
                Swap(A[j],A[j+1]);
        }
    }
}
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int A[10]={2,4,7,1,6,4,9,10,3,8},n=10;
    int i;
    BubbleSort(A,10);
    for(i=0;i<n-1;i++)
        printf("%d",A[i]);
    printf("\n");
    return 0;
}
