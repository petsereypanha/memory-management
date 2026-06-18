#include "exercise.h"
#include "munit.h"

munit_case(RUN, test_get_average, {
  float result = get_average(3, 4, 5);
  munit_assert_double_equal(result, 4.0, "Average of 3, 4, 5 is 4");
});

munit_case(RUN, test_non_integer, {
  float result = get_average(3, 3, 5);
  munit_assert_double_equal(result, 11.0 / 3.0,
                            "Average of 3, 3, 5 is 3.66667");
});

munit_case(SUBMIT, test_average_of_same, {
  float result2 = get_average(10, 10, 10);
  munit_assert_double_equal(result2, 10.0, "Average of 10s... is 10");
});

munit_case(SUBMIT, test_average_of_big_numbers, {
  float result3 = get_average(1050, 2050, 2075);
  munit_assert_double_equal(result3, 1725.0,
                            "Bigger numbers can still get averaged, duh!");
});

int main() {
  MunitTest tests[] = {
      munit_test("/get_average", test_get_average),
      munit_test("/get_average_float", test_non_integer),
      munit_test("/get_average_same", test_average_of_same),
      munit_test("/get_average_big", test_average_of_big_numbers),
      munit_null_test,
  };

  MunitSuite suite = munit_suite("get_average", tests);

  return munit_suite_main(&suite, NULL, 0, NULL);
}

munit_case(RUN, test_snek_score_1, {
  float result = snek_score(3, 4, 5, 0.1);
  munit_assert_double_equal(result, 1.9, "result must be 1.9");
});

munit_case(RUN, test_snek_score_2, {
  float result = snek_score(10, 10, 10, 0.1);
  munit_assert_double_equal(result, 11.0, "result must be 11.0");
});

munit_case(SUBMIT, test_snek_score_3, {
  float result = snek_score(105, 205, 207, 0.1);
  munit_assert_double_equal(result, 2194, "result must be 2194.0");
});

int main() {
  MunitTest tests[] = {
      munit_test("/test_snek_score_1", test_snek_score_1),
      munit_test("/test_snek_score_2", test_snek_score_2),
      munit_test("/test_snek_score_3", test_snek_score_3),
      munit_null_test,
  };

  MunitSuite suite = munit_suite("snek_score", tests);

  return munit_suite_main(&suite, NULL, 0, NULL);
}
