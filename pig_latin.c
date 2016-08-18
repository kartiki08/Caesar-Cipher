#include "crypto.h"
#include <strings.h>

void piglatin(char *input, char *output) {
  int len = strlen(input) - 1;
  output[len + 1] = 'a';
  output[len + 2] = 'y';
  output[len + 3] = 0;
  *(output + len) = *input;
  for (int i = 1; i < len; i++) {
    output[i - 1] = input[i];
  }
}
