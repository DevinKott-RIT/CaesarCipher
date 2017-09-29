#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cipher.h"

int main(void) {
    
    // create string to encrypt/decrypt
    char hello[] = "Hello, world!";
    char hello_en[] = "Lipps, asvph!";

    // print the shift
    short shift = 4;
    print_shift(shift);
    printf("Shift:\t\t%d\n", shift);
    
    // example of encryption
    printf("\nEncryption Example\n");
    printf("Original:\t%s\n", hello);
    char *encrypted = encrypt(hello, shift);
    printf("Encrypted:\t%s\n", encrypted);
    free(encrypted);

    // example of decryption
    printf("\nDecryption Example\n");
    printf("Original:\t%s\n", hello_en);
    char *decrypted = decrypt(hello_en, shift);
    printf("Decrypted:\t%s\n", decrypted);
    free(decrypted);

    // edge case of encryption/decryption
    printf("\nEmpty String Example\n");
    char nothing[] = "";
    printf("Original:\t%s\n", nothing);
    char *nothing_decrypted = decrypt(nothing, shift);
    printf("Decrypted:\t%s\n", nothing_decrypted);
    free(nothing_decrypted);

    // shift case of 26
    printf("\nShift 26 Example\n");
    printf("Original:\t%s\n", hello);
    char *hello_encrypted = encrypt(hello, 26);
    printf("Encrypted:\t%s\n", hello_encrypted);
    free(hello_encrypted);

    return EXIT_SUCCESS;
}
