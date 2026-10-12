#include <stdio.h>

int main(void)
{
    char user_name[7];
    scanf("%s", &user_name);
    printf(
        "\"%s\"\n"
        "\"%20s\"\n"
        "\"%-20s\"\n"
        "\"     %s     \"\n",
        user_name,
        user_name,
        user_name,
        user_name
    );

    return 0;
}
