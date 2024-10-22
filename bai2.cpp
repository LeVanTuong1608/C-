#include <iostream>
#include <fstream>
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
    int ts;
    string malop;

public:
    void nhapbp() {
        cout << "Nhap ma lop: ";
        cin >> malop;
        cout << "Nhap so sinh vien: ";
        cin >> ts;

        for (int i = 0; i < ts; i++) {
            cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
            dssv[i].nhapbp();
        }
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        cout << "Danh sach sinh vien trong lop:" << endl;

        for (int i = 0; i < ts; i++) {
            cout << "Sinh vien thu " << i + 1 << ":" << endl;
            dssv[i].xemmh();
        }
    }

    void sapxeptang() {
        for (int i = 0; i < ts - 1; i++) {
            for (int j = i + 1; j < ts; j++) {
                if (dssv[i].maso > dssv[j].maso) {
                    SinhVien temp = dssv[i];
                    dssv[i] = dssv[j];
                    dssv[j] = temp;
                }
            }
        }
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

        if (diem >= 4) {
            ketqua = "Qua";
        } else {
            ketqua = "Hoc lai";
        }
    }

    void xemmh() {
        SinhVien::xemmh();
        cout << "Diem: " << diem << endl;
        cout << "Ket qua: " << ketqua << endl;
    }
};

class BangDiem {
private:
    int malop;
    string monhoc;
    int tsqua, tshoclai;
    DiemSinhVien dsdiem[100];

public:
    BangDiem(Lop l) {
        malop = l.malop;
        tsqua = 0;
        tshoclai = 0;

        for (int i = 0; i < l.ts; i++) {
            cout << "Nhap diem cho sinh vien thu " << i + 1 << endl;
            dsdiem[i].nhapbp();

            if (dsdiem[i].diem >= 4) {
                tsqua++;
            } else {
                tshoclai++;
            }
        }
    }

    void nhapbp() {
        cout << "Nhap mon hoc: ";
        cin.ignore();
        getline(cin, monhoc);
    }

    void xemmh() {
        cout << "Ma lop: " << malop << endl;
        cout << "Mon hoc: " << monhoc << endl;
        cout << "Tong so sinh vien qua: " << tsqua << endl;
        cout << "Tong so sinh vien hoc lai: " << tshoclai << endl;
        cout << "Bang diem:" << endl;

        for (int i = 0; i < tsqua + tshoclai; i++) {
            cout << "Sinh vien thu " << i + 1 << ":" << endl;
            dsdiem[i].xemmh();
        }
    }

    void ghitep() {
        ofstream file;
        file.open("bangdiem.txt");

        file << "Ma lop: " << malop << endl;
        file << "Mon hoc: " << monhoc << endl;
        file << "Tong so sinh vien qua: " << tsqua << endl;
        file << "Tong so sinh vien hoc lai: " << tshoclai << endl;
       for (int i = 0; i < tsqua + tshoclai; i++) {
            file << "Sinh vien thu " << i + 1 << ":" << endl;
            file << "Ma so: " << dsdiem[i].maso << endl;
            file << "Ho ten: " << dsdiem[i].hoten << endl;
            file << "Diem: " << dsdiem[i].diem << endl;
            file << "Ket qua: " << dsdiem[i].ketqua << endl;
        }

        file.close();
    }

    void doctep() {
        ifstream file;
        file.open("bangdiem.txt");

        string line;

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
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