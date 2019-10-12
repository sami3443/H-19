print ("Temperature Converter\n")
userinput = input("Enter a Temperature:")
print ("\n")
x = int(userinput)
choice =  input("Convert to (F)Farenheit or (C)Celsius\n")
if choice == "F":
  Tc = (5/9)*(x-32)
  print (Tc)
elif choice == "C":
  Tf = (9/5)*(x+32)
  print(Tf)




