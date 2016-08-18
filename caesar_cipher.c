#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <crypto.h>

void encode(char *str, int key) {
  int len = strlen(str);
  for (int x = 0; x < len; x++) {
    if (str[x] + key > 'Z') {
      str[x] = str[x] + key - 26;
      printf("%c", str[x]);
    }
    else {
      str[x] += key;
      printf("%c", str[x]);
    }
  }
  printf("\n");
}


void decode (char *str, int key) {
  int len = strlen(str);
  for (int x = 0; x < len; x++) {
    if (str[x] - key < 'A') {
        str[x] = str[x] - key + 26;
        printf("%c", str[x]);
        }
    else {
      str[x] -= key;
      printf("%c", str[x]);
    }
  }
  printf("\n");
}


void input_msg(int key, char *msg) {
  printf("Enter the message (max characters 80) in uppercase letters "
         "without any spaces:\n");
         scanf("%s", msg);
}
