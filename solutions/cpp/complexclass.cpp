//Don't forget to smile today :)
//Author: Srishti Goyal.
#include<bits/stdc++.h>
using namespace std;
// #include "class.cpp" 
#define endl "\n"
#define int int64_t

class complex{
	
	private :
		int img ;
		int real;
		
	public :
	/*	
	complex(int r, int i){
		real= r;
		img =i;
	}	
	*/
	void add(complex const &z){
		real = real + z.real;
		img = img + z.img;
		
		
	}
	
	void multiply (complex const &z){
		real= (real*z.real)- (img * z.img);
		img = (real* z.img)+ (img * z.real);
	}
	
	void print(){
		cout<<real<<" + "<<img<<"i"<<endl;
	}
	
	complex addition(complex const &z){
		complex znew(real+ z.real, img +z.img);
		return znew;
		
		
	}
	complex operator+(complex const &z){
		complex znew(real+ z.real, img +z.img);
		return znew;
	}
	
};








void solve(){
	int r1, r2, i1, i2, o;
	cin>>r1>>i1>>r2>>i2>>o;
	
	::complex z1(r1, i1);
	::complex z2(r2, i2);
	
	
	if(o==1){
		z1.add(z2);
		z1.print();
	}
	else {
		z1.multiply(z2);
		z1.print();
	}
	
	
	
	
}

signed main(){
ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	
		solve();
}
