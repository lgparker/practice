""" Elementary 7:
    Write a program that prints a multiplication
    table for numbers up to 12
"""

from tabulate import tabulate

mult_dict = {}
nums = range(1,13)

for i in nums:
    temp_list = []
    for j in nums:
        temp_list.append(i*j)
    mult_dict[i] = temp_list

print("Multiplication Table (12x12)")
print(tabulate(mult_dict, headers="keys", showindex=nums))


