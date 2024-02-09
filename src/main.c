/**
 * main.c
 */
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define COLOR_BLACK L"\033[0;30m"
#define COLOR_RED L"\033[0;31m"
#define COLOR_GREEN L"\033[0;32m"
#define COLOR_YELLOW L"\033[0;33m"
#define COLOR_BLUE L"\033[0;34m"
#define COLOR_PURPLE L"\033[0;35m"
#define COLOR_CYAN L"\033[0;36m"
#define COLOR_WHITE L"\033[0;37m"
#define COLOR_BRIGTH_BLACK L"\033[0;90m"
#define COLOR_BRIGTH_RED L"\033[0;91m"
#define COLOR_BRIGTH_GREEN L"\033[0;92m"
#define COLOR_BRIGTH_YELLOW L"\033[0;93m"
#define COLOR_BRIGHT_BLUE L"\033[0;94m"
#define COLOR_BRIGHT_PURPLE L"\033[0;95m"
#define COLOR_BRIGHT_CYAN L"\033[0;96m"
#define COLOR_BRIGHT_WHITE L"\033[0;97m"
#define COLOR_RESET_TO_DEFAULT L"\033[0m"

void change_terminal_color(wchar_t *color);

int main()
{
    setlocale(LC_CTYPE, "");

    wchar_t *s = L"Hello, world!!!";

    change_terminal_color(COLOR_BLACK);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGTH_BLACK);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_RED);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGTH_RED);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_GREEN);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGTH_GREEN);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_YELLOW);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGTH_YELLOW);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BLUE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGHT_BLUE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_PURPLE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGHT_PURPLE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_CYAN);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGHT_CYAN);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_WHITE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_BRIGHT_WHITE);
    wprintf(L"%ls\n", s);

    change_terminal_color(COLOR_RESET_TO_DEFAULT);

    return 0;
}

void change_terminal_color(wchar_t *color)
{
    wprintf(L"%ls", color);
}
