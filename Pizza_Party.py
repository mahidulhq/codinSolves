import math

a , b = map(int, input().split())
total = ((a+1) * 4) + (b * 3)
pizza = math.ceil(total / 8)
print(int(pizza))