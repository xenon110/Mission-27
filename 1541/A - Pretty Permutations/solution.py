t = int(input())
 
for _ in range(t):
    a = int(input())
    res = []
 
    if a % 2 == 1:
        res.extend([3, 1, 2])
        start = 4
    else:
        start = 1
 
    for i in range(start, a + 1, 2):
        res.extend([i + 1, i])
 
    print(*res)