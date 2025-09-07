#include <stdio.h>
int main() 
{
    int a[5]={12,45,2,67,34}, max=a[0],i;
    for(i=1;i<5;i++) if(a[i]>max) max=a[i];
    printf("Max = %d",max);
    return 0;
}

