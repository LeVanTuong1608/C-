#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SinhVien {
private:
    string maso;
    string hoten;

public:
    void nhapbp() {
        cout << "Nhap ma so: ";
        cin >> maso;
        cout << "Nhap ho ten: ";
        cin >> hoten;
    }

    void xemmh() {
        cout << "Ma so: " << maso << endl;
        cout << "Ho ten: " << hoten << endl;
    }
};

class Lop {
private:
    SinhVien dssv[100];
    string malop;

public:
    void nhapbp() {
        cout << "Nhap ma lop: ";
        cin >> malop;
        for (int i = 0; i < 100; ++i) {
            dssv[i].nhapbp();
        }
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        for (int i = 0; i < 100; ++i) {
            dssv[i].xemmh();
        }
    }

    void sapxeptang() {
        // S?p x?p sinh viên theo maso tang d?n
        // ...
    }
};

class DiemSinhVien : public SinhVien {
private:
    float diem;
    string ketqua;

public:
    void nhapbp() {
        SinhVien::xemmh();
        cout << "Nhap diem: ";
        cin >> diem;
        ketqua = (diem >= 4) ? "Qua" : "Hoc lai";
    }

    void xemmh() {
        SinhVien::xemmh();
        cout << "Diem: " << diem << endl;
        cout << "Ket qua: " << ketqua << endl;
    }
};

class BangDiem {
private:
    string malop;
    string monhoc;
    int tsqua;
    int tshoclai;
    DiemSinhVien dsdiem[100];

public:
    BangDiem(Lop &lop) {
        malop = lop.getMalop();
        tsqua = 0;
        tshoclai = 0;
    }

    void nhapbp() {
        cout << "Nhap mon hoc: ";
        cin >> monhoc;
        for (int i = 0; i < 100; ++i) {
            dsdiem[i].nhapbp();
            if (dsdiem[i].getKetqua() == "Qua") {
                tsqua++;
            } else {
                tshoclai++;
            }
        }
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        cout << "Mon hoc: " << monhoc << endl;
        cout << "So sinh vien qua: " << tsqua << endl;
        cout << "So sinh vien hoc lai: " << tshoclai << endl;
        for (int i = 0; i < 100; ++i) {
            dsdiem[i].xemmh();
        }
    }

    void ghitep() {
        ofstream file("bangdiem.txt");
        if (file.is_open()) {
            file << "Ma lop: " << malop << endl;
            file << "Mon hoc: " << monhoc << endl;
            file << "So sinh vien qua: " << tsqua << endl;
            file << "So sinh vien hoc lai: " << tshoclai << endl;
            for (int i = 0; i < 100; ++i) {
                file << dsdiem[i].getMaso() << " " << dsdiem[i].getHoten() << " " << dsdiem[i].getDiem() << " " << dsdiem[i].getKetqua() << endl;
            }
            file.close();
        } else {
            cout << "Khong the mo file de ghi." << endl;
        }
    }

    void doctep() {
        ifstream file("bangdiem.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Khong the mo file de doc." << endl;
        }
    }
};

int main() {
    Lop a;
    a.nhapbp();
    a.sapxeptang();
    a.xemmh();

    BangDiem b(a);
    b.nhapbp();
    b.ghitep();

    BangDiem c;
    c.doctep();
    c.xemmh();

    return 0;
}
