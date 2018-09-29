#include <iostream>
using namespace std;

int main (){
	int r,t,v;
	float const phi=3.14,y=	0.3;
	
	cout<<"Volume Kerucut"<<endl;
	cout<<"masukan jari-jari :";
	cin>>r;
	cout<<"masukan tinggi:";
	cin>>t;
	v=phi*r*t*y;
	cout<<"volume kerucut :"<<v<<endl;
	
	//system ("pause");
	return 0;
}
