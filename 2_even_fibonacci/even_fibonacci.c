#include <stdio.h>

int main(){
  int seq[] = {1, 2};
  int res = 2;
  int next = seq[1];
  while( next < 4000000 ){
    next = seq[0] + seq[1];
    seq[0] = seq[1];
    seq[1] = next;
    if( next % 2 == 0 ){
        res+=next;
    }
  }
  printf("Result: %d\n", res);
}
