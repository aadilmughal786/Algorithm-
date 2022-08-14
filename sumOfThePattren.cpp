// C++ Program To Find Sum Of Series 1 + 1 / 2 ^ 2 + 1 / 3 ^ 3 + . . . . . . . . . . . . 1 / n ^ n

#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

using namespace std;

long long int pow(int n){
	long long int res = 1;
	int nn = n;
	while(nn--){
		res*=(n*1LL);
	}
	return res;
}

int main(int argc, char const *argv[]){
	// <!-- Never Give Up Bro ---->
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	double s = 0;
	while(n){
		cout<<s<<" + ";
		s+=(1.0/pow(n));
		cout<<"1/("<<n<<"^"<<n<<")  = ";
		n--;
		cout<<s<<endl;
	}
	cout<<"sum : "<<s<<endl;
	return 0;
}