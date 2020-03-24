t = int(input())
for i in range(t):
    #arr[0] = siniftakiler  arr[1] = sonradan gelenler
    arr =  [int(item) for item in input().split(" ")]
    candys =  [int(item) for item in input().split(" ")]

    hash_map = {}
    for j in range(arr[0]):
        hash_map[candys[j]] = 0

    for k in range(arr[1]):
        if candys[arr[0] + k] in hash_map:
            print("YES")
        else:
            print("NO")
            hash_map[candys[arr[0] + k]] = 0

