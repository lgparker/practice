/* Elementary 5: Summation of numbers from 1 to N
                 considering multiples of three and five
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  unsigned long long int N, i, sum=1, prod=1, ans=0;
  char choice[7];

  printf("Enter a positive integer: ");
  scanf("%llu", &N);

  printf("Compute sum or product from 1 to %llu? (sum/product): ", N);
  scanf("%s", choice);

  if (strcmp(choice, "sum") == 0) {
    for (i=2; i<=N; i++) {
          sum += i;
    }
    ans = sum;
  }
  else if (strcmp(choice, "product") == 0) {
    for (i=2; i<=N; i++) {
      prod = prod*i;
    }
    ans = prod;
  }
  else {
    printf("Input must be 'sum' or 'product'\n");
  }

  printf("The %s of natural numbers from 1 to %llu", choice, N);
  printf(" is %llu\n", ans);

  return 0;
}

