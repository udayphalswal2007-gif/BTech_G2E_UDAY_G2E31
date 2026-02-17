#include<stdio.h>
int main() {
    char vowel;
    printf("Enter a vowel character: ");
    scanf(" %c", &vowel);
    switch(vowel) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a vowel.\n");
            break;
        default:
            printf("It is not a vowel.\n");
    }
}