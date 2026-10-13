#include <stdio.h>

int main(void)
{
    char m;
    scanf("%c", &m);
    printf(
        "CODE_DEC: %d\n"
        "CODE_HEX: %x\n"
        "CODE_OCT: %o\n"
        "UPPER: %c\n"
        "NEXT: %c\n"
        "PREV: %c\n",
        m,
        m,
        m,
        m - ' ',
        m + 1,
        m - 1
    );
    return 0;
}
