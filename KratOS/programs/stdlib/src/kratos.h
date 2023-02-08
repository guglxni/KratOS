#ifndef KRATOS_H
#define KRATOS_H
#include <stddef.h>
#include <stdbool.h>


struct command_argument
{
    char argument[512];
    struct command_argument* next;
};

struct process_arguments
{
    int argc;
    char** argv;
};


void print(const char* filename);
int kratos_getkey();

void* kratos_malloc(size_t size);
void kratos_free(void* ptr);
void kratos_putchar(char c);
int kratos_getkeyblock();
void kratos_terminal_readline(char* out, int max, bool output_while_typing);
void kratos_process_load_start(const char* filename);
struct command_argument* kratos_parse_command(const char* command, int max);
void kratos_process_get_arguments(struct process_arguments* arguments);
int kratos_system(struct command_argument* arguments);
int kratos_system_run(const char* command);
void kratos_exit();
#endif
