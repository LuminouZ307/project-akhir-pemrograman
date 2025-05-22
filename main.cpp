#include <iostream>
#include "modules/logic.h"
#include "modules/util.h"

int main() {
    S_RANGKAIAN rangkaian[MAX_RANGKAIAN];

    garis();
    cout << "|            SIMULATOR RANGKAIAN LOGIKA DIGITAL           |\n";
    garis();

    int jumlah = inputJumlah();
    inputRangkaian(rangkaian, jumlah);
    prosesRangkaian(rangkaian, jumlah);
    tampilkanHasil(rangkaian, jumlah);

    return 0;
}