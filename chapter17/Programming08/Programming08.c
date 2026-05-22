#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct NODE
{
    int32_t s32_data;
    struct NODE* pst_link;
} NODE;

int main(void)
{
    NODE* pst_list = NULL;
    NODE* pst_temp = NULL;
    NODE* pst_prev = NULL;
    NODE* pst_next = NULL;

    int32_t s32_input = 0;

    while (1)
    {
        printf("양의 정수를 입력하시오(종료 -1): ");
        scanf("%d", &s32_input);

        if (s32_input == -1)
        {
            break;
        }

        pst_temp = (NODE*)malloc(sizeof(NODE));

        if (pst_temp == NULL)
        {
            printf("[ERROR] Failed to allocate memory\n");
            exit(1);
        }

        pst_temp->s32_data = s32_input;

        if (pst_list == NULL)
        {
            pst_list = pst_temp;
        }
        else
        {
            pst_prev->pst_link = pst_temp;
        }

        pst_temp->pst_link = NULL;

        pst_prev = pst_temp;
    }

    pst_temp = pst_list;

    while (pst_temp != NULL)
    {
        printf("%d->", pst_temp->s32_data);

        pst_temp = pst_temp->pst_link;
    }

    printf("NULL\n");

    pst_temp = pst_list;

    while (pst_temp != NULL)
    {
        pst_next = pst_temp->pst_link;
        free(pst_temp);
        pst_temp = pst_next;
    }

    return 0;
}