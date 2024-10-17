#include <iostream>

using namespace std;

int main() {
    
    /*
    Dik: Jarak tempuh = 1000 km
         Pengemudi berhenti setiap 100 km       
    Dit: Berapa kali pengemudi berhenti?
    */
    
    // Loop algorithm
    for(int pengemudi = 0; pengemudi <= 1000; pengemudi++) {
        if(pengemudi == 100) {
            cout << "Berhenti ke-1" << endl;
        } else if (pengemudi == 200) {
            cout << "Berhenti ke-2" << endl;
        } else if (pengemudi == 300) {
            cout << "Berhenti ke-3" << endl;
        } else if (pengemudi == 400) {
            cout << "Berhenti ke-4" << endl;
        } else if (pengemudi == 500) {
            cout << "Berhenti ke-5" << endl;
        } else if (pengemudi == 600) {
            cout << "Berhenti ke-6" << endl;
        } else if (pengemudi == 700) {
            cout << "Berhenti ke-7" << endl;
        } else if (pengemudi == 800) {
            cout << "Berhenti ke-8" << endl;
        } else if (pengemudi == 900) {
            cout << "Berhenti ke-9" << endl;
        } else if (pengemudi == 1000) {
            cout << "Berhenti ke-10" << endl;
        }
    }
    
    cout << endl;
    cout << "Pengemudi berhenti sebanyak 10x" << endl;
    
    cout << endl;
    cout << "Nama: Lutfi Ismail Aliansah Putra" << endl;
    cout << "NIM: 10224004" << endl;
    
}