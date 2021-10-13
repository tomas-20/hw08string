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
  while (*s) {
    length ++;
    s ++;
  }
  return length;
}
char *mystrcpy(char *dest, char *source) {
  char *output = dest;
  while ((*dest ++ = *source ++));
  return output;
}
char *mystrcat(char *dest, char *source) {
  char *output = dest;
  while (*dest) {
    dest ++;
  }
  mystrcpy(dest, source);
  return output;
}
int mystrcmp(char *a, char *b) {
  while (*a || *b) {
    if (*a < *b) {
      return -1;
    }
    if (*a > *b) {
      return 1;
    }
    a ++;
    b ++;
  }
  return 0;
}
char *mystrchr(char *s, char c) {
  while (*s) {
    if (*s == c) {
      return s;
    }
    s ++;
  }
  return NULL;
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
  char name[] = "bobby";
  char greet0[50] = "hello my name is ";
  char greet1[50] = "hello my name is ";
  strcat(greet0, name);
  mystrcat(greet1, name);
  printf("%s\n", greet0);
  printf("%s\n", greet1);
  char empty0[50] = "";
  char empty1[50] = "";
  strcat(empty0, name);
  mystrcat(empty1, name);
  printf("%s\n", empty0);
  printf("%s\n", empty1);
  testcmp("apple", "orange");
  testcmp("orange", "apple");
  testcmp("apple", "apple");
  testcmp("bob", "joe");
  testcmp("joe", "bob");
  testcmp("wab", "wabaloo");
  testcmp("wabaloo", "wab");
  char *pointer = strchr("hello", 'l');
  char *apuntador = mystrchr("hello", 'l');
  printpointer(pointer);
  printpointer(apuntador);
  return 0;
}
