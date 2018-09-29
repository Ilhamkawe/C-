#include <iostream>
using namespace std;

int main (){
	int r,t,l;
	float const phi=3.14;
	int const y=2;
	
	cout<<"Luas Tabung"<<endl;
	cout<<"masukan jari-jari :";
	cin>>r;
	cout<<"masukan tinggi    :";
	cin>>t;
	l=phi*r*2+t*r;
	cout<<"luas tabung adalah :"<<l<<endl;
	
	//system ("pause");
	return 0;  	
}
