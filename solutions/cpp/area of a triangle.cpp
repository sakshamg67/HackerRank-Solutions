#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,y1,y2,y3;
	cout<<"Enter the x and y co-ordinates of first point: ";
	cin>>x1>>y1;
	cout<<"Enter the x and y co-ordinates of second point: ";
	cin>>x2>>y2;
	cout<<"Enter the x and y co-ordinates of third point: ";
	cin>>x3>>y3;
	float a=sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
	float b=sqrt( (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) );
	float c=sqrt( (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) );
	float s=(a+b+c)/2;
	float area=sqrt( s*(s-a)*(s-b)*(s-c) );
	if(area==0)
	{
		cout<<"Points are collinear";
	}
	else
	{
		cout<<"Points are not collinear and area of triangle formed is "<<area;
	}
	return 0;
}
