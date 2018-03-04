#include <stdio.h>
#include <windows.h>
int endian()
{
    int i = 1;
    char *p = (char *)&i;
    return *p;
}

int main()
{
    if(1 == endian())
        printf("Ð¡¶Ë´æ´¢\n");
    else
    {
        printf("´ó¶Ë´æ´¢\n");
    }
    system("pause");
    return 0;
}
