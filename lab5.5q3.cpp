//3. Hollow Square Star Pattern with Diagonal
//*****
//**  *
//* * *
//*  **
//*****
#include <iostream>
using namespace std;

int main() {
	int a;// assi int
	cout << "Give the value of number of stars o the side "<<endl;//ask to gine value
	cin>> a;// cin a
	for (int b=0; b<a; b++){//for b=0 b<a b++
		for (int c=0; c<a; c++){//for c=0 c<a c++
			if (b==0 or c==0 or b==a-1 or c==a-1 or b==c or c==a-b-1){//if b==0 or c==0 or b<a-1 or c<a-1 or b==c or c==a-(b-1)
			 cout << "*";//cout *
			}else {cout << " ";
			}//else cout blank
		}cout<<endl;
	}
	return 0;
}
