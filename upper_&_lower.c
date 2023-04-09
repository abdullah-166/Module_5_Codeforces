#include<stdio.h>
int main()
{
    char a;
    scanf(" %c",&a);
    if(a >= 'a' && a <= 'z')
    {
        int res = a - 32;
       printf("%c\n",res);
    }
    else 
    {
        int res = a + 32;
        printf("%c\n",res);
    }
    return 0;
}
