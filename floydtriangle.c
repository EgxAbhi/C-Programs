#include <stdio.h>
int main(){
    
    int a=1;
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
            
        }
        if(i<4) printf("\n");
        
    }
        
    return 0;
    
}
    
