#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "");

    wchar_t *foo = L"1�+";
    wprintf(L"%ls\n", foo);

    wprintf(L"2�\n");

    wchar_t bar[2];
    bar[0] = 178;
    bar[1] = 0;
    wprintf(L"%ls\n", bar);

    return 0;
}
