#include <stdio.h>

int main(void)
{
    int width;
    char str[256];
    scanf("%s %d", str, &width);
    printf(
        "%*s\n"
        "%-*s\n",
        width,
        str,
        width + 5,
        str
    );
    return 0;
}
