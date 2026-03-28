// Capitalizes a string — the WRONG way
//
// Run this. Enter a lowercase word.
// Notice that BOTH s and t get capitalized, even though we only changed t.
//
// TODO: Write a comment below explaining WHY this happens:
// ANSWER: ...

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[100];
    printf("s: ");
    scanf("%s", s);

    char t[100];
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}