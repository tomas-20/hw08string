#include <stdio.h>
#include <string.h>
int mystrlen(char *s) {
  int length = 0;
  for (char *cp = s; *cp; cp ++) {
    length ++;
  }
  return length;
}
char *mystrcpy(char *dest, char *source) {
  char *dp = dest;
  char *sp = source;
  while ((*dp ++ = *sp ++));
  return dest;
}
int main() {
  printf("the length of 'hello' is %lu\n", strlen("hello"));
  printf("the length of 'hello' is %d\n", mystrlen("hello"));
  char bob[10];
  char joe[10];
  mystrcpy(bob, "hello");
  strcpy(joe, "hello");
  printf("%s\n", bob);
  printf("%s\n", joe);
  return 0;
}
