num=[]
n=int(input("Enter the number of values in list:"))
print("Enter the elements to the list:")
for i in range(n):
    val=int(input())
    num.append(val)
total=0
for item in num:
    total=total+item
print("The sum of all items in the list is:",total)
