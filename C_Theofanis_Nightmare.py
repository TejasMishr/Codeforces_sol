t1 = int(input())
for x in range(t1):
    n = int(input())
    arr = list(map(int, input().split()))
    dp = [(0, 1)] * (n + 1)
    dp[n] = (0, 1)
    sum = 0
    for i in range(n-1, -1, -1):
        tot,cnt=dp[i+1]
        dp[i]=(tot + arr[i], cnt)
        dp[i]=max(dp[i],(tot+arr[i]+sum, cnt + 1))
        sum=sum + arr[i]
    print(dp[0][0])