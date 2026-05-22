#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH      64
#define PHONE_LENGTH     64

typedef struct NODE
{
    char ac8_name[NAME_LENGTH];
    char ac8_phone[PHONE_LENGTH];
    
    struct NODE* pst_link;
} NODE;

void PrintMenu()
{
    printf("전화번호부 메뉴\n");
    printf("--------------------------------------\n");
    printf("1. 초기화\n");
    printf("2. 전화번호 추가\n");
    printf("3. 전화번호 탐색\n");
    printf("4. 종료\n");
    printf("--------------------------------------\n");
}

void PhoneBookInit(NODE** ppst_list)
{
    NODE* pst_temp = *ppst_list;
    NODE* pst_next = NULL;

    while (pst_temp != NULL)
    {
        pst_next = pst_temp->pst_link;
        free(pst_temp);

        pst_temp = pst_next;
    }

    *ppst_list = NULL;

    printf("초기화되었습니다.\n");
}

void PhoneBookAdd(NODE** ppst_list)
{
    NODE* pst_temp = NULL;
    NODE* pst_curr = NULL;

    pst_temp = (NODE*)malloc(sizeof(NODE));

    if (pst_temp == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }
    
    printf("이름: ");
    gets_s(pst_temp->ac8_name, NAME_LENGTH);
    
    printf("번호: ");
    gets_s(pst_temp->ac8_phone, PHONE_LENGTH);
    
    pst_temp->pst_link = NULL;

    if (*ppst_list == NULL)
    {
        *ppst_list = pst_temp;
    }
    else
    {
        pst_curr = *ppst_list;

        while (pst_curr->pst_link != NULL)
        {
            pst_curr = pst_curr->pst_link;
        }
        
        pst_curr->pst_link = pst_temp;
    }
    
    printf("추가되었습니다.\n");
}

void PhoneBookSearch(NODE* pst_list)
{
    NODE* pst_curr = pst_list;

    char ac8_target[NAME_LENGTH];
    
    printf("이름: ");
    gets_s(ac8_target, NAME_LENGTH);

    while (pst_curr != NULL)
    {
        if (strcmp(pst_curr->ac8_name, ac8_target) == 0)
        {
            printf("전화번호: %s\n", pst_curr->ac8_phone);
            return;
        }

        pst_curr = pst_curr->pst_link;
    }

    printf("찾을 수 없습니다.\n");
}

int main(void)
{
    NODE* pst_list = NULL;

    int32_t s32_menu = 0;

    while (1)
    {
        PrintMenu();
        
        printf("번호를 입력하시오: ");
        scanf("%d", &s32_menu);
        getchar();

        switch (s32_menu)
        {
        case 1:
            PhoneBookInit(&pst_list);
            break;

        case 2:
            PhoneBookAdd(&pst_list);
            break;

        case 3:
            PhoneBookSearch(pst_list);
            break;

        case 4:
            PhoneBookInit(&pst_list);
            return 0;

        default:
            printf("잘못된 메뉴입니다.\n");
            break;
        }
    }
}