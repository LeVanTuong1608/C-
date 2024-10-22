
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

class SinhVien {
protected:
    int maso;
    string hoten;

public:
    void nhapbp() {
        cout << "Nhap ma so: ";
        cin >> maso;
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
    }

    void xemmh() {
        cout << "Ma so: " << maso << endl;
        cout << "Ho ten: " << hoten << endl;
    }
};

class Lop {
protected:
    SinhVien dssv[100];
    string malop;
    int soluong;

public:
    void nhapbp() {
        cout << "Nhap ma lop: ";
        cin.ignore();
        getline(cin, malop);
        cout << "Nhap so luong sinh vien: ";
        cin >> soluong;

        cout << "Nhap thong tin cho tung sinh vien:" << endl;
        for (int i = 0; i < soluong; i++) {
            cout << "Nhap thong tin sinh vien thu " << i+1 << ":" << endl;
            dssv[i].nhapbp();
        }
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        cout << "Danh sach sinh vien trong lop:" << endl;
        for (int i = 0; i < soluong; i++) {
            cout << "Sinh vien thu " << i+1 << ":" << endl;
            dssv[i].xemmh();
        }
    }

    static bool compareMaso(const SinhVien& sv1, const SinhVien& sv2) {
        return sv1.maso < sv2.maso;
    }

    void sapxeptang() {
        sort(dssv, dssv + soluong, compareMaso);
    }
};

class DiemSinhVien : public SinhVien {
private:
    float diem;
    string ketqua;

public:
    void nhapbp() {
        SinhVien::nhapbp();
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
    BangDiem(Lop l) {
        malop = l.malop;
    }

    void nhapbp() {
        cout << "Nhap mon hoc: ";
        cin.ignore();
        getline(cin, monhoc);

        tsqua = 0;
        tshoclai = 0;

        cout << "Nhap diem cho tung sinh vien:" << endl;
        for (int i = 0; i < soluong; i++) {
            cout << "Nhap diem cho sinh vien thu " << i+1 << ":" << endl;
            dsdiem[i].nhapbp();
            if (dsdiem[i].diem >= 4) {
                tsqua++;
            } else {
                tshoclai++;
            }
        }
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        cout << "Mon hoc: " << monhoc << endl;
        cout << "Tong so sinh vien qua: " << tsqua << endl;
        cout << "Tong so sinh vien hoc lai: " << tshoclai << endl;
        cout << "Bang diem:" << endl;
        for (int i = 0; i < soluong; i++) {
            cout << "Sinh vien thu " << i+1 << ":" << endl;
            dsdiem[i].xemmh();
        }
    }

    void ghitep() {
        ofstream file("bangdiem.txt");
        if (file.is_open()) {
            file << "Ma lop: " << malop << endl;
            file << "Mon hoc: " << monhoc << endl;
            file << "Tong so sinh vien qua: " << tsqua << endl;
            file << "Tong so sinh vien hoc lai: " << tshoclai <<endl;
            for (int i = 0; i < soluong; i++) {
                file << "Sinh vien thu " << i+1 << ":" << endl;
                file << "Ma so: " << dsdiem[i].maso << endl;
                file << "Ho ten: " << dsdiem[i].hoten << endl;
                file << "Diem: " << dsdiem[i].diem << endl;
                file << "Ket qua: " << dsdiem[i].ketqua << endl;
            }

            file.close();
            cout << "Da ghi thong tin vao file bangdiem.txt" << endl;
        } else {
            cout << "Khong the mo file de ghi!" << endl;
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
            cout << "Khong the mo file de doc!" << endl;
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
