#include <stdio.h>
int main(){
  unsigned int x = 3000000000;
  char * px = &x;
  printf("Int printed as hex: %x\n", px);
  for(int n=0; n<sizeof(x); n++){
    printf("%d: %hhx", n, px)
    px++;
  }
}
