#include <iostream>
using namespace std;

int main() {
	int a;//assi integer
	cout <<"enter the number of stars of the square"<< endl;//ask for value
	cin>>a;//cin value
	for (int b=0; b<a; b++){ //for int i i<0 i++
		for (int c=0; c<a ; c++){//for int c c<a c++
			if (b==0 or b==a-1 or c==a-1 or c==0)
				cout<< "*";
			else cout <<" ";
				}cout<<endl;
		}
	
	//cout *
	//else for int d d<a d++
	//
	return 0;
}
