a = input()
b = input()
 
a_f = a.lower()
b_f = b.lower()
 
if a_f < b_f:
    print(-1)
elif a_f > b_f:
    print(1)
else:
    print(0)