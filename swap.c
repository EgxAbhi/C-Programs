
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);
    
    int c;
    c=a;
    a=b;
    b=c;
    
    printf("VALUE OF A IS:%d ",a);
    
    printf("VALUE OF B IS:%d ",b);
    
    

    return 0;
}

    
