
void piglatin(const char * input, char * output) {
int rest_index = strlen(input);
reverse_input(input, output);
otput[rest_index] = 'a';
output[rest_index + 1] = 'y';
output[rest_index + 2] = 0;
}

void reverse_input(const char *input, char * output) {
int reverse_index = strlen(input) - 1;
for (int i = 0; input[i] != 0; i++) {
output[reverse_index] = input[i];
reverse_index++;
}
}
