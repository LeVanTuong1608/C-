#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class MonHoc {
private:
    string maMon;
    string tenMon;
    int soTinChi;

public:
    void nhapBP() {
        cout << "Nhap ma mon: ";
        cin >> maMon;
        cout << "Nhap ten mon: ";
        cin.ignore();
        getline(cin, tenMon);
        cout << "Nhap so tin chi: ";
        cin >> soTinChi;
    }

    void xemMH() {
        cout << "Ma mon: " << maMon << endl;
        cout << "Ten mon: " << tenMon << endl;
        cout << "So tin chi: " << soTinChi << endl;
    }
};

class DanhSach {
private:
    vector<MonHoc> dsMonHoc;

public:
    void nhapBP() {
        int n;
        cout << "Nhap so luong mon hoc: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            MonHoc monHoc;
            cout << "Nhap thong tin mon hoc " << i + 1 << ":" << endl;
            monHoc.nhapBP();
            dsMonHoc.push_back(monHoc);
        }
    }

    void xemMH() {
        for (const auto& monHoc : dsMonHoc) {
            monHoc.xemMH();
            cout << endl;
        }
    }

    MonHoc timMonHoc(string maMon) {
        for (const auto& monHoc : dsMonHoc) {
            if (monHoc.maMon == maMon) {
                return monHoc;
            }
        }
        // Trả về một đối tượng MonHoc rỗng nếu không tìm thấy
        return MonHoc();
    }
};

class MonHocDK : public MonHoc {
private:
    int nhom;
    int soTiet;

public:
    void nhapBP() {
        string maMon;
        cout << "Nhap ma mon: ";
        cin >> maMon;
        MonHoc monHoc = timMonHoc(maMon);
        if (monHoc.maMon.empty()) {
            cout << "Khong tim thay mon hoc!" << endl;
            return;
        }

        MonHoc::nhapBP();
        cout << "Nhap nhom: ";
        cin >> nhom;
        soTiet = getSoTinChi() * 15;
    }

    void xemMH() {
        MonHoc::xemMH();
        cout << "Nhom: " << nhom << endl;
        cout << "So tiet: " << soTiet << endl;
    }
};

class SinhVienDK {
private:
    string maSV;
    string hoTen;
    list<MonHocDK> dsMonHocDK;
    int tongTinChi;

public:
    void nhapBP(DanhSach& danhSach) {
        cout << "Nhap ma sinh vien: ";
        cin >> maSV;
        cout << "Nhap ho ten sinh vien: ";
        cin.ignore();
        getline(cin, hoTen);

        int n;
        cout << "Nhap so luong mon hoc dang ky: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            MonHocDK monHocDK;
            monHocDK.nhapBP();
            dsMonHocDK.push_back(monHocDK);
            tongTinChi += monHocDK.getSoTinChi();
        }
    }

    void xemMH() {
        cout << "Ma sinh vien: " << maSV << endl;
        cout << "Ho ten sinh vien: " << hoTen << endl;
        cout << "Tong tin chi: " << tongTinChi << endl;

        cout << "Danh sach mon hoc dang ky:" << endl;
        for (const auto& monHocDK : dsMonHocDK) {
            monHocDK.xemMH();
            cout << endl;
        }
    }

    void ghiTep() {
        ofstream file("sinhviendk.txt");
        if (file.is_open()) {
            file << "Ma sinh vien: " << maSV << endl;
            file << "Ho ten sinh vien: " << hoTen << endl;
            file << "Tong tin chi: " << tongTinChi << endl;
            for (constauto& monHocDK : dsMonHocDK) {
                file << "------------------------" << endl;
                file << "Mon hoc: " << endl;
                file << "------------------------" << endl;
                file << "Ma mon: " << monHocDK.getMaMon() << endl;
                file << "Ten mon: " << monHocDK.getTenMon() << endl;
                file << "So tin chi: " << monHocDK.getSoTinChi() << endl;
                file << "Nhom: " << monHocDK.getNhom() << endl;
                file << "So tiet: " << monHocDK.getSoTiet() << endl;
                file << "------------------------" << endl;
            }
            file.close();
            cout << "Ghi thong tin sinh vien vao tep thanh cong!" << endl;
        }
        else {
            cout << "Khong the mo tep de ghi!" << endl;
        }
    }

    void docTep() {
        ifstream file("sinhviendk.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "Khong the mo tep de doc!" << endl;
        }
    }
};

int main() {
    DanhSach danhSach;
    danhSach.nhapBP();
    danhSach.xemMH();

    SinhVienDK sinhVien1;
    sinhVien1.nhapBP(danhSach);
    sinhVien1.ghiTep();

    SinhVienDK sinhVien2;
    sinhVien2.docTep();
    sinhVien2.xemMH();

    return 0;
}