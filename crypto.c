#include "crypto.h"


int main(void) {
  char command[7];
  printf("Welcome to Cryptography Program!\n");
  while(1) {
    printf("Command? ('piglatin', 'encode', 'decode' or 'quit')\n");
    scanf("%s", command);
    int key;
    if (strcmp(command, "piglatin") == 0) {
      char word[81];
      char result[83];
      if (scanf("%s", word) != 1) break;
      pig_latin(word, result);
      printf("%s\n", result);
    }
    else if (strcmp(command, "encode") == 0) {
      while (1) {
        printf("Enter a key from 1 to 25:\n");
        int RetVal = scanf("%d", &key);
        if ((1 <= key)  && (key <= 25)) {
          char msg[81];
          input_msg(key, msg);
          printf("The encoded message is:\n");
          encode(msg, key);
          break;
        }
        else if ((RetVal != 1) || (key > 25) || (key < 1)) {
          printf("Invalid key! ");
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
          input_msg(key, msg);
          printf("The original message is:\n");
          decode(msg, key);
          break;
        }
        else if ((RetVal != 1) || (key > 25) || (key < 1)) {
          printf("Invalid key! ");
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

