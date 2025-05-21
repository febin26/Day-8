int main() {
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num;
  if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    long int fact = factorial(num);
    printf("Factorial of %d is %ld\n", num, fact);
  }
  return 0;
}

