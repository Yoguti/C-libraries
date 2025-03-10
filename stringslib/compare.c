#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    char *hi = "This0 is a test STRING for stringlib.h9";
    char* reject = "0123456789";

    char* RESULT = strpbrk(hi, reject);

    printf("%s\n", RESULT);

    char* RESULTb = strpbrk_stringlib(hi, reject);

    printf("%s", RESULTb);


    return 0;

}