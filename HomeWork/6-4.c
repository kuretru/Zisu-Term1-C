#include <stdio.h>
int global_var = 0;
void func(int param_var)
{
    int var = 0;
    static int static_var = 0;
    var++, param_var++, static_var++, global_var++;
    printf("%d %d %d %d\n", var, param_var, static_var, global_var);
}

int main()
{
    int var;
    for (var = 0; var < 3;var++)
    {
        global_var++;
        func(var);
        printf("%d %d\n", var, global_var);
    }
    return 0;
}
