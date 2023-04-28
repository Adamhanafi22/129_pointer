#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); // deklarasi methoud
};

void mahasiswa::showNim() {
	cout << "No induk = " << nim << endl; //implementasi methoud diluar class
}

int main()
{
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim();      // member Acces operation

	mahasiswa& ref = mhs; //pointer reference refmhs
	ref.nim = 2;          //Member Access operation
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer Dereferense pMhs
	pMhs->nim = 3;          //Arrow operation
	mhs.showNim();
	system("pause");
	return 0; 


}