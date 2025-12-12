#include <stdio.h>
int A(int n){
    int i, j, c=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j=j+i){
            printf(" Hello");
            c++;
        }
        printf("\n");
    }
    printf("%d",c);
}
int main(){
    
    A(6);
    
    return 0;
}
