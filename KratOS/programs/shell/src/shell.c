#include "shell.h"
#include "stdio.h"
#include "stdlib.h"
#include "kratos.h"
int main(int argc, char** argv)
{
    print("kratos v1.0.0\n");
    while(1) 
    {
        print("> ");
        char buf[1024];
        kratos_terminal_readline(buf, sizeof(buf), true);
        print("\n");
        kratos_system_run(buf);
        
        print("\n");
    }
    return 0;
}
