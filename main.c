// Handle renaming the main fn in unit tests
#ifndef MAIN_FN
#define MAIN_FN main
#endif

#include <stdio.h>

int MAIN_FN(int argc, char **argv) {
    printf("Hello, World!\n");
    return 0;
}
