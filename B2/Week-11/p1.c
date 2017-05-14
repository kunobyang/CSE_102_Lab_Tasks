#include <stdio.h>
#include <stdlib.h>

int strlen(char *str)
{
    int len = 0;
    while (*str)
    {
        len++;
        str++;
    }

    return len;
}

char *insertInto(char *str1, char *str2, int pos)
{
    char *ans = (char *) malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));
    int i;

    for (i = 0; i < pos; i++)
        *(ans + i) = *(str1 + i);
    for (i = 0; i < strlen(str2); i++)
        *(ans + pos + i) = *(str2 + i);
    for (i = pos; i <= strlen(str1); i++)
        *(ans + strlen(str2) + i) = *(str1 + i);

    return ans;
}

int main()
{
    char *str1 = (char *) malloc(100 * sizeof(char)), *str2 = (char *) malloc(100 * sizeof(char));
    int pos;

    gets(str1);
    gets(str2);
    scanf("%d", &pos);

    printf("%s\n", insertInto(str1, str2, pos));

    free(str1);
    free(str2);

    return 0;
}
