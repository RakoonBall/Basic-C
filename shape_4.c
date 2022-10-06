// #include <stdio.h>

// int main(){
//     int row, i ,j;
//     printf("Enter the row number :");
//     scanf("%d", &row);
//     //giving gaps
//     for( i =0; i < row; i++){
//         for(j=0; j<i; j++){
//             printf(" ");
//         }
//         //printing the *
//         for(i= row-i; i > 0 ; i--){
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
//}


//we made an inverted triangle
/*
******
 *****
  ****
   ***
    **
     *
*/
#include <stdio.h>
 
int main() {
    // my trial
    int i, j, rows;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    for(i = 0; i <rows; i++){
        for(j = 0; j < rows; j++){
        if(j<i){
            printf(" ");
        }else{
            printf("*");
        }
        }
       
        printf("\n");
    }

    // int i, j, rows;
 
    // printf("Enter the number of rows\n");
    // scanf("%d", &rows);
 
    // for (i = 0; i < rows; i++) {
    //     for (j = 0; j < rows; j++) {
    //         if (j < i) {
    //             printf(" ");
    //         } else {
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}

