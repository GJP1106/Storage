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
        printf("С�˴洢\n");
    else
    {
        printf("��˴洢\n");
    }
    system("pause");
    return 0;
}
