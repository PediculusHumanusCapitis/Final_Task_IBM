#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int i;

void generate_alpha_string(char* output, int length) {
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alpha_len = strlen(alphabet);

    for (i = 0; i < length; i++) {
        output[i] = alphabet[rand() % alpha_len];
    }
    output[length] = '\0';
}
void generate_digits(char* output, int length){
    const char digits[] = "0123456789";
    int alpha_len = strlen(digits);
    for (i = 0; i < length; i++) {
        output[i] = digits[rand() % alpha_len];
    }
    output[length] = '\0';
}
void generate_login_password(char* output, int length){
    const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char digits[] = "0123456789";
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int alpha_len = strlen(alphabet);
    int digits_len = strlen(digits);
    int uppercase_len = strlen(uppercase);
    output[0] = uppercase[rand() % uppercase_len];
    output[1] = digits[rand() % digits_len];
    for (i = 2; i < length; i++) {
        output[i] = alphabet[rand() % alpha_len];
    }
    output[length] = '\0';
}

