# Complete the compareTriplets function below.
def compareTriplets(a, b):
    a1=0
    b1=0
    for i in range(len(a)):
        if(a[i]>b[i]):
            a1=a1+1
        if(a[i]<b[i]):
            b1=b1+1
    return a1,b1

if __name__ == '__main__':
    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))
    result_a,result_b = compareTriplets(a, b)
    print(result_a,result_b)
