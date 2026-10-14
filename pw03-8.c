#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    const char char_str[] = "Сбой матрицы";
    const wchar_t wchar_t_str[] = L"Сбой матрицы";
    setlocale(LC_ALL, "");
    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n"
        "wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
        sizeof(char_str), strlen(char_str),
        sizeof(wchar_t_str), wcslen(wchar_t_str)
    );
    return 0;
}
