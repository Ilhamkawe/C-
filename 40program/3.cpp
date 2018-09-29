#include <iostream>
using namespace std;

int main (){
	int v,r,t;
	float const phi=3.14 , y= 1.3;
	
	cout<<"volume bola"<<endl;
	cout<<"masukan jari jari :";
	cin>>r;
	cout<<"masukan tinggi	:";
	cin>>t;
	v=y*phi*r*t*t*t;
	cout<<"volume bola adalah :"<<v<<endl;
	
	//system ("pause");
	return 0;
}
