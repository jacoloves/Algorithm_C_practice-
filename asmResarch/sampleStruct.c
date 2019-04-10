#include <stdio.h>
#include <string.h>

struct sample {
  int num;
  char name[30];
};

typedef struct sample sample_data;

void main() {
  sample_data smp[] =  {
    {1, "テスト1"},
    {2, "テスト2"},
    {3, "テスト3"},
    {4, "テスト4"}
  };


  for (int i = 0; i < 4; i++) {
    printf("番号：%d テスト名：%s\n", smp[i].num, smp[i].name);
  }

}
    

