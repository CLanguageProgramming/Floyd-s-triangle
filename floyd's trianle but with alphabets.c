#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of loops >>");
    scanf("%d", &a);
    int b=1;
    for(int i=a;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c ", b+64);
            b++;
        }
        b=1;
        printf("\n");
    }
}