#Accept the number of array/list size in interger format
array_size =int(input("Enter the number of array size(Integer): "))

"""
Create a while loop that will that will work as validation to enter the valid array size.
Only accepting number greater than 1.

I have taken a long and complex for loop for this one
"""
#The below while loop 'in commet' is long of you want make some changes in it and test
#while (array_size==0) or (array_size<0) or (array_size==1) or (array_size.isdecimal) or (array_size.isdigit()) :
while array_size<2:
    array_size = int(input("Wrong entry! Array size cannot be 0, negative, or 1: "))

#Create an empty list to store the numbers
arrx = []
#Accept each number in the array and put it inside the arrx[] list
for x in range(array_size):
    num = int(input("Enter a number: "))
    arrx.append(num)
#Print the list
print("\nYour Array looks like this:\n",arrx)

#Lets jump to the main logic
#Create a counter with value 1 in while loop format
counter = 1;
while counter<array_size:
    print("\ncounter size after iteration is: ",counter,"\n")
    for i in range(array_size-counter):
        if arrx[i]>arrx[i+1]: #If the i elements is greater than the element i+1(ahead of it) then swap
            temp = arrx[i]
            arrx[i]=arrx[i+1]
            arrx[i+1]=temp
    #Print each iteration result till the sorting is complete.
    print("After the ",counter,"iteration, your array looks like this: ",arrx)
    #Increment the counter after each iteration so that once the counter!<array_size then final array will be printed
    counter+=1
print("Your sorted array looks like--> ",end=" ")
#Print the final array
for num in arrx:
    print(num,end=" ")
