#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

#define MAIN_FN program_main
#include "main.c"

void test1() {
    char *arg = "main";
    MAIN_FN(1, &arg);
}

int main(void) {
    CU_initialize_registry();
    CU_pSuite testSuite = CU_add_suite("test", NULL, NULL);
    CU_add_test(testSuite, "test1", test1);
    CU_basic_run_tests();
    CU_cleanup_registry();
}
