#include <stdio.h>
int factorial(int x){
    int fact=1;
    int i=1;
    while(i<x){
        fact=fact*x;
        x=x-1;
        
    }
    return fact;
}

int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a number: ");
    scanf("%d",&r);
    
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    int ncrfact=nfact/(rfact*nrfact);
    
    
    printf("%d",ncrfact);
    

    return 0;
}
