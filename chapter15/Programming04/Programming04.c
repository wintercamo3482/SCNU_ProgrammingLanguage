#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    char ac8_name[64];
    int32_t s32_korean;
    int32_t s32_math;
    int32_t s32_english;
    double d64_average;
} Student;

int main(void)
{
    FILE* fp_src;
    FILE* fp_dst;

    char ac8_src[256];
    char ac8_dst[256];

    char* pc8_src;
    char* pc8_dst;

    char ac8_header0[32];
    char ac8_header1[32];
    char ac8_header2[32];
    char ac8_header3[32];

    Student st_student;

    fp_src = fopen("src.txt", "r");
    fp_dst = fopen("dst.txt", "w");

    if (fp_src == NULL || fp_dst == NULL)
    {
        fprintf(stderr, "[ERROR] 파일을 열 수 없습니다.\n");
        exit(1);
    }
    
    fscanf(fp_src, "%s %s %s %s",  ac8_header0, ac8_header1, ac8_header2, ac8_header3);
    
    fprintf(fp_dst, "이름\t평균\n");

    while (fscanf(fp_src, "%s %d %d %d",
                  &st_student.ac8_name,
                  &st_student.s32_korean,
                  &st_student.s32_math,
                  &st_student.s32_english) == 4)
    {
        st_student.d64_average = (st_student.s32_korean + st_student.s32_math + st_student.s32_english) / 3.0;
        fprintf(fp_dst, "%s %.2lf\n", st_student.ac8_name, st_student.d64_average);
    }
    
    fclose(fp_src);
    fclose(fp_dst);

    return 0;
}