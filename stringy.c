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
char *mystrcat(char *dest, char *source) {
  char *dp = dest;
  char *sp = source;
  while (*++ dp);
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
  char greet0[50] = "hello my name is ";
  char greet1[50] = "hello my name is ";
  char name0[] = "bobby";
  char name1[] = "bobby";
  strcat(greet0, name0);
  mystrcat(greet1, name1);
  printf("%s\n", greet0);
  printf("%s\n", greet1);
  return 0;
}
