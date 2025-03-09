#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    char *hi = "This is a test STRING for stringlib.h";
    char* reject = "s";

    size_t restult = strcspn(hi, reject);

    printf("%d\n", (int)restult);

    size_t result = strcspn_stringlib(hi, reject);

    printf("%d", (int)result);


    return 0;

}