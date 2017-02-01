#include <stdio.h>
int main(void)
{
  int i = 0;
  int j = 0;
  int x = i++;
  int y = ++j;
  printf("%i", i);
  printf("%i", j);
  printf("%i", x);
  printf("%i", y);
}
