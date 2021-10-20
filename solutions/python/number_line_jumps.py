def kangaroo(x1, v1, x2, v2):
    if( x2>x1 and v2>v1 or v2==v1):
        return "NO"
    result = (x1-x2) % (v2-v1)
    if( result == 0):
        return "YES"
    return "NO"

if __name__ == '__main__':
    x1V1X2V2 = input().split()
    x1 = int(x1V1X2V2[0])
    v1 = int(x1V1X2V2[1])
    x2 = int(x1V1X2V2[2])
    v2 = int(x1V1X2V2[3])
    result = kangaroo(x1, v1, x2, v2)
    print(result)
