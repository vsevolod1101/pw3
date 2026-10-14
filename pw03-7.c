#include <stdio.h>
#include <string.h>
#define str1 "LinuxDistro"

int main(void)
{
    const char str2[] = "2026";
    printf(
        "DISTRO: %s\n"
        "RDATE: %s\n"
        "STRLEN: %zu\n"
        "SIZEOF: %zu\n",
        str1,
        str2,
        strlen(str1),
        sizeof(str1)
    );
    return 0;
}
