// C++ Program To Find Sum Of Series 1 + 2 + 4 + 8 + 16 + 32 + . . . . . . . . n

#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

using namespace std;

long long int powOf2(int p){
	long long int res = 1;
	while(p){
		res*=2;
		p--;
	}
	return res;
}

int main(int argc, char const *argv[]){
	// <!-- Never Give Up Bro ---->
	int n;
	cout<<"enter the value of n :";
	cin>>n;
	long long int res  = 1;
	res  = (powOf2(n)-1);
	cout<<"Sum : "<<res<<endl;

	return 0;
}