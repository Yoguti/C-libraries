#include <Stringlib.h>

// Memory manipulation functions
void *memcpy_stringlib(void *dest, const void *src, size_t n);
void *memmove_stringlib(void *dest, const void *src, size_t n);
void *memchr_stringlib(const void *s, int c, size_t n);
int memcmp_stringlib(const void *s1, const void *s2, size_t n);
void *memset_stringlib(void *s, int c, size_t n);

// String copy and concatenation functions
char *strcpy_stringlib(char *dest, const char *src);
char *strncpy_stringlib(char *dest, const char *src, size_t n);
char *strcat_stringlib(char *dest, const char *src);
char *strncat_stringlib(char *dest, const char *src, size_t n);

// String comparison functions
int strcmp_stringlib(const char *s1, const char *s2);
int strncmp_stringlib(const char *s1, const char *s2, size_t n);
int strcoll_stringlib(const char *s1, const char *s2);
size_t strxfrm_stringlib(char *dest, const char *src, size_t n);

// String search functions
char *strchr_stringlib(const char *s, int c);
char *strrchr_stringlib(const char *s, int c);
size_t strcspn_stringlib(const char *s, const char *reject);
size_t strspn_stringlib(const char *s, const char *accept);
char *strpbrk_stringlib(const char *s, const char *accept);
char *strstr_stringlib(const char *haystack, const char *needle);
char *strtok_stringlib(char *str, const char *delim);

// String length function
size_t strlen_stringlib(const char *s) {
    size_t size = 0;
    char *p = &s[0];
    while (*p != '\0')
    {
        size++;
        p++;
    }
    return size;
}
