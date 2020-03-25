arr_size, shift_count = [int(item) for item in input().split(" ")]
array = [int(item) for item in input().split(" ")]

for i in range(shift_count):
    array.append(array.pop(0))

for i in range(arr_size):
    print(array[i], sep = " ", end =" ")
