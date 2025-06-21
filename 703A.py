def solve():
    n = int(input())
    asum = 0 
    bsum = 0  
    for _ in range(n):
        a, b = map(int, input().split())
        if a > b:
            asum += 1
        elif b > a:
            bsum += 1

    if asum > bsum:
        print("Mishka")
    elif bsum > asum:
        print("Chris")
    else:
        print("Friendship is magic!^^")
solve()
