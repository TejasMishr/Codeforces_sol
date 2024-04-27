def main():    
    test_cases = int(input())
    for _ in range(test_cases):       
        a = int(input())
        arr = list(map(int, input().split()))        
        mp = {}
        for num in arr:            
            mp[num] = mp.get(num, 0) + 1
        
        arr.sort()       
        prev = 0       
        for num in arr:           
            if num - prev > 1:               
                break
            prev = num
        
        if a == 1 or len(mp) % 2 == 0 or len(mp) == 1:
            print("Alice")
        else:            
            print("Bob")
if __name__ == "__main__":
    main()
