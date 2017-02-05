#include <stdio.h>

int main(void) {
    int grade = 90
      /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */

    if (grade > 90) {
        letter = 'a';
    }
    else if (grade > 80) {
        letter = 'b';
    }
    else if (grade > 70) {
        letter = 'c';
    }
    else if (grade > 60) {
        letter = 'd';
    }
    printf("%c\n", letter);
    return 0;
}
//4 becomes f
//60 becomes f
//70 returns d
//80 returns d
//90 returns d
//The issue with the code snippet is that currently every value greater that 60 will return d. This is because each values greater than 60 will go through the final if statement last and fulfill it, changing letter to 'd', even if the value fulfilled earlier if statements. 
