n = int(input())
s = input()
freq = [0] * 26

for c in s:
    freq[ord(c) - ord('a')] += 1

maxFreq = max(freq)
result = 2 * maxFreq - n if maxFreq > n // 2 else 1 if n % 2 == 1 else 0
print(result)