#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    char *hi = "This is a test STRING for stringlib.h";
    char* reject = "This is a test STRING for 9";

    size_t restult = strspn(hi, reject);

    printf("%d\n", (int)restult);

    size_t result = strspn_stringlib(hi, reject);

    printf("%d", (int)result);


    return 0;

}