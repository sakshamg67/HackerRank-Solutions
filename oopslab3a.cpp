#include <iostream>
using namespace std;


class Student{
	int rollno;
	int marks[6];
	public :
		void setvalue(int r, int m[6]){
			rollno=r;
			for (int i=0; i<6 ; i++){
				marks[i]=m[i];
			}
		}
		friend float percentage(Student S);
		
};

float percentage(Student S){
	int x=0;
		for (int i=0; i<6 ; i++){
				x+=S.marks[i];
			}
	return x/6;
}

int main(){
	int x;
	cout<<"Enter number of students ";
	cin>>x;
	int percent[x];
	Student s[x];
	for (int i=0; i<x; i++){
			int r;
			cout<<"Enter roll no of student "<<i+1<<" ";
			cin>>r;
			int m[6];
			cout<<"Enter marks of Student "<<i+1<<" ";
			for (int i=0; i<6 ; i++){
			cin>>m[i];
			}
			s[i].setvalue(r, m);
			percent[i]=percentage(s[i]);
	}
	for (int i=0; i<x ; i++){
		cout<<"Percentage of Student "<<i+1<<" is "<<percent[i]<<endl;
	}
	
	
	
	
	
	
	
	/*
	int m[6];
	int r;
	cout<<"Enter roll no of student 1 ";
	cin>>r;
	cout<<"Enter marks of Student 1 ";
	for (int i=0; i<6 ; i++){
		cin>>m[i];
	}

	cout<<percentage(S1)<<"%";
	*/
}
