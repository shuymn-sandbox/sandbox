#include <stdio.h>

void show0(void);
void show1(void);
void show2(void);

int main(void) {
  void (*pM[3])(void);
  int num;

  pM[0] = show0;
  pM[1] = show1;
  pM[2] = show2;

  printf("どの乗り物を呼び出しますか？(0,1,2)\n");
  scanf("%d", &num);

  if (num >= 0 && num <= 2) {
    (*pM[num])();
  }

  return 0;
}

void show0(void) {
printf("0です\n");
}

void show1(void) {
printf("1です\n");
}

void show2(void) {
printf("2です\n");
}
