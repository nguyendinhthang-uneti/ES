#include<iostream>
#include<string.h>
using namespace std;
class lopgiaovien {
public:
	char hoten[30];
	int tuoi;
	char bc[15];
	char cn[20];
	float bluong;
	int luongcoban;
public:
	void nhap() {
		cin.ignore();
		cout << "nhap ho ten giao vien la :";
		cin.getline(hoten,30);
		cout << "nhap vao tuoi giao vien la :";
		cin >> tuoi;
		cin.ignore();
		cout << "nhap bang cap giao vien la :";
		cin.getline(bc, 15);
		cout << "nhap chuyen nganh giao vien la :";
		cin.getline(cn, 20);
		cout << "nhap bac luong giao vien :";
		cin >> bluong;

	}
	void tt() {//- Hàm tính ti?n luong co b?n lcb bi?t r?ng lcb = bl * 610
		luongcoban = bluong * 610;
	}
	void xuat() {
		cout << "ho ten giao vien : " << hoten << endl
			<< "tuoi giao vien : " << tuoi << endl
			<< "bang cap giao vien : " << bc << endl
			<< "chuyen nganh gia vien : " << cn << endl
			<< "bac luong giao vien : " << bluong << endl
			<< "luong co ban cua giao vien : " << luongcoban << endl;
	}
	void xuatten() {
		cout << " ho ten giao vien : " << hoten << endl;
	}
	void chuyennganh(lopgiaovien  a[], int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (strlen(a[i].cn) < strlen(a[j].cn)) {
					lopgiaovien tg = a[i];
					a[i] = a[j];
					a[j] = tg;

				}

			}
		}
	}
	void sosanh( int n) {
		for (int i = 0; i < n; i++) {
			if (luongcoban<2000)
			{
				cout << "giao vien co luong co ban duoi 2000 la" << luongcoban << endl;
			}
		}
	}
	void xuatt() {
		tt();
		xuat();
	}
};
int main() {
	int n;
	cout << "NHAP VAO SO LUONG GIAO VIEN : ";
	cin >> n;
	lopgiaovien a[100];
	cout << "\n\tNHAP LOP GIAO VIEN : "<<endl;
	for (int i = 0; i < n; i++) {
		cout << "\tGIAO VIEN THU " << i + 1 << " : " <<endl;
		a[i].nhap();
	}
	cout << "\n\tXUAT LOP GIAO VIEN : "<<endl;
	for (int i = 0; i < n; i++) {
		cout << "\tGIAO VIEN THU  " << i + 1 << " : " << endl;
		a[i].xuatt();
	}
	for (int i = 0; i < n; i++) {
		if (a[i].luongcoban < 2000) {
			cout <<"\n\tDANH SACH GIAO VIEN CO LUONG < 2000 " << endl;
			a[i].xuatten() ;
		}
	}
	cout << "\n\tDANH SACH GIAO VIEN SAP XEP THEO DO LON TANG DAN CHUYEN NGANH " << endl;
	for (int i = 0; i < n; i++) {
		a[i].chuyennganh(a,n);
		cout << "\tGIAO VIEN THU  " << i + 1 << " : " << endl;
		a[i].xuat();
		}
	return 0;
}