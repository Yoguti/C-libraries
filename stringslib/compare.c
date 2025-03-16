#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    
    char *hi = "abcdefghijklmnopqrstuvwxyz";
    char d[27];

    memcpy(d,hi, sizeof(char) * 28); //gives out warning
        
    printf("%s\n", d);


    char *hii = "abcdefghijklmnopqrstuvwxyz";
    char dd[27];

    memcpy_stringlib(dd,hii, sizeof(char) * 28); //my implementation, no warning

    printf("%s\n", dd);

    return 0;

}