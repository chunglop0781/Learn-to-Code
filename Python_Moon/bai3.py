name = "Nguyen Van A"
age = 21
is_student = True

# Bai 6:
from math import sqrt
z = complex(input("z = "))
a = z.real
b = z.imag
md = sqrt(a*a + b*b)
print(md)

# Bai 5:
x = float(input("x = "))
f=2*x**3 + 3*x**2 + 5*x - 1
print(f"F({x}) = {round(f, 2)}")

# Bai 4:
a = float(input("a = "))
b= float(input("b = "))
s = a * b
print("Diện tích hình chữ nhật: ", s)

# Bai 3
c = float(input("Nhập độ C: "))
f = 1.8 * c + 32
print(f"{c} *C bằng {f} *F")

# In ra gia tri a, b theo dinh dang a*b
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
print(a, b, c, sep=",")
print(a+b)

z = complex(input("z = "))
print(z, type(z))
z1 = complex(input("z1 = "))
print(z1 + z)

x = int(input("x = "))
y = float(input("y = "))
# x, y = map(int, input("x, y = ").split())
temp = x
x = y
y = temp
print(type(x), type(y))
print(x, y)
print(x + y)

s = "welcome to python"
print(s)