#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return a;
        
    }
    else{
        return b;
    }
}
int gcd(int a,int b){
    
    int r;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            r=i;
            
            
        }
    }
    return r;
}
int main(){
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 1st Number: ");
    scanf("%d",&b);
    
    int hcf=gcd(a,b);
    printf("The HCF OF TWO NO.S IS: %d",hcf);
    
    return 0;
}
