#include <iostream>
#include <string>
#include <iomanip>
#include "logic.h"
#include "util.h"
using namespace std;

int AND(int a, int b) 
{ 
    return a & b; 
}
int OR(int a, int b) 
{ 
    return a | b; 
}
int NOT(int a) 
{ 
    return !a; 
}
int NAND(int a, int b) 
{ 
    return !(a & b); 
}
int NOR(int a, int b) 
{ 
    return !(a | b); 
}
int XOR(int a, int b) 
{ 
    return a ^ b; 
}
int XNOR(int a, int b) 
{ 
    return !(a ^ b); 
}

bool is_valid(int x) {
    return x == 0 || x == 1;
}

int input_jumlah() {
    int jumlah;
    cout << "Masukkan jumlah rangkaian logika (maks 10): ";
    cin >> jumlah;
    if (jumlah < 1 || jumlah > MAX_RANGKAIAN) {
        cout << "Jumlah tidak valid.\n";
        exit(1);
    }
    return jumlah;
}

void input_rangkaian(S_RANGKAIAN r[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Rangkaian ke-" << (i + 1) << " ---\n";
        cout << "Pilih jenis gerbang (AND, OR, NOT, NAND, NOR, XOR, XNOR): ";
        cin >> r[i].jenis;

        if (r[i].jenis == "NOT") {
            cout << "Masukkan input A (0 atau 1): ";
            cin >> r[i].inputA;
            if (!is_valid(r[i].inputA)) exit(1);
            r[i].inputB = INVALID_INPUT;
        } else {
            cout << "Masukkan input A (0 atau 1): ";
            cin >> r[i].inputA;
            cout << "Masukkan input B (0 atau 1): ";
            cin >> r[i].inputB;
            if (!is_valid(r[i].inputA) || !is_valid(r[i].inputB)) exit(1);
        }
    }
}

void proses_rangkaian(S_RANGKAIAN r[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        if (r[i].jenis == "AND") r[i].hasil = AND(r[i].inputA, r[i].inputB);
        else if (r[i].jenis == "OR") r[i].hasil = OR(r[i].inputA, r[i].inputB);
        else if (r[i].jenis == "NOT") r[i].hasil = NOT(r[i].inputA);
        else if (r[i].jenis == "NAND") r[i].hasil = NAND(r[i].inputA, r[i].inputB);
        else if (r[i].jenis == "NOR") r[i].hasil = NOR(r[i].inputA, r[i].inputB);
        else if (r[i].jenis == "XOR") r[i].hasil = XOR(r[i].inputA, r[i].inputB);
        else if (r[i].jenis == "XNOR") r[i].hasil = XNOR(r[i].inputA, r[i].inputB);
        else r[i].hasil = INVALID_INPUT;
    }
}

void hasil_rangkaian(S_RANGKAIAN r[], int jumlah) {
    cout << "\n";
    garis();
    cout << "| No |  GERBANG  | Input A | Input B |      Ekspresi       | Hasil |\n";
    garis();
    for (int i = 0; i < jumlah; i++) {
        string ekspresi = (r[i].jenis == "NOT")
            ? "NOT(" + to_string(r[i].inputA) + ")"
            : r[i].jenis + "(" + to_string(r[i].inputA) + ", " + to_string(r[i].inputB) + ")";

        cout << "| " << setw(2) << (i + 1) << " | "
             << setw(9) << r[i].jenis << " | "
             << setw(8) << r[i].inputA << " | ";

        if (r[i].jenis == "NOT") cout << setw(8) << "-" << " | ";
        else cout << setw(8) << r[i].inputB << " | ";

        cout << setw(19) << ekspresi << " |  "
             << r[i].hasil << "   |\n";
    }
    garis();
    cout << "Simulasi selesai.\n";
    garis();
}