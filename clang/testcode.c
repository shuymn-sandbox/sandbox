#include <stdio.h>

typedef struct Count {
  int odd, even, minus;
} Count;

void func(int s, int *pN, Count *pC);

int main(void) {
  int num[] = {2,-8,5,-4,6,5,7,-3,-9,1,3,8};
  Count c = {0,0,0};
  int size = sizeof(num) / sizeof(num[0]);

  func(size, num, &c);

  printf("奇数%d, 偶数%d, 負の数%d", c.odd, c.even, c.minus);

  return 0;
}

void func(int s, int *pN, Count *pC) {
  for (int i = 0; i < s; i++) {
    (pN[i] % 2 == 0) ? pC->even++ : pC->odd++;
    if (pN[i] < 0) pC->minus++;
  }
}
