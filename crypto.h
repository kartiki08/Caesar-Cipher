// A cryptography module 

// encode(str, key) encodes str using the Caesar Cipher technique
//  the help of a key between 1 to 25 (inclusive).

void encode(char *str, int key);


// decode(str, key) decodes str using the Caesar Cipher technique
//  the help of a key between 1 to 25 (inclusive).

void decode (char *str, int key);


// input_msg(key, msg) is a set of instructions vital for the I/O
//  program to function.

void input_msg(int key, char *msg);


// pig_latin(input, output) stores in output the Pig Latin encoding
//  of input and prints it out.
// requires: output is large enough to store the result
// effects: modifies output
// time: O(n), where n is the length of input

void pig_latin(char *input, char *output);

