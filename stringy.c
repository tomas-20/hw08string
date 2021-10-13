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
  while (*++ dp);
  return mystrcpy(dp, source);
}
int charcmp(char a, char b) {
  if (a < b) {
    return -1;
  }
  if (a > b) {
    return 1;
  }
  return 0;
}
int mystrcmp(char *a, char *b) {
  while (*a == *b) {
    if (!*a) {
      return 0;
    }
    a ++;
    b ++;
  }
  if (!*a) {
    return -1;
  }
  if (!*b) {
    return 1;
  }
  return charcmp(*a, *b);
}
void testcmp(char *a, char *b) {
  printf("comparing %s and %s: %d %d\n", a, b, strcmp(a, b), mystrcmp(a, b));
}
void printpointer(char *p) {
  printf("%p points to %c\n", p, *p);
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
  char name[] = "bobby";
  strcat(greet0, name);
  mystrcat(greet1, name);
  printf("%s\n", greet0);
  printf("%s\n", greet1);
  testcmp("apple", "orange");
  testcmp("orange", "apple");
  testcmp("apple", "apple");
  testcmp("bob", "joe");
  testcmp("joe", "bob");
  testcmp("wab", "wabaloo");
  testcmp("wabaloo", "wab");
  char *p = strchr("hello", 'l');
  printpointer(p);
  char a = 'a';
  char b = 'b';
  printpointer(&a);
  printpointer(&b);
  return 0;
}
