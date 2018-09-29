#include <iostream>

 using namespace std;
  int main (){
  int pil,s,k,l,p,lebar,r,d;
  const float phi = 3.14;
  
  cout<<"Hak cipta dari kawe :v "<<endl;
  cout<<"kalo mau copas bilang :v"<<endl;
  cout<<"==========PILIHAN============"<<endl;
  cout<<"| 1.Keliling Bujur sangkar  |"<<endl;
  cout<<"| 2.Luas Bujur sangkar  	 |"<<endl;
  cout<<"| 3.Keliling Persegi panjang|"<<endl;
  cout<<"| 4.Luas Persegi panjang  	 |"<<endl;
  cout<<"| 5.Keliling lingkaran      |"<<endl;
  cout<<"| 6.Luas lingkaran          |"<<endl;
  cout<<"pilih rumus		  :";
  cin>>pil;
  
  switch(pil){
  

case 1:
	cout<<"keliling bujur sangkar"<<endl;
	cout<<"masukan sisi     :	";
	cin>>s;
	k = s+s+s+s;
	cout<<"Keliling bujur sangkar adalah ="<<k<<endl;
	break;
case 2:
	cout<<"luas bujur sangkar"<<endl;
	cout<<"masukan sisi     :   ";
	cin>>s;
	l = s*s;
	cout<<"luas bujur sangkar adalah	 ="<<l<<endl;
	break;
case 3:
	cout<<"keliling Persegi panjang"<<endl;
	cout<<"masukan panjang	:";
	cin>>p;
	cout<<"masukan lebar	:";
	cin>>lebar;
	k = 2*p+2*lebar;
	cout<<"keliling persegi panjang adalah ="<<k<<endl;
	break;
case 4:
	cout<<"Luas Persegi pajang"<<endl;
	cout<<"masukan panjang  :";
	cin>>p;
	cout<<"masukan lebar	:";
	cin>>lebar;
	l = p*lebar;
	cout<<"luas persegi panjang adalah ="<<l<<endl;
	break;
case 5:
	cout<<"Keliling lingkaran"<<endl;
	cout<<"masukan Diameter	:";
	cin>>d;
	k = phi*d;
	cout<<"keliling lingkaran adalah ="<<k<<endl;
	break;
 case 6:
 	cout<<"luas lingkaran"<<endl;
	 cout<<"masukan jari-jari :";
	 cin>>r;
	 l = phi*r*r;
	 cout<<"luas lingkaran adalah ="<<l<<endl;
	 break;
default :
	cout<<"milih yang ada aja lah :v."<<endl; 	

  }
}
