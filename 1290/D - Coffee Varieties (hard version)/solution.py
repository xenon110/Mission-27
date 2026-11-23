def clear():
    print("R")
 
def query(id):
    print(f"? {id}")
    return input().strip()
 
def Query(id):
    L = (id - 1) * B + 1
    R = id * B
    for i in range(L, R + 1):
        if not a[i]:
            continue
        if query(i) == 'Y':
            a[i] = 0
 
def solve():
    global B, num, a
    n, k = map(int, input().split())
    B = (k + 1) // 2
    num = n // B
    a = [1] * (n + 1)  # Initialize the array
 
    if num == 1:
        Query(1)
 
    for d in range(1, num):
        for i in range(1, d + 1):
            if i + d <= num:
                clear()
                for j in range(i, num + 1, d):
                    Query(j)
 
    ans = sum(a[1:])
    print(f"! {ans}")
 
# Main function
if __name__ == "__main__":
    t = 1  # t is usually for multiple test cases, here it's set to 1
    while t:
        solve()
        t -= 1