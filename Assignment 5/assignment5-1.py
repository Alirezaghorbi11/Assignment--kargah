def khayampascal(n):
    list1=[]
    end=n
    for n in range(0,n):
        list1.append([])
        if n==0:
            list1[n].append(1)
        elif n==1:
            list1[n].append(1)
            list1[n].append(1)
        elif n>=2 and n<end:
            list1[n].append(1)
            for i in range(1,n):
                list1[n].append(list1[n-1][i]+list1[n-1][i-1])
            list1[n].append(1)
    return list1
 
def printmatrix(list1):
    for i in list1:
        print(i)
    print('')
 
 
 
try:
    n=int(input('Please enter a number:'))
    printmatrix(khayampascal(n))
except ValueError as error:
    print(error)
except:
    print('error')