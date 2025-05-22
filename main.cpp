#include <iostream>
#include "modules/logic.h"
#include "modules/util.h"

int main() {
    S_RANGKAIAN rangkaian[MAX_RANGKAIAN];

    garis();
    cout << "|            SIMULATOR RANGKAIAN LOGIKA DIGITAL           |\n";
    garis();

    int jumlah = input_jumlah();
    input_rangkaian(rangkaian, jumlah);
    proses_rangkaian(rangkaian, jumlah);
    hasil_rangkaian(rangkaian, jumlah);

    return 0;
}