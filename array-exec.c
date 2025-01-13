#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10
#define MAX_ID 32
#define MAX_EMPLOYEES 1000

struct employes_t {
    char name[64];
    char surname[64];
    float income;
    bool isManager;
};

int main(void) {
    
    int arr[MAX_SIZE] = {0};
    arr[3] = 2;
    printf("%d \n", arr[3]);

    char muhstr_hex[] = {0x68, 0x65, 0x68, 0x65, 0}; // 'h', 'e', 'h', 'e', '\0'
    char *muhstring = "hehe";
    char *muhst = "hehe";
    printf("%s, %s, %s\n", muhstring, muhstr_hex, muhst);  

    int arry[MAX_ID] = {0};

    for (int i = 0; i < MAX_ID; i++) {
        arry[i] = i;
        printf("%d ", arry[i]);
    }
    

    return 0;
}