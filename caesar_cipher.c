#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


int main(void) {
  char command[7];
  printf("Welcome to Caesar Cipher Program!\n");
  while(1) {
    printf("Command? ('encode', 'decode' or 'quit')\n");
    scanf("%s", command);
    int key;
    if (strcmp(command, "encode") == 0) {
      while (1) {
        printf("Enter a key from 1 to 25:\n");
        int RetVal = scanf("%d", &key);
        if ((1 <= key)  && (key <= 25)) {
          char msg[81];
          printf("Enter the message (max characters 80) in uppercase letters "
                 "without any spaces:\n");
          scanf("%s", msg);
          printf("The encoded message is:\n");
          encode(msg, key);
          break;
        }
        else if ((RetVal != 1) || (key > 25) || (key < 1)) {
          printf("Invalid key!");
        }
      }
    }
    else if(strcmp(command, "decode") == 0) {
    // note to self: get rid of the repetitive code below
      while (1) {
        printf("Enter a key from 1 to 25:\n");
        int RetVal = scanf("%d", &key);
        if ((1 <= key)  && (key <= 25)) {
          char msg[81];
          printf("Enter the message (max characters 80) in uppercase letters "
                 "without any spaces:\n");
          scanf("%s", msg);
          printf("The original message is:\n");
          decode(msg, key);
          break;
        }
        else if ((RetVal != 1) || (key > 25) || (key < 1)) {
          printf("Invalid key!");
        }
      }
    }
    else if (strcmp(command, "quit") == 0) {
      printf("The program has been terminated!\n");
      break;
    }
    else {
    printf("Invalid input!\n");
    }
  }
}

