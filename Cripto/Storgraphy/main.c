#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int* storgraphy(int, int *, size_t);
int *ord_1(int, int *, int);
int *ord_2(int, int *, int);
int *ord_3(int, int *, int);
int *ord_4(int, int *, int);

int main(int argc, char *argv[])
{
    int senhasecretafoda[] = {33, 33, 2, 2, 33, 33, 4, 8};
    int tamanho_senhafoda = 8;
    char *num_conta = 0;
    char *num_secreto = 0;
    char* id = 0;
    if (argc == 4)
    {
        num_conta = argv[1];
        num_secreto = argv[2];
        id = argv[3];
        printf("numero conta: %s\n", num_conta);
        printf("numero secreto : %s\n", num_secreto);
        printf("numero id : %s\n", id);

    }
    else
    {
        printf("Uso: número da conta, dígito secreto, id\n");
        return 1;
    }
    size_t comprimento = strlen(num_conta);
    int converted_id = (int)(id[0] - '0');
    int *converted_num_conta = (int *)malloc(comprimento * sizeof(int));
    int converted_num_secreto = (int)(num_secreto[0] - '0');
    for (size_t i = 0; i < comprimento; i++)
    {
        converted_num_conta[i] = (int)(num_conta[i] - '0');
    }

    printf("Conta convertida para inteiros: ");
    for (size_t i = 0; i < comprimento; i++)
    {
        printf("%d ", converted_num_conta[i]);
    }
    printf("\n");

    int* resultado_final = storgraphy(converted_num_secreto, converted_num_conta, comprimento);
    printf("Senha enviada: \n");
    for (size_t i = 0; i < comprimento; i++)
    {
        printf("%d ", resultado_final[i]);
    }
    printf("\n");

    bool deucerto = true;
    for (size_t i = 0; i < tamanho_senhafoda; i++)
    {
        if (resultado_final[i] != senhasecretafoda[i]) {
            printf("apangando pasta winsodws system 32 ou sei la assim algo de medo ,estalando herobrine\n");
            deucerto = false;
            break;
        }
    }

    if(deucerto) {
        printf("bem vindo ao sistewma de navegacao nordestao oeste\n");
    } else {
        printf("estalando herobrine e baldies basic\n");
    }
    

    free(converted_num_conta);
    return 0;
}

int* storgraphy(int num_secreto, int *num_conta, size_t tamanho)
{
    int *result = 0;
    switch (num_secreto)
    {
    case 1:
        result = ord_1(tamanho, num_conta, num_secreto);
        break;

    case 2:
        result = ord_2(tamanho, num_conta, num_secreto);
        break;

    case 3:
        result = ord_3(tamanho, num_conta, num_secreto);
        break;

    case 4:
        result = ord_4(tamanho, num_conta, num_secreto);
        break;

    default:
        printf("AAAAAAAAAAAAAAAAAAAAAA!");
        exit(-1);
        break;
    }

    return num_conta;
}

int *ord_1(int tamanho, int *num_conta, int num_secreto)
{
    int *head = &num_conta[0];
    int *tail = &num_conta[tamanho - 1];

    while (head < tail)
    {
        int aux = *head;
        *head = *tail;
        *tail = aux;
        head++;
        tail--;
    }

    head = &num_conta[0];
    tail = &num_conta[tamanho - 1];

    int aux = *head;
    *head = *tail;
    *tail = aux;

    if (num_secreto != 1)
    {
        printf("Malandragem");
        exit(0);
    }
    return num_conta;
}

int *ord_2(int tamanho, int *num_conta, int num_secreto)
{
    int *head = &num_conta[0];
    int *post = head++;

    for (size_t i = 0; i < tamanho; i++)
    {
        for (size_t j = 0; j < tamanho; j++)
        {
            int *a = num_conta + i;
            int *b = num_conta + j;

            if (*a < *b)
            {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }

    for (size_t i = 0; i < tamanho; i++)
    {
        int *a = num_conta + i;
        if (*a % 2 != 0)
        {
            *a = 33;
        }
    }

    if (num_secreto != 2)
    {
        printf("Malandragem");
        exit(0);
    }

    return num_conta;
}

int *ord_3(int tamanho, int *num_conta, int num_secreto)
{

    int div = (int)(tamanho / 2);

    for (size_t i = 0; i < div; i++)
    {
        int *head = num_conta + i;
        *head += 5;
    }

    for (size_t i = div; i < tamanho; i++)
    {
        int *head = num_conta + i;
        *head -= 7;
    }

    if (num_secreto != 3)
    {
        printf("Malandragem");
        exit(0);
    }
    return num_conta;
}

int *ord_4(int tamanho, int *num_conta, int num_secreto)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        num_conta[i] += num_conta[i + 1];
    }

    if (num_secreto != 4)
    {
        printf("Malandragem");
        exit(0);
    }
    return num_conta;
}