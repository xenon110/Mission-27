t = int(input())
 
for _ in range(t):
    n = int(input())
 
    if n <= 9:
        print(n)
    else:
        l = len(str(n))
        ans = 9 * (l - 1)
 
        x = int(str(n)[0] * l)
 
        if x <= n:
            ans += int(str(n)[0])
        else:
            ans += int(str(n)[0]) - 1
 
        print(ans)