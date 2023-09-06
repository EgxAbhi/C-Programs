#include <stdio.h>
#include <math.h>

int main()
{
    double num,result;
    int n;
    printf("Enter a number: ");
    scanf("%lf",&num);
    
    printf("Enter a number(for nth root): ");
    scanf("%d",&n);
    
    result=pow(num,1.0/n);
    
    printf("The %dth root of %.2lf is: %.2lf ",n,num,result);

    return 0;
}
