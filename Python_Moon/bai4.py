x = 20
y = 30
print("x > y:", x > y)
print("x == y:", x == y) # False 
print("x != y:", x != y) # True

x = 5
y = 6
x = y
print("x = ", x)
print("y = ", y)

# Kiem tra xem x co phai la bội của 3 và 5 hay ko?
# x là bội nếu x chia hết cho 3 và 5 -> dư bằng 0
x = 15
f = (x % 3==0) and (x % 5 == 0)
print("x là bội của 3 và 5:", f)

a = [1, 2, 3, 4]
b = a
print("a is not b:", a is not b)

x = float(input("x = "))
y = 5 * x ** 2 + 3 * x + 2
print("y = 5 * x ** 2 + 3 * x + 2 = ", round(y, 2))
if x >= 1:
    f = 2**x + 3*x + 4
    print("f(x) = 2 ** x + 3*x + 4 (x >= 1)", f)
if x < 1:
    f = 3 ** x + 2*x + 1
    print("f(x) = 3 ** x + 2*x + 1 (x < 1)", f)

d=int(input("d = "))
o = oct(d)
print(f"{d}(10) = {o[2:]}(8) ?")
# print("100(10) = 144(8) ?")
print(o[2:])  # Remove the '0o' prefix

a = int(input("a = "))
b = int(input("b = "))

print("a + b =", a + b)
print("a - b =", a - b)
print("a * b =", a * b)
print("a / b =", a / b)
print("a % b =", a % b)
print("a // b =", a // b)
