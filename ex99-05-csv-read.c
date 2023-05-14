/*
CSV(Comma-Separated Values) 
    데이터를 저장하는데 사용되는 텍스트 파일 형식이다.
*/
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(void)
{
    FILE* file = fopen("data.csv", "r");
    char line[MAX_LINE_LENGTH];

    if(file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int i = 1;
    while (fgets(line, sizeof(line), file)) 
    {
        printf("%d: " ,i);
        char* field = strtok(line, ",");
        while (field)
        {
            printf("%s ", field);
            field = strtok(NULL, ",");
        }
        i++;
    }
    fclose(file);
    return 0;
}
