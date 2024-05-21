#ifndef ANAK_H
#define ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}
	~nama() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif