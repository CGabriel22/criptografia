#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?!@#$%&*()- ";

void encrypt(char* original_string, int n) {
    // En(x) = (x + n)
    int alphabet_len = strlen(alphabet);
    int o_string_len = strlen(original_string);
    for(int i = 0; i < o_string_len; ++i) {
        for(int a = 0; a < alphabet_len; ++a) {
            if (alphabet[a] == original_string[i]) {
                int count = a + n;
                if (count > alphabet_len - n) {
                    count = count - alphabet_len;
                    printf("%c", alphabet[count]);    
                } else {
                    printf("%c", alphabet[count]);
                }
            }
        }
    }
    printf("\n");
}

void decrypt(char* encrypt_string, int n) {
    // En(x) = (x - n)
    for(int i = 0; i < strlen(encrypt_string); ++i) {
        for(int a = 0; a < strlen(alphabet); ++a) {
            if (alphabet[a] == encrypt_string[i]) {
                // printf("%c", alphabet[a - n]);
                int count = a - n;
                if (count < 0) {
                    count = count + strlen(alphabet);
                    printf("%c", alphabet[count]);    
                } else {
                    printf("%c", alphabet[count]);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    // std::string command;
    //     std::cout << "Enter command: ";
    //     std::getline(std::cin, command);
    char message[50];
    printf("Insira a mensagem para criptografar:");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;
    encrypt(message, 3);
    printf("Insira a mensagem para descriptografar:");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;
    decrypt(message, 3);
}