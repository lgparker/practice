""" Elementary 3:
    Write a program that asks the user for their name
    and greets them with their name ONLY if their name
    is Alice or Bob.
"""

vip_names = ["alice", "bob"]

name = input("What is your name?\nEnter name: ")

if name.lower() in vip_names:
    print(f"Hello {name.capitalize()}!")
else:
    print("You're not Alice... nor Bob!")


