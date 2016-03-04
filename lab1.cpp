#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cout << "please input n:" << endl;
	cin >> n;
	cout << n << " ";
	while(n!=1){
		if((n%2)!=0){
			n = 3*n+1;
		cout << n << " ";
		}
		else{
			n = n/2;
			cout << n << " ";
		}
	}
	cout << endl;
	return 0;
}
