#include "munit/munit.h"

#define MAIN_FN program_main
#include "main.c"

static MunitResult test(const MunitParameter params[], void *fixture) {
  (void)params;
  (void)fixture;
  MAIN_FN(1, (char **)&"main");

  return MUNIT_OK;
}

static const MunitTest tests[] = {
    {"/test", test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}};

static const MunitSuite suite = {"/tests", tests, NULL, 1,
                                 MUNIT_SUITE_OPTION_NONE};

int main(int argc, char **argv) {
  return munit_suite_main(&suite, NULL, argc, argv);
}
