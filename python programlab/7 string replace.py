string = input("Enter The String:") 
first = string[0] 
modstr = first+string[1:].replace(first,'$') 
print("modified string:",modstr)
