#include <stdio.h>
int mystrlen(char *s) {
  int length = 0;
  for (char *cp = s; *cp; cp ++) {
    length ++;
  }
  return length;
}
int main() {
  printf("the length of 'hello' is %d\n", mystrlen("hello"));
  return 0;
}
