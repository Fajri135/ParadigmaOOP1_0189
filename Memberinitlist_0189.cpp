#include <iostream>
#include <string>
using namespace std;

//ParadigmaOOP1_0189
//Minimal Commite = 15

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;
public:
	mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {
	}

	~mahasiswa() {
		cout << "id		= " << id << endl;
		cout << "Nama   = " << nama << endl;
		cout << "Nilai  + " << nilai << endl;
	}
};

int main() {
	
}