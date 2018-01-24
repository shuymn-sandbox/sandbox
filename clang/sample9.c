#include <stdio.h>

typedef struct Car {
  int num;
  double gas;
} Car;

void show(Car *pC);

int main(void) {
  Car car1 = {0, 0.0};

  printf("ナンバーを入力してください．");
  scanf("%d", &car1.num);
  printf("ガソリン量を入力してください．");
  scanf("%lf", &car1.gas);

  show(&car1);

  return 0;
}

void show(Car *pC) {
  printf("車のナンバーは: %d\n", pC->num);
  printf("ガソリン量は: %f\n", pC->gas);
}
