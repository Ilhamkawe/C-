#include <iostream>
using namespace std;

int main (){
	int r,v,t;
	float const phi=3.14;
	
	cout<<"Volume tabung"<<endl;
	cout<<"masukan jari-jari  :";
	cin>>r;
	cout<<"masukan tinggi :";
	cin>>t;
	v=phi*r*r*t;
	cout<<"volume tabung adalah :"<<v<<endl;
	
	//system ("PAUSE");
	return 0;
}
