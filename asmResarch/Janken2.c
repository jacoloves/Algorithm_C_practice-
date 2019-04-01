#include <stdio.h>
#include <stdlib.h>

void main() {
  int pattern[2][4] = {{0, 0, 2, 1}, {1, 0, 0, 2}};

  int lose = 0;

  int p = 0;

  int n = 0;

  int human;
  
  int computer;

  srand(time(NULL));

  while (-1) {
    printf("じゃんけん（0=グー、1=チョキ、2=パー、その他＝終了）...");

    scanf("%d", &human);
    printf("ぽん！\n");

    if (human < 0 || human > 2) break;

    computer = pattern[p][n];
    n = (n + 1) % 4;

    if (computer == 0) {
      printf("コンピュータの手は「グー」です。\n");
    } else if (computer == 1) {
      printf("コンピュータの手は「チョキ」です。\n");
    } else {
      printf("コンピュータの手は「パー」です。\n");
    }
    printf("\n");

    if ((human == 0 && computer == 1) ||
	(human == 1 && computer == 2) ||
	(human == 2 && computer == 0)) {
      lose++;
    } else {
      lose = 0;
    }

    if (lose >= 2) {
      p = (p+1) % 2;
      n = 0;
    }
  }
}
   
