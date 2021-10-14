#include <stdio.h>
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
  while ((*dest = *source)) {
    dest ++;
    source ++;
  }
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
char *mystrncpy(char *dest, char *source, int n) {
  char *output = dest;
  while ((*dest = *source) && -- n > 0) {
    dest ++;
    source ++;
  }
  return output;
}
char *mystrncat(char *dest, char *source, int n) {
  char *output = dest;
  while (*dest) {
    dest ++;
  }
  mystrncpy(dest, source, n);
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
  if (c == 0) {
    while (*s) {
      s ++;
    }
    return s;
  }
  while (*s) {
    if (*s == c) {
      return s;
    }
    s ++;
  }
  return NULL;
}
