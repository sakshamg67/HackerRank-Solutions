#include <iostream>

using namespace std;

int main()
{

    int q,x,y,z;
    cin >> q;
    for (int i=0 ; i<q ;i++)
    { 
    cin >>x>>y>>z;
    

  int left , right;
left = abs(x-z);
right = abs(y-z);

 if (left <right )
 {
 cout<<"Cat A\n" ;}

  if (left > right )
 {
 cout<<"Cat B\n" ;}

  if (left == right )
 {
 cout<<"Mouse C\n";}
 }

}
