#include <stdio.h>

int main() {
    char letter;

    for (int i = 0; i < 10; i++) {
        letter = 'A';
        for (int j = 0; j < 26; j++) {
            putchar(letter);
            letter++;
        }
        putchar('\n');
    }

    return 0;
}
