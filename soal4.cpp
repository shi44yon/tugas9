#include <iostream>

using namespace std;

//Soal No. 4
int square(int n);

int main() {
	int n;
	cin>>n;
	square(n);
}

int square(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}