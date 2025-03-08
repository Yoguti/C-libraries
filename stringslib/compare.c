#include <string.h>
#include <stdio.h>
#include <Stringlib.h>

int main() {
    char *hi = "This is a test STRING for stringlib.h";
    size_t total = strlen(hi);
    size_t totalmine = strlen_stringlib(hi);
    printf("%d\n", total);
    printf("%d\n", totalmine);


    return 0;

}