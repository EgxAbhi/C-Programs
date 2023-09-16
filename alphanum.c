
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else{
            for(int j=1;j<=i;j++){
                char ch=j+64;
                printf("%c ",ch);
            }
        }
        if(i<n){
            printf("\n");
        }
    }

    return 0;
}
