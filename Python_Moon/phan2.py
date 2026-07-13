for i in range(1, 10):
    print(i)
print("Finish!")

h = int(input("Nhập chiều cao h: "))
r = int(input("Nhập bán kính r: "))
if h > 0 and r > 0:
    volume = 3.14 * r * r * h
    print(f"Thể tích hình trụ là: {volume}")

x = int(input("Nhập số nguyên x: "))
y = int(input("Nhập số nguyên y: "))
temp = x
x = y
y = temp
print(f"Giá trị sau khi hoán đổi: x = {x}, y = {y}")
print(f"Giá trị tuyệt đối của {x} là: {abs(x)}")

a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))
c = int(input("Nhập số nguyên c: "))
printf(f"Trung bình cộng của ba số là: {(a + b + c) / 3}")
print(f"Các số bạn đã nhập là: {a}, {b}, {c}")
max_value = max(a,b,c)
print(f"Số lớn nhất trong ba số là: {max_value}")