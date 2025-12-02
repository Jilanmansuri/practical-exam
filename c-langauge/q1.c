#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},   
        {7, 8, 9}
    };
    int sum = 0;

    for(int i = 1; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }
    
    printf("Sum of second row = %d\n", sum);
    return 0;
}



// // using only one loop 

// #include <stdio.h>
// int main() {
//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6}, 
//         {7, 8, 9}
//     };
//     int sum = 0;
//     for(int j = 0; j < 3; j++) {  
//         sum += a[1][j];           
//     }
//     printf("Sum of second row = %d\n", sum);
//     return 0;
// }
