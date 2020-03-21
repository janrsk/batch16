#include <stdio.h>

int main(void)
{
  int jumlah;
  char c;
  printf("triangle: ");
  scanf("%d",&jumlah);
  printf("\n");

  if(jumlah>=0){
    for (int i = 1; i <= jumlah; i++){
    for (int j = 1; j <= i; j++){
    printf("#");
      }
      printf("\n");
    }
  }
  else {
    printf("Parameter harus angka dan positif");
  }

  return 0;
}
