#include<stdio.h>
int main()
{
    int n = 0, current = 0, i = 0;
    double sum = 0;
    scanf("%d", &n);
    for(i = 0; i <= n - 1; i++)
    {
          scanf("%d", &current);
          sum += current;
    }
    printf("%.12lf\n", sum / n);
    return 0;
}
    
    
