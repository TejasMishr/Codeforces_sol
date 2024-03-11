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




# num=int(input("Enter the Number : "))
# is_harshad(num)