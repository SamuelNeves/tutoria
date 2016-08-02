#include <stdio.h>

int main(){
  int * p;
  *p=10;
  // int p=10;
  printf("%d\n", (p++));
  // printf("%d\n",(*p)++);
  // printf("%d\n",*(p++));

}
