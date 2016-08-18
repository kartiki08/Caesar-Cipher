#include "crypto.h"
#include <strings.h>

void pig_latin(const char *input, char *output) {
  int len = strlen(input);
  for (int i = 1; i < len; i++) {
    output[i - 1] = input[i];
  }
  output[len - 1] = *input;
  output[len] = 'a';
  output[len + 1] = 'y';
  output[len + 2] = 0;
}


