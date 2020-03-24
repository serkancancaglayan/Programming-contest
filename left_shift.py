arr_size = int(input())
shift_count = int(input())
array = [int(item) for item in input().split(" ")]

for i in range(shift_count):
    array.append(array.pop(0))

print(array)

