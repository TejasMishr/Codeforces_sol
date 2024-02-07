def solve():
    T = int(input().strip())
    for _ in range(T):
        N = int(input().strip())
        A = list(map(int, input().strip().split()))
        P = []
        seen = set()
        for i in range(2*N-1, -1, -1):
            if A[i] not in seen:
                P.append(A[i])
                seen.add(A[i])
        P.reverse()
        print(' '.join(map(str, P)))

solve()