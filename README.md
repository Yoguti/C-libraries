# My C Libraries

A collection of custom implementations for standard C library functions and personal projects. Currently focusing on `string.h`.

## Warning
- These are for learning purposes only, note that even tho the functions work just as intended, they will not throw the usual compiler warnings because the code will be evaluated as user code when read.

## Installation
1. Clone the repo:
   
       git clone https://github.com/yourusername/my-c-libraries.git

2. Build the library:
   
       make

## Usage

Include the header in your code and use the functions as shown below:

       #include <string.h>
       #include <stdio.h>
       #include "Stringlib.h"

       int main() {
           
           char *hi = "abcdefghijklmnopqrstuvwxyz";
           char d[27];

           memcpy(d, hi, sizeof(char) * 28); // normal string.h call
                
           printf("%s\n", d);

           char *hii = "abcdefghijklmnopqrstuvwxyz";
           char dd[27];

           memcpy_stringlib(dd, hii, sizeof(char) * 28); // Stringlib.h call

           printf("%s\n", dd);

           return 0;
       }

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
