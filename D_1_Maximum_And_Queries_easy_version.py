t1 = 1
for x in range(t1):
    n, q = map(int, input().split())
    p = list(map(int, input().split()))
    a = [0] * (n + 1)
    for i in range(1, 1 + n): a[i] = p[i - 1]
    for i in range(q):
        cpy = a.copy()
        res = 0
        k = int(input())
        x1=1
        for j in range(60, -1, -1):
            
            b1 = cpy.copy()
            var = 0
            for i in range(1, n + 1):
                if not(1 & (cpy[i] >> j)):
                    p = cpy[i]
                    cpy[i] += (1 << j)
                    cpy[i] //= (1 << j)
                    cpy[i] *= (1 << j)
                    var += (cpy[i] - p)
                    if var > k: break

            

            if x1==1 and var<=k :
                k =k- var
                res= res + (1 << j)
            else : cpy = b1.copy()
        print(res)
