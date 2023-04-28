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