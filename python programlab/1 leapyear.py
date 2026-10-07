import datetime
year1=datetime.date.today().year
year2=int(input("Enter the year"))
print("Leap Year b/w ",year1," and ",year2," are")
for i in range(year1,year2+1):
    if(i%4==0 and i%100!=0)or(i%400==0):
        print(i," ")
