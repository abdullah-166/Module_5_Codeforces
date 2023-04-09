#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int A = a;
    while (A >= 10)
    {
        A /= 10;
    }
    
    if(A %2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}