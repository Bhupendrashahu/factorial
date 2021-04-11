#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=1
    ;
    printf("\n ENTER THE NO FOR FACTORIAL");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
     j=j*i;
    {
    printf("\n %d",j);
    }
    getch();
}
