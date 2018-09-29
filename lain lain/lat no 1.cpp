#include <iostream>
using namespace std;

int main(){
	int angka;
	cout<<"=========Warning========="<<endl;
	cout<<"|   ganjil/genap 1-10   |"<<endl;
	cout<<"========================="<<endl;
	
	cout<<"masukan angka :";
	cin>>angka;
	switch (angka/1){
	
	case 10:
		cout<<"genap"<<endl;
		break;
	case 9:
		cout<<"ganjil"<<endl;
		break;
	case 8:
		cout<<"genap"<<endl;
		break;
	case 7:
		cout<<"ganjil"<<endl;
		break;
	case 6:
		cout<<"genap"<<endl;
		break;
	case 5:
		cout<<"ganjil"<<endl;
		break;
	case 4:
		cout<<"genap"<<endl;
		break;
	case 3:
		cout<<"ganjil"<<endl;
		break;
	case 2:
		cout<<"genap"<<endl;
		break;
	case 1:
		cout<<"ganjil"<<endl;
		break;
	default :
		cout<<"dibilang cuma 1-10 :v."<<endl;
}
}
