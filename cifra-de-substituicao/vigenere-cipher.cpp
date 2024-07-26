#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int mod(int a, int b) {
    return (a % b + b) % b
}

char* vigenereCipher(char* input, char* key, bool encipher) {
    int keyLen = strlen(key);

    for(i == 0; i < keyLen - 1; i++) {

    }

    int inputLen = strlen(input);
    
}
// Função Cipher(input, key, encipher):
//     keyLen ← Comprimento de key

//     Para i de 0 até keyLen - 1:
//         Se não é alfabético(key[i]):
//             Retornar ""  // Erro, chave contém caractere não alfabético

//     inputLen ← Comprimento de input
//     output ← Alocar memória para inputLen + 1 caracteres
//     nonAlphaCharCount ← 0

//     Para i de 0 até inputLen - 1:
//         Se é alfabético(input[i]):
//             Se letra do input maiuscula:
//                 offset ← 'A'
//             Senão:
//                 offset ← 'a'
                
//             keyIndex ← (i - nonAlphaCharCount) % keyLen
//             k ← (Se letra do input maiuscula então Converter para maiúscula(key[keyIndex]) senão Converter para minúscula(key[keyIndex])) - offset
//             Se encipher:
//                 k ← k
//             Senão:
//                 k ← -k

//             ch ← Convertendo para caractere((Mod(((input[i] + k) - offset), 26)) + offset)
//             output[i] ← ch
//         Senão:
//             output[i] ← input[i]
//             nonAlphaCharCount ← nonAlphaCharCount + 1

//     output[inputLen] ← '\0'
//     Retornar output

// Função Encipher(input, key):
//     Retornar Cipher(input, key, verdadeiro)

// Função Decipher(input, key):
//     Retornar Cipher(input, key, falso)
