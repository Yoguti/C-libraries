# My C Libraries

A collection of custom implementations for standard C library functions. Currently focusing on `string.h`.

## Features
- Custom implementations of functions like `strlen`, `strcpy`, `strcmp`, etc.
- Avoids common warnings in standard implementations.

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

## Contributing
Fork the repository, create a branch, and submit a pull request with your improvements.

## License
MIT License.
