#include <iostream>
using namespace std;

int main (){
	int as,ts,tp,v;
	float const y=0.5;
	
	cout<<"Volume prisma segitiga siku-siku"<<endl;
	cout<<"masukan alas segitiga   :";
	cin>>as;
	cout<<"masukan tinggi segitiga :";
	cin>>ts;
	cout<<"masukan tinggi prisma   :";
	cin>>tp;
	v=as*ts*tp*y;
	cout<<"volume prisma segitiga siku-siku :"<<v<<endl;
	
	//system ("PAUSE");
	return 0;
}
