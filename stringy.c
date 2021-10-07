#include <stdio.h>
#include <string.h>
int mystrlen(char *s) {
  int length = 0;
  for (char *cp = s; *cp; cp ++) {
    length ++;
  }
  return length;
}
char *mystrncpy(char *dest, char *source, int size) {
  char *dp = dest;
  char *sp = source;
  for (int i = 0; i < size; i ++) {
    *dp ++ = *sp ++;
  }
  return dest;
}
int main() {
  printf("the length of 'hello' is %lu\n", strlen("hello"));
  printf("the length of 'hello' is %d\n", mystrlen("hello"));
  char bob[10];
  char joe[10];
  strncpy(bob, "hello", 5);
  mystrncpy(joe, "hello", 5);
  printf("%s\n", bob);
  printf("%s\n", joe);
  return 0;
}
