#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int aldi_2311102328jumlahSimpul;
    cout << "Silahkan masukkan jumlah simpul = ";
    cin >> aldi_2311102328jumlahSimpul;

    vector<string> nama_simpul(aldi_2311102328jumlahSimpul);
    vector<vector<int>> bobot(aldi_2311102328jumlahSimpul, vector<int>(aldi_2311102328jumlahSimpul));

    for (int i = 0; i < aldi_2311102328jumlahSimpul; ++i) {
        cout << "Silahkan masukkan nama simpul " << i + 1 << " = ";
        cin >> nama_simpul[i];
    }

    cout << "Silahkan masukkan bobot antar simpul\n";

    for (int i = 0; i < aldi_2311102328jumlahSimpul; ++i) {
        for (int j = 0; j < aldi_2311102328jumlahSimpul; ++j) {
            cout << nama_simpul[i] << "-->" << nama_simpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    // Output matriks jarak antar kota
    cout << "\n\t";
    for (int i = 0; i < aldi_2311102328jumlahSimpul; ++i) {
        cout << nama_simpul[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < aldi_2311102328jumlahSimpul; ++i) {
        cout << nama_simpul[i] << "\t";
        for (int j = 0; j < aldi_2311102328jumlahSimpul; ++j) {
            cout << bobot[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}