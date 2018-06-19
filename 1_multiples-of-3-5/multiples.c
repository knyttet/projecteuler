#include <stdio.h>

int main()
{
  int result = 0;
  int i;

  for( i=1; i<1000; i++){
    if(( i % 3 == 0 ) || ( i % 5 == 0 )){
      result+=i;
      printf("Adding %d. Current count: %d\n", i, result);
    }
  }
  printf("Result: %d\n", result);

  return 0;
}
