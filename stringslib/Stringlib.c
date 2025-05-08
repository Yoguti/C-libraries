#include "Stringlib.h"

// Memory manipulation functions
void *memcpy_stringlib(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (unsigned char*)src;
    
    for (size_t i = 0; i < n; i++) {
        *d++ = *s++;
    }

    return dest;
}
void *memmove_stringlib(void *dest, const void *src, size_t n) { 
    // memcpy with overlap protection
    unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char*)src;

    if (d < s || d >= s + n) {
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i]; // == *(d + i) = *(s + i);
        }
    } else { // if overlap
        for (size_t i = n; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}
void *memchr_stringlib(const void *s, int c, size_t n) {
    unsigned char *p = (unsigned char*)s;

    for (size_t i = 0; i < n; i++) {
        if (*p == (unsigned char)c) {
            return (void*)p;
        }
        p++;
    }
    return NULL;
}
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
char *strrchr_stringlib(const char *s, int c) {
    const char *p = &s[0]; 
    char *lp = NULL;

    while (*p != '\0') {
        if (*p == (char)c) {
            lp = (char *)p;
        }
        p++;
    }
    if ((char)c == '\0') {
        return (char *)p;
    }

    return lp;
}
char *strchr_stringlib(const char *s, int c) {
    const char *p = &s[0];
    while (*p != '\0')
    {
        if (*p == c) {
            return (char *)p;
        }
        p++;
    }
    p = NULL;
    return NULL;   
}
size_t strcspn_stringlib(const char *s, const char *reject) {
    size_t size = 0;
    const char *p = &s[0];
    const char *r = &reject[0];

    while (*p != '\0') {
        while (*r != '\0')
        {
            if (*p == *r) {
                return size;
            }
            r++;
        }
        r = &reject[0];
        p++;
        size++;
    }
    return 0;
}
size_t strspn_stringlib(const char *s, const char *accept) {
    size_t size = 0;
    const char *p = &s[0];

    while (*p != '\0')
    {
        const char *a = &accept[0];
        int found = 0;

        while (*a != '\0')
        {
            if (*p == *a)
            {
                found = 1;
                break;
            }
            a++;
        }
        if (found == 0)
        {
            return size;
        }
        size++;
        p++;
        
    }
    return size;

}
char *strpbrk_stringlib(const char *s, const char *accept) {
    const char *p = &s[0];
    while (*p != '\0')
    {
        const char *a = &accept[0];
        while (*a != '\0')
        {
            if (*p == *a) {
                return (char*)p;
            }
            a++;
        }
        p++;
    }
    return NULL; 
}
char *strstr_stringlib(const char *haystack, const char *needle) {
    const char *n = &needle[0];
    const char *p = &haystack[0];

    while (*n != '\0')
    {
        if (*n != *p) {
            p++;
            n = &needle[0];
        }

    }
    
}
char *strtok_stringlib(char *str, const char *delim);

// String length function
size_t strlen_stringlib(const char *s) {
    size_t size = 0;
    const char *p = &s[0];
    while (*p != '\0')
    {
        size++;
        p++;
    }
    return size;
}
