#include <stdio.h>

int main(){
    int i,j,k;
    for(i =11,k=1; i > 0; i-- ,k++){
            for(k; k > 0; k-- ){
                printf(" ");
            } 
        for(j = i ; j > 0; j=j-2){
            printf("c");
        }
        printf("\n");
        }
    return 0;
}