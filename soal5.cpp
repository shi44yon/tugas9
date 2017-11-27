#include <iostream>

using namespace std;

//Soal No. 5
int line(int n);

int main() {
	int n;
	cin>>n;
	line(n);
}

int line(int n) {
	for(int i = 1; i <= n; i++) {
		cout<<i*2<<" ";
	}
}