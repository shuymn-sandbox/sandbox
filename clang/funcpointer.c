#include <stdio.h>

int max(int x, int y);

int main(void) {
  int num1, num2, ans;
  int (*pM)(int x, int y); // 関数ポインタの宣言

  pM = max; // 関数のアドレスを代入

  printf("1番目の数値を入力してください．\n");
  scanf("%d", &num1);
  printf("2番目の数値を入力してください．\n");
  scanf("%d", &num2);

  ans = (*pM)(num1, num2); // ポインタを使って関数を呼び出す

  printf("最大値は%dです．\n", ans);

  return 0;
}

int max(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}
