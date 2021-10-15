""" Elementary 4:
    Write a program that asks the user for a number
    n and prints the sum of the numbers 1+2+..+n
"""

def sum_over_n(N):
    return sum(range(1,N+1))

N = int(input("Enter a positive integer: "))

assert N > 0, "The entered value must be positive"

print(f"The sum of natural numbers from 1 to {N}",
      f"is {sum_over_n(N)}")

