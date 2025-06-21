def solve():
    n=int(input())
    k=int(input())
    fb=(k-1)//(n-1)
    res=k+fb
    print(res)

t=int(input())
for _ in range(t):
    solve()