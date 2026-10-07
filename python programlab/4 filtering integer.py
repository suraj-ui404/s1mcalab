num = [] 
n = int(input("Enter The Number of Elements:")) 
print("Enter The List of Integers:") 
for i in range(1,n+1): 
        e = int(input()) 
        if(e>100): 
             num.append("OVER") 
        else: 
             num.append(e) 
print("Entered List:",num) 
