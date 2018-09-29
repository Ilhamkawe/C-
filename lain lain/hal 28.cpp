// program untuk melihat nilai akhir test
// nilai A jika nilai diatas 80, B jika 70 <= nilai < 80
// C jika 50 <= nilai 70 , D jika 30 <= nilai , 50
// E jika nilai ,=< 30

#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "masukan nilai test : ";
	cin >> n ;
	switch (n/10)
	{
		case 10:
		case 9:
		case 8:
			cout << 'A' <<endl;break;
		case 7:
			cout << 'B' <<endl;break;
		case 6:
		case 5:
			cout << 'C' <<endl;break;
		case 4:
		case 3:
			cout << 'D' <<endl;break;
		case 2:
		case 1:
		case 0:
			cout << 'E' <<endl;break;
		default :
			cout << "salah, ilai diluar jangkauan. " <<endl;
	}
}

