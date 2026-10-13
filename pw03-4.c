#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf(
        "%s"
        "STRLEN: %zu\n"
        "SIZEOF: %zu\n",
        data,
        strlen(data),
        sizeof(data)
    );
    return 0;
}
