#include <iostream>

using namespace std;

//Soal No. 1
int multiply(int n);

int main() {
  int n;
	cin>>n;
	multiply(n);
}

int multiply(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout<<i*j<<" ";
		}
		cout<<endl;
	}
}
