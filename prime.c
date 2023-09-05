#include<stdio.h>
void prime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            printf("It is not a prime number!! ");
            break;
        }
        else{
            i+=1;
            
        }
    }
    if(i==n){
        printf("It is a prime number!!");
    }
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x<=0){
        printf("It is not a valid number");
    }
    
    prime(x);
}
 
