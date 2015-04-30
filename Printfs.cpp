#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, y;
    for(x=y=5;y++<8;x=y) printf("%d %d \n",x,y);
    printf("%d %d \n", x, y);
    system("pause");
    return 0;
}

