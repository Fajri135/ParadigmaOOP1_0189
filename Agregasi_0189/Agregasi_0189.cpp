#include <iostream>
#include <Vector>
using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main() {
    ibu* varIbu = new ibu("Dini");
    ibu* varIbu2 = new ibu("Novi");
    anak* varAnak1 = new anak("Tono");
    anak* varAnak2 = new anak("Rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);

}
