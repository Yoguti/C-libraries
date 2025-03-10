#ifndef STRINGLIB_H
#define STRINGLIB_H

#include <stddef.h>
#include <stdlib.h>

// Memory manipulation functions
void *memcpy_stringlib(void *dest, const void *src, size_t n);    // Copy memory area
void *memmove_stringlib(void *dest, const void *src, size_t n);   // Move memory area
void *memchr_stringlib(const void *s, int c, size_t n);           // Locate byte in memory area
int memcmp_stringlib(const void *s1, const void *s2, size_t n);   // Compare memory areas
void *memset_stringlib(void *s, int c, size_t n);                 // Fill memory with a constant byte

// String copy and concatenation functions
char *strcpy_stringlib(char *dest, const char *src);              // Copy string
char *strncpy_stringlib(char *dest, const char *src, size_t n);   // Copy fixed-size string
char *strcat_stringlib(char *dest, const char *src);              // Concatenate strings
char *strncat_stringlib(char *dest, const char *src, size_t n);   // Concatenate fixed-size strings

// String comparison functions
int strcmp_stringlib(const char *s1, const char *s2);             // Compare strings
int strncmp_stringlib(const char *s1, const char *s2, size_t n);  // Compare fixed-size strings
int strcoll_stringlib(const char *s1, const char *s2);            // Compare strings using locale
size_t strxfrm_stringlib(char *dest, const char *src, size_t n);  // Transform string for comparison

// String search functions
char *strchr_stringlib(const char *s, int c);                     // Locate character in string [x]
char *strrchr_stringlib(const char *s, int c);                    // Locate last occurrence of character in string
size_t strcspn_stringlib(const char *s, const char *reject);      // Get span until character in reject [x]
size_t strspn_stringlib(const char *s, const char *accept);       // Get span of character in accept [x]
char *strpbrk_stringlib(const char *s, const char *accept);       // Locate any character from accept in string [x]
char *strstr_stringlib(const char *haystack, const char *needle); // Locate substring
char *strtok_stringlib(char *str, const char *delim);             // Tokenize string

// String length function
size_t strlen_stringlib(const char *s);                           // Calculate length of string [x]


#endif // STRINGLIB_H
