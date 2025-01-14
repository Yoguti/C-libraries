#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct employee_t {
    int id;
    int income;
    bool staff;
};

void swap(int *one, int *two) {
    int aux = *one;
    *one = *two;
    *two = aux;

    return;
}

void init_employee (struct employee_t *e) {
    e->id = 0;
    e->income = 10;
    e->staff = true;

    return;
}

int main(void) {
    int one;
    int two;
    scanf("%d",&one);
    scanf("%d",&two);
    printf("\n%d and %d", one, two);
    swap(&one, &two);
    printf("\n%d and %d\n", one, two);


    struct employee_t Ralph;
   // printf("%d\n", Ralph.income);
    init_employee(&Ralph);
   //printf("%d\n", Ralph.income);
    return 0;
}