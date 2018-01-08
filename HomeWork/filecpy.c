#include <stdio.h>
#define size 1024
int main()
{
    char sour[] = "T:\\1.c";
    char dest[] = "T:\\2.c";
    FILE *pSour = fopen(sour, "rb");
    FILE *pDest = fopen(dest, "wb");
    char buffer[1024];
    int count;
    while ((count = fread(buffer, sizeof(char), size, pSour)) > 0)
    {
        fwrite(buffer, sizeof(char), count, pDest);
    }
    fclose(pSour);
    fclose(pDest);
    return 0;
}
