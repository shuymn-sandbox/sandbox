#include <stdio.h>

typedef struct Car {
  int num;
  double gas;
} Car;

int main(void) {
  Car cars[3]; // 構造体の配列cars[]を宣言
  int i, size;

  cars[0].num = 1234; cars[0].gas = 25.5;
  cars[1].num = 2345; cars[1].gas = 20.5;
  cars[2].num = 3456; cars[2].gas = 35.5;

  size = sizeof(cars) / sizeof(cars[0]);

  for (i = 0; i < size; i++) {
    printf("[%d]\t車のナンバーは%d ガソリン量は%f\n", i+1, cars[i].num, cars[i].gas);
  }

  return 0;
}
