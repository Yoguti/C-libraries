#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    char *hi = "This0 is a test STRING for stringlib.h9";
    //char* reject = "0123456789";
    int use = '0';

    char* RESULT = strrchr(hi, use);

    printf("%s\n", RESULT);

    char* RESULTb = strrchr_stringlib(hi, use);

    printf("%s", RESULTb);


    return 0;

}