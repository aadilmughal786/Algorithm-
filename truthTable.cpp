// C++ Program Print Truth Table Of XY+Z Using Loop

#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	// <!-- Never Give Up Bro ---->
	cout<<"X Y Z XY+Z"<<endl;
	for(int x = 0;x<2;++x){
		for(int y = 0;y<2;++y){
			for(int z = 0;z<2;++z){
                cout<<x<<" "<<y<<" "<<z<<" "<<"  "<<(x&y | z)<<endl;
			}
		}
	}
	return 0;
}