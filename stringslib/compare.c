#include <string.h>
#include <stdio.h>
#include "Stringlib.h"

int main() {
    
    char buffer[10];

    memset(buffer, '◯', sizeof(char) * 10);

    for (int i = 0; i < 10; i++) {
        printf("%c", buffer[i]);
    }
    printf("\n");

    memset_stringlib(buffer, 'o', sizeof(char) * 10);

    for (int i = 0; i < 10; i++) {
        printf("%c", buffer[i]);
    }
    return 0;

}