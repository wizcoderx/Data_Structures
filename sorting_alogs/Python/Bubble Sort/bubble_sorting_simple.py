#Accept the number array array size
array_size = int(input("Enter the number of array size: "))
arrx = []
#Accept each number in the array
for x in range(array_size):
    num = int(input("Enter a number: "))
    arrx.append(num)
#Create a counter with value 1 in while loop format

counter = 1;

while counter<array_size:
    for i in range(array_size-counter):
        if arrx[i]>arrx[i+1]:
            temp = arrx[i]
            arrx[i]=arrx[i+1]
            arrx[i+1]=temp
    counter+=1
print("Your sorted array looks like--> ",end=" ")

for num in arrx:
    print(num,end=" ")
