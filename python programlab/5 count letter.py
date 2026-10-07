names = [] 
acount = 0 
n = int(input("Enter The Number of First Names:")) 
print("Enter The Names:") 
for i in range(1,n+1): 
     name = input() 
     names.append(name) 
for name in names: 
     acount += name.lower().count('a') 
 print("Number of a : ",acount)
