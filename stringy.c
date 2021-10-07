#include <stdio.h>
#include <string.h>
void print_char(char c) {
  printf("%c - %hhu\n", c, c);
}
void print_string(char *s, int n) {
  char *cp = s;
  for (int i = 0; i < n; i ++) {
    print_char(*cp ++);
  }
  printf("\n");
}
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
