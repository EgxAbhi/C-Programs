#include <stdio.h>

int main()
{
    int num;//declare a number
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    int num1=num;//duplicate of num
    int sum=0; //armstrong number
    while(num>0){
        int dig=num%10;
        sum+=(dig*dig*dig);
        num/=10;
    }
    
    if(sum==num1){
        printf("It is an armstrong!! ");
    }
    else{
        printf("It is not an armstrong!! ");
    }

    return 0;
}
