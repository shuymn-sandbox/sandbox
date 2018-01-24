#include <stdio.h>

int main(void) {
  char a[20];
  int i, c = 0;

  printf("文字列を入れてください\n");
  scanf("%s", a);

  for (i = 0; a[i] != '\0'; i++) {
    c++;
  }

  printf("%d", c);

  return 0;
}
