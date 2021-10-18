""" Elementary 6:
    Implements the summation or product of
    numbers 1 to N given a user input of N
"""

import math

def sum_or_prod(N, choice):

    vals = range(1,N+1)

    if choice == "sum":
        sum_ = sum(vals)
    elif choice == "product":
        sum_ = math.prod(vals)
    else:
        sum_ = None

    return sum_

N = int(input("Enter a positive integer: "))
assert N > 0, "The entered value must be positive"

choice = input("Compute the sum or product from 1 to N? (sum/product): ")
assert choice in ["sum", "product"], "Must choose between 'sum' or 'product'"

print(f"The {choice} of natural numbers from 1 to {N}",
      f"is {sum_or_prod(N,choice)}")
