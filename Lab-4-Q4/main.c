#include <stdio.h>
int main()
{
    char letter;
    printf("Enter a letter");
    scanf("%c", &letter);
    switch (letter)
    {
        case 'a':case'A':printf("%c is a vowel",letter);break;
        case 'e':case'E':printf("%c is a vowel",letter);break;
        case 'i':case'I':printf("%c is a vowel",letter);break;
        case 'o':case'O':printf("%c is a vowel",letter);break;
        case 'u':case'U':printf("%c is a vowel",letter);break;
        default:printf("%c is not a vowel", letter);
    }
}
