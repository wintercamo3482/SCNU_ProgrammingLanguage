#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct course
{
    char ac8_subject[30];   // 과목 이름
    double d64_marks;       // 학점
};

int main(void)
{
    struct course* pst_course;

    int32_t s32_count = 0;

    printf("구조체의 개수: ");
    scanf("%d", &s32_count);

    pst_course = (struct course*)malloc(sizeof(struct course) * s32_count);

    if (pst_course == NULL)
    {
        printf("[ERROR] Failed to allocate memory\n");
        exit(1);
    }

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        printf("과목 이름과 성적: ");
        scanf(" %s %lf", pst_course[s32_i].ac8_subject, &pst_course[s32_i].d64_marks);
    }

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        printf("%-16s\t%.1lf\n", pst_course[s32_i].ac8_subject, pst_course[s32_i].d64_marks);
    }

    free(pst_course);

    return 0;
}