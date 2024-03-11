
# 1.⁠ ⁠To check whether a given number is an ugly number or not. Ugly numbers are those number whose prime factors are 2, 3 or 5.⁠ 
# ⁠From 1 to 15, there are 11 ugly numbers 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15. The numbers 7, 11, 13 are not ugly because they 
# are prime.

def is_ugly(n):
    for x in range(2,n+1):
        # print(x)
        if (x%2==0 or x%3==0 or x%5==0):
            print("Ugly ",x)
        else :
            print("Not Ugly ",x)

# ⁠To check whether a given number is Abundant or not. A number n is said to be an Abundant Number if the sum of all the 
# proper divisors of the number denoted by sum(n) is greater than the value of the number n. The first few Abundant Numbers 
# are: 12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66 …..e.g. 12-> 1,2,3,4,6 whose sum equals to 16 i.e.>12 hence abundant 
# number.
def is_Abundant(n):
    tot=0
    for x in range(1,n):
        if (n%x==0):
            tot+=x
    
    if(tot>n): print("Abundanat number")
    else : print("Not Abundanat number")


# 3.⁠ ⁠To check whether a given number is Deficient or not. A number n is said to be Deficient Number if sum of all the divisors of 
# the number denoted by divisorsSum(n) is less than twice the value of the number n. e.g. 21 as 1+3+7+21 is 32 <2x21(42) 
# hence 21 is deficient number.
def is_deficient(n):
    tot=0
    for x in range(1,n+1):
        if (n%x==0):
            tot+=x
    
    if(tot < 2 * n): print("Deficient number")
    else : print("Not Deficient number")

# 4.⁠ ⁠To check whether a given number is a Kaprekar number or not. A Kaprekar number is a number whose square when divided 
# into two parts and such that sum of parts is equal to the original number and none of the parts has value 0.
# Input : n = 45 
# Output : Yes
# Explanation : 45^2 = 2025 and 20 + 25 is 45
# Input : n = 13
# Output : No
# Explanation : 13^2 != 169.
def is_Kaprekar(n):
    sq=n ** 2
    s=str(sq)
    l=len(s)
    # print("len ",l)
    fst=int(s[0:l//2])
    snd=int(s[l//2:l])
    # print(snd)
    if(fst + snd == n): print("Kaprekar")
    else : print("Not Kaprekar")

# In mathematics, a harshad number (or Niven number) in a given number base is an integer that is divisible 
# by the sum of its digits when written in that base. Harshad numbers in base n are also known as n-harshad (or n-Niven) numbers. 
# E.g. 2022 is a HARSHAD number—meaning it is equally divisible by the sum of its digits, 6.
def is_harshad(n):
    s=str(n)
    tot=0
    for x in s:
        tot+=int(x)
    if(n % tot == 0): print("HARSHAD")
    else : print("Not HARSHAD")


# ⁠An automorphic number is an integer whose square ends with the given integer, as (25)^2 = 625, and (76)2 = 5776.
def is_automorphic(n):
    l1=len(str(n))
    temp=str(n ** 2)
    sliced = temp[ -l1 : ]
    print(sliced , n)
    if(int(sliced) == n): print("Automorphic")
    else : print("Not Automorphic")

# ⁠ ⁠The numbers 1 through 5 are all solitary. 
# The smallest "friendly number" is 6, forming for example, the "friendly" pair 6 and 28 with "abundancy" σ(6) / 6 = (1+2+3+6) / 6 = 2,
# the same as σ(28) / 28 = (1+2+4+7+14+28) / 28 = 2

def is_friendly(n1,n2):
    tot1=0
    tot2=0
    for x in range(1,n1+1):
        if(n1 % x == 0): tot1+=x
    for x in range(1,n2+1):
        if(n2 % x == 0): tot2+=x

    if(tot1 // n1 == tot2 // n2): print("Friendly")
    else : print("Not Friendly")



# num=int(input("Enter the Number : "))
# is_ugly(num)
# is_Abundant(num)
# is_deficient(num)
# is_Kaprekar(num)
# is_harshad(num)
# is_automorphic(25) 
# is_automorphic(76) 
# num1=int(input("Enter the Number : "))
# num=int(input("Enter the Number : "))
#  is_friendly(6,28)
    
myStr = 'MMMUT is the best University'
print(myStr[15 :: 1])
print(myStr[15 :: 2])
print(myStr[-10 : -1 : 2])

# OUTPUT : 
# st University
# s nvriy
# Uiest

mystr="Hello World!"
# mystr[5]='a' 
# NOTE -: This Above Operation is not valid
print(mystr[:4],mystr[6:])
# OUTPUT : 
# Hell World!

str='01234567890'
print(str[1:8]) #OUTPUT: 1234567

str1="THIS IS PYTHON"
print(str1[1 : 4 : 1])   #OUTPUT:  HIS
print(str1[0 : -1 : 2])  #OUTPUT:  TI SPTO