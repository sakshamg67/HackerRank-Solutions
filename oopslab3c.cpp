#include <iostream>
using namespace std;

class xyz{
	int a;
	public:
		xyz(){
			a=0;
		}
		void show(){
			cout<<a<<endl;
		}
		void operator ++(int){
			a+=1;
		}
};

int main(){
	xyz x1, y1;
	x1++;
	
	//++x1;
	//++y1;
	//++y1;
	x1.show();
	y1.show();
}
