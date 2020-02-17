from random import randrange


def generate_random_array():
    a = [0] * 10
    for x in range(10):
        a[x] = randrange(10)
    return a


a = generate_random_array()

print(a)
print("Sum of all elements at even subscripts = ")
print("Sum of all elements at odd subscripts = ")
print("Sum of all elements = ")
