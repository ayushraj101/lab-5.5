//5. Rhombus Star Pattern
//    ****
//   *  *
//  *  *
// *  *
//****
#include <iostream>
using namespace std;

int main() {
	int n;// assi int
	cout << "Give the value of number of stars of the side "<<endl;//ask to gine value
	cin>> n;    // cin a
	for(int i=0;i<n;i++){

		for(int j=(n-i-1);j>0;j--)
		cout<<' ';
		for(int j=0;j<n;j++)
		if (j==0 or j==n-1 or i==n-1 or i==0)
		cout << '*';
		else 
		cout <<" ";
		
		cout<<endl;
	}
		

 
	

	return 0;
}
