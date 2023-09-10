#include<stdio.h>
int factorial(int x){
    int i=1;
    int fact=1;
    while(x>=1){
        fact=fact*x;
        x=x-1;
        
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int y=1;
    while(y<=n){
        printf("THE FACTORIAL OF %d IS %d:\n",y,factorial(y));
        y+=1;
    }
    return 0;
}
