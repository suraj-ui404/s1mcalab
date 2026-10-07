l1=[]
l2=[]
mul=[]
n1=int(input("enter the limit of 1st list:"))
print("Enter the number:")
for i in range(n1):
       x=int(input())
       l1.append(x)
n2=int(input("enter the limit of 2nd list:"))
print("Enter the number:")
for i in range(n2):
       a=int(input())
       l2.append(a)
if len(l1)==len(l2):
       
        print("Both list are same length")
else:
    
    print("Both list are not same length")
if sum(l1)==sum(l2):
       
        print("The sum of both list are same")
else:
    
    print("The sum of both list are not same")
for i in l1:
    for k in l2:
        if i==k:
            
            if i not in mul:
                mul.append(i)
print("same numbers are:",mul)

