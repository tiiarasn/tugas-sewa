#include <iostream>

using namespace std;

int main(){
  int pilihan;
  
   cout << "##  Studio Musik  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. 1 Jam sewa" << endl;
    cout << "2. 2 Jam sewa" << endl;
    cout << "3. 3 Jam sewa" << endl;
    cout << "4. 4 Jam sewa" << endl;
    cout << "5. 5 Jam sewa" << endl;
    cout << "6. 6 Jam sewa" << endl;
    cout << "7. 7 Jam sewa" << endl;
    cout << "8. 8 Jam sewa" << endl;
    cout << "9. 9 Jam sewa" << endl;
    cout << "10. 10 Jam sewa" << endl;
    cout << endl;
 
    cout << "Silahkan Pilih Jam Sewa Anda (1-10): ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "Anda memilih 1 Jam" << endl;
        break;
    case 2:
        cout << "Anda memilih 2 Jam" << endl;
        break;
    case 3:
        cout << "Anda memilih 3 Jam" << endl;
        break;
    case 4:
        cout << "Anda memilih 4 Jam" << endl;
        break;
    case 5:
        cout << "Anda memilih 5 Jam" << endl;
        break;
    case 6:
        cout << "Anda memilih 6 Jam" << endl;
        break;
    case 7:
        cout << "Anda memilih 7 Jam" << endl;
        break;
    case 8:
        cout << "Anda memilih 8 Jam" << endl;
        break;
    case 9:
        cout << "Anda memilih 9 Jam" << endl;
        break;
    case 10:
        cout << "Anda memilih 10 Jam" << endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
    cout << endl;
  
  cout<<"Jadi Biaya Sewa adalah :Rp."<<pilihan*100000/2+50000;
}