#include <stdio.h>

void input(int *s);

int main(void) {
  int num = 5; // この個数の配列を用意する
  int score[num];
  int i;

  printf("テストの点数を入力してください．\n");

  for (i = 0; i < num; i++) {
    input(&score[i]);
    printf("%d\n", score[i]);
  }

  return 0;
}

int input(int n, int *s) {
    scanf("%d", s);
    printf("%d\n", score[i]);
}
