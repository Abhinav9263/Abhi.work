# days into years, week and days
a = int(input("Enter number of days : "))

y = int(a / 365) # divide days by 365 to get years

w = int((a % 365)/7) # days into weeks

d = int((a%365)%7)

print (" days into year : ",y)
print ("days into week : ",w)
print ("days into days : ",d)