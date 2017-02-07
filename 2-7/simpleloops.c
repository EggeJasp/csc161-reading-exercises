
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    //Prints each number between 0 and 9 in increasing order
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    //Prints each number between 0 and 10 in increasing order
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    //Prints each number between 1 and 10 in increasing order
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }
    //Prints each number between 10 and 1 in decreasing order
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    //Prints each number between 10 and 0 in decreasing order

    return 0;
}
//1) for(int i = 0; i < 10; i++)
//2) for(int i = 0; i <=10; i++){
//      printf("%d/n", i);
//   }
//3) for(int i = 10; i >=0; i--){
//      printf("%d/n", i);
//   }
