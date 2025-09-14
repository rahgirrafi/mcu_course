#include <stdio.h> //preprocessor

int main() {
    int a = 10;
    float b = 20.5;
    double avg = 20.545345345345;
    char c = 'A';
    int flag = 0; // 1 for true, 0 for false

    printf("%d", a); //function call
    printf("%f", b); //function call
    printf("%lf", avg); //function call
    printf("%c", c); //function call
    return 0;
}


/*
1. Compilation -> Assembly Language (.as)
2. Assembler -> Machine Code (.o)
3. Archiver -> Static Library (.a, .dll)
4. Linker -> Executable (.exe)

Code Editor vs IDE (Integrated Development Environment)
*/
