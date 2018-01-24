#include <stdio.h>

int main(void) {
  int max = 0;
  int num = 5;
  int score[num];
  int i;

  for (i = 0; i < num; i++) {
    scanf("%d", &score[i]);
    if (score[i] > max) max = score[i];
  }

  for (i = 0; i < num; i++) {
    printf("%d番目の人の点数は%dです．\n", i+1, score[i]);
  }

  printf("最高点は%d点です．\n", max);

  return 0;
}
