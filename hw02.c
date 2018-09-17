#include <stdio.h>
int main(){
  unsigned int x = 3000000000;
  char * px = &x;
  printf("Int printed as hex: %x\n", px);
  for(int n=0; n<sizeof(x); n++){
    printf("%d: %hhx", n, px)
    px++;
  }

  px = &x;
  for(int n=0; n<sizeof(x); n++){
    *px++;
    px++;
  }
  printf("Incrementing by 1.")
  printf("Decimal value: %d\n", x);
  printf("Hex value: %x\n", x);

  px = &x;
  for(int n=0; n<sizeof(x); n++){
    *px+=16;
    px++;
  }
  printf("Incrementing by 16.")
  printf("Decimal value: %d\n", x);
  printf("Hex value: %x\n", x);
}
