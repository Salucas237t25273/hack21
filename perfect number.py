#Write a program to find whether an inputted number is perfect or not.

a=int(input("Enter any number\n"))
sum=0
for i in range(1, a):
    if(a % i ==0):
        sum = sum +i
if(sum == a):
    print("the number is a perfect number")
else:
    print("the nuber is not a perfect number")