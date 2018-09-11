//4. Rhombus Star Pattern
//    ****
//   ****
//  ****
// ****
//****
#include <iostream>
using namespace std;

int main() {
	int a;// assi int
	cout << "Give the value of number of stars of the side "<<endl;//ask to gine value
	cin>> a;    // cin a
	for (int b=a; b>0; b--){
		for (int c=1; c<b; c++)
		cout<< ' ';				//print space
		for (int i=0;i<a;i++)
		cout<< '*';				//print stars 
		
		cout<<endl;
	}	


 
	

	return 0;
}
