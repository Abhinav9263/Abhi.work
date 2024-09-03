# swap two number without using third variable
a = int(input("Enter input a : "))
b = int(input("Enter input b : "))
a = a+b
b = a-b
a = a-b
print("The swapped number a : ",a)
print("The swapped number b : ",b)