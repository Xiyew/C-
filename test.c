#include <stdio.h>
#include <math.h>
#include <string.h>

#define max 3

int main(int argc, char *argv[])
{
    int array[] = {1, 2, 3};
    int x = 0;
    int *p[max];
    for (size_t i = 0; i < max; i++)
    {
        p[i] = &array[i];
    }

    // while (p[x] <= &array[max - 1])//发生指针数组溢出
    for (size_t i = 0; i < max; i++)
    {
        printf("array[%d] = %d\n", x, *p[x]);
        x++;
    }

    /*---const char*表示的是字符串 string---*/
    const char *names[max] = {"Able", "Bitch", "Cindy"};
    char *const Names[max] = {"a", "b", "c"};

    /*---char *存储字符串首地址，%s输出到\0为止，%c则只输出一个字符---*/
    for (size_t i = 0; i < max; i++)
    {
        printf("名字为names[%d] = %s\n", i, names[i]);
        printf("名字为Names[%d] = %c\n", i, *names[i]);
    }

    return 0;
}
