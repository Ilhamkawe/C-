//Program untuk menseleksi suatu bilangan 
//Nilai tinggi jika nilai 60<= nilai <=100 ,nilai sedang jika 30<=nilai<60
//nilai rendah jika 0 <=nilai <30 

#include <iostream>
using namespace std;
 
 
 int main (){
  	int n;
  	
	cout<<"======Note======"<<endl;
  	cout<<"|t=nilai tinggi|"<<endl;
  	cout<<"|s=nilai sedang|"<<endl;
  	cout<<"|r=nilai rendah|"<<endl;
  	cout<<"================"<<endl;
 	cout<<" masukan Nilai untuk diseleksi : ";
	cin >> n ; 
 	switch (n/10)
 	
 {
 		case 10:
 		case 9:
 		case 8:
 		case 7:
 		case 6:
	         cout <<'t'<<endl;break;
 		case 5:
 		case 4:
 			cout <<'s'<<endl;break;
 		case 3:
 		case 2:
 		case 1:
  		case 0:
 			cout <<'r'<<endl;break;
 		default:
 			cout << "salah, nilai keluar jangkauan." << endl;
 	}
 }
