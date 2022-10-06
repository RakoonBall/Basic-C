#include <stdio.h>
//there is always enough time can you improve that's the real deal
//we are not allowed to print them at once
/* 
cccccc
ccccc
cccc
ccc
cc
c
cc
ccc
cccc
ccccc
cccccc
*/
int main(){
    int i ,j;
    for(i = 7 ; i > 0; i--){
        for ( j=i; j > 0; j--)
        {
            printf("C");
        }
        printf("\n");
    }
    for(i = 2 ; i < 8 ; i++){
        for(j=i; j>0; j--){
            printf("C");
        }
        printf("\n");
    }
    return 0;
}