#include <stdio.h>
void printBox(void) {
    printf("  ------\n");
    printf("  |    |\n");
    printf("  |    |\n");
    printf("  ------\n");
}
void printCone(void) {
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf("  ------\n");
}
void drawRocketShip(void) {
    printCone();
    printBox();
    printCone();
}
int main(void){
  drawRocketShip();
  return 0;
}
