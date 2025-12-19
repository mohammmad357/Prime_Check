number = int(input('Please Insert Your Number : '))
counter = 0 

for i in range(1,int((number/2)+1)):
    if number % i == 0 :
        counter = counter + 1

if counter > 2 :
    print('This Number Is Not Prime')

else :
    print('This Number Is Prime')
