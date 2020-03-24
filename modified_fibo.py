t1, t2, n = [int(item) for item in input().split(" ")]
arr = [t1, t2]
for i in range(n):
    arr.append(arr[i] + pow(arr[i + 1], 2))
print(arr[n - 1])
