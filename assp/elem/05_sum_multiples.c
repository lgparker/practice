/* Elementary 5: Summation of numbers from 1 to N
                 considering multiples of three and five
*/

#include <stdio.h>
#include <math.h>

int main() {

  unsigned long long int N, i, sum=0;

  printf("Enter a positive integer: ");
  scanf("%llu", &N);

  for (i=1; i<=N; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
        sum += i;
    }
  }

  printf("The sum of natural numbers from 1 to %llu", N);
  printf(" is %llu if considering only multiples of three or five.\n", sum);

  return 0;
}

