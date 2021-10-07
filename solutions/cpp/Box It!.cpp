/* Problem link: https://www.hackerrank.com/challenges/box-it/problem */

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    private:
      int l, b, h; //l,b,h are integers representing the dimensions of the box
    public:
       //Default
      Box():l(0), b(0), h(0) {}
      
      Box(int x, int y, int z){
          l = x;
          b = y;
          h = z;
      }
      
      Box(const Box& B){
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
      }
      
        //Getter
      int getLength() const {  //Return box's length
          return l;
      }
      
      int getBreadth() const { // Return box's breadth
          return b;
      }
      
      int getHeight() const {  //Return box's height
          return h;  
      }
      
      long long CalculateVolume(){  
          long long volume =(long long) l*b*h;
          return volume;                        // Return the volume of the box
      }
      
      bool operator<(Box& other){
          bool condition1 = l < other.l;
          bool condition2 = b < other.b && l == other.l;
          bool condition3 = h < other.h && b == other.b && h == other.h;
          
          if(condition1 || condition2 || condition1)
              return true;
              
            return false;       
      }
       //Friend function
      friend ostream& operator<<(ostream& out,  Box& B){
          out << B.l <<" "<< B.b <<" "<< B.h;
          return out;
      }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}