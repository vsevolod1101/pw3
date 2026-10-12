#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[20] = "SibSUTIS";
    size_t sizeof_arr = sizeof(arr);
    size_t strlen_arr = strlen(arr);
    printf(
        "SIZEOF: %lu\n"
        "STRLEN: %lu\n"
        "FREE_BYTES: %lu\n",
        sizeof_arr,
        strlen_arr,
        sizeof_arr - strlen_arr
    );
    return 0;
}
