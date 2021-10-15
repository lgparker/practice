""" Elementary 5:
    Write a program that asks the user for a number
    n and prints the sum of the numbers 1+2+..+n
    but only considers multiples of three or five
    when summing (if three and five are both multiples,
    the number is added to the total once, not twice)
"""

def sum_multiples(N, mults=[3,5]):
    sum_ = 0
    for i in range(1,N+1):
       for m in mults:
          if i % m == 0:
              sum_ += i
              break
    return sum_

N = int(input("Enter a positive integer: "))

assert N > 0, "The entered value must be positive"

print(f"The sum of natural numbers from 1 to {N}",
      f"is {sum_multiples(N)} if considering only multiples of three or five.")

