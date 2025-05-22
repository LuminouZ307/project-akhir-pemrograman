#ifndef LOGIC_H
#define LOGIC_H

#include <string>
using namespace std;

const int MAX_RANGKAIAN = 10;

struct S_RANGKAIAN {
    string jenis;
    int inputA;
    int inputB;
    int hasil;
};

int AND(int a, int b);
int OR(int a, int b);
int NOT(int a);
int NAND(int a, int b);
int NOR(int a, int b);
int XOR(int a, int b);
int XNOR(int a, int b);

bool is_valid(int x);

int inputJumlah();
void inputRangkaian(S_RANGKAIAN r[], int jumlah);
void prosesRangkaian(S_RANGKAIAN r[], int jumlah);
void tampilkanHasil(S_RANGKAIAN r[], int jumlah);

#endif