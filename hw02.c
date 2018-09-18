#include <stdio.h>
int main(){
  unsigned int x = 3000000000;
  char *px = &x;
  printf("Int: %d\n", x);
  printf("Int printed as hex: %x\n", x);
  for(int n=0; n<sizeof(x); n++){
    printf("%d: %hhx\n", n, *px);
    px++;
  }

  px = &x;
  for(int n=0; n<sizeof(x); n++){
    *px+=1;
    px++;
  }
  printf("Incrementing by 1.\n");
  printf("Decimal value: %d\n", x);
  printf("Hex value: %x\n", x);

  px = &x;
  for(int n=0; n<sizeof(x); n++){
    *px+=16;
    px++;
  }
  printf("Incrementing by 16.\n");
  printf("Decimal value: %d\n", x);
  printf("Hex value: %x\n", x);
}
