#include <stdio.h>

typedef struct Car {
  int num;
  double gas;
} Car;

void show(Car c);

int main(void) {
  Car car1 = {0, 0.0};

  printf("ナンバーを入力してください．");
  scanf("%d", &car1.num);
  printf("ガソリン量を入力してください．");
  scanf("%lf", &car1.gas);

  show(car1); // 構造体 car1 の値を渡す

  return 0;
}

void show(Car c) {
  printf("車のナンバーは: %d\nガソリン量は: %f\n", c.num, c.gas);
}
