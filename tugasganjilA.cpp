#include <iostream>
#include <string>
using namespace std;

class nama;
class nim;
class nilai;

class mahasiswa{
    private:
    string nama;
    string nim;
    float nilai;

    void displayData()
    cout << "mahasiswa: " << nama << ", nim: " << nim << ", nilai: " << nilai << endl;

    friend class dosen;
};

class dosen{
    private:
    string nama;
    string NIDN;
    string pangkat;
    float gaji;

    void displayData()
    cout << "dosen: " << nama << ", NIDN: " << NIDN << ", pangkat: " << pangkat << ", gaji: " << gaji << endl;
};

class staff{
    private:
    string nama;
    string IDstaff;
    float gaji;

    void displayData()
    cout << "staff" << nama << ",  IDstaff: " << IDstaff << ", gaji: " << gaji << endl;
};

int main()
{
    mahasiswa mhs("Ani")
    dosen dsn("Dr. wira")
    staff stff("udin")

    mhs.tampilkan();
    dsn.tampilkan();
    stf.tampilkan();

    return 0;
}