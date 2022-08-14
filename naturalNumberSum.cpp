#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	// <!-- Never Give Up Bro ---->
	unsigned long long int n;
	cout<<"enter the value of n : ";
	cin>>n;
	n = n*(n+1);
	n/=2;
	cout<<"Sum : "<<n<<endl;
	return 0;
}