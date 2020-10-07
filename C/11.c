#include <stdio.h>
void main()
{
    char c;
    printf("Enter Alphabet: ");
    scanf("%c",&c);
    if (c == 'a' || c == 'e'|| c == 'i'||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U')
        printf("Character entered is a vowel.\n");
    else
        printf("Character entered is a consonant.\n");
    
}