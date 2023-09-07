
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);
    
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("VALUE OF A IS:%d ",a);
    
    printf("VALUE OF B IS:%d ",b);
    
    

    return 0;
}

    
