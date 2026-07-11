void swap_strings(char **a, char **b) {
  char *tem;
  tem = *a;
  *a = *b;
  *b = tem;
}
