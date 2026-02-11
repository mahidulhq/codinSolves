t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    totalWin= sum(a)
    minPenalty = min(a[i] - b[i] for i in range(n))

    print(totalWin - minPenalty)
