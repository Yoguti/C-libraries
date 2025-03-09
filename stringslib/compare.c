#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    char *hi = "This is a test STRING for stringlib.h";
    int c = 'z';
    char* ret = strchr(hi, c);
    char* ret_li = strchr_stringlib(hi, c);

    if (ret == NULL) {
        printf("oi");
        return 0;
    }
    if (ret_li == NULL) {
        printf("oiii");
        return 0;
    }
    printf("%c\n", *ret);
    printf("%c\n", *ret_li);



    return 0;

}