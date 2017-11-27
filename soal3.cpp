#include <iostream>

using namespace std;

//Soal No. 3
int trisum(int n);

int main() {
	int n;
	cin>>n;
	trisum(n);
}

int trisum(int n) {
	int starter = 3;
	int number;
	for(int i = 1; i <= n; i++) {
		number = starter;
		for(int j = 1; j <= i; j++) {
			cout<<number<<" ";
			number++;
		}
		starter += 2;
		cout<<endl;
	}
}