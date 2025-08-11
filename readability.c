#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char text[1000];

    printf("Text: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
            letters++;

        if (text[i] == ' ')
            words++;

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            sentences++;
    }

    double L = (double)letters / words * 100;
    double S = (double)sentences / words * 100;

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(index);

    if (grade < 1)
        printf("Before Grade 1\n");
    else if (grade >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %d\n", grade);

    return 0;
}
