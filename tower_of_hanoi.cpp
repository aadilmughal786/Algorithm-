// 👳Tamplate made by Aadil Mugal
// this program also calculate total number of minimal moves or time to complete the task if one move takes 1 second
#include <iostream>
#include <cmath>

using namespace std;

int c = 0;

void towerOfHanoi(int n,char a,char b,char via){
	if(n>0){
		c++;
		towerOfHanoi(n-1,a,via,b);
		cout<<"move disk no."<<n<<" from "<<a<<" to "<<b<<endl;
		towerOfHanoi(n-1,via,b,a);
	}
}

void time(int c){
	int y,m,d,h,i,s;
	y = c/60/60/24/30/12 -(0);
	m = c/60/60/24/30 - (y*12);
	d = c/60/60/24 - (y*12*30 + m*30);
	h = c/60/60 - (y*12*30*24 + m*30*24 + d*24);
	i = c/60 - (y*12*30*24*60 + m*30*24*60 + d*24*60 + h*60);
	s = c - (y*12*30*24*60*60 + m*30*24*60*60 + d*24*60*60 + h*60*60 + i*60);
	cout<<"Years : "<<y<<endl;
	cout<<"Months : "<<m<<endl;
	cout<<"Days : "<<d<<endl;
	cout<<"Hours : "<<h<<endl;
	cout<<"Minutes : "<<i<<endl;
	cout<<"Seconds : "<<s<<endl;
}

int main(int count,const char* list[]){
	towerOfHanoi(atoi(list[1]),'A','C','B');
	cout<<"Total no. of move : "<<c<<endl;
	time(c);
	return(0);
}
