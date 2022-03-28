#include<iostream>
using namespace std;
class lopkhachhang {
public:
	char hoten[30];
	int ngay;
	int thang;
	int nam;
	char socmnd[10];
	char hokhau[50];
public:
	void nhap() {
		cout << "nhap ho ten khach hang la : ";
		cin >> hoten;
		cout << "nhap ngay sinh khach hang la : ";
		cin >> ngay;
		cout << "nhap thang sinh khach hang la : ";
		cin >> thang;
		cout << "nhap nam sinh khach hang la : ";
		cin >> nam;
		cout << "nhap so chung minh nhan dan khach hang la : ";
		cin >> socmnd;
		cout << "nhap ho khau khach hang la : ";
		cin >> hokhau;
	}
	void xuat() {
		cout << "ho ten khach hang : " << hoten << endl
			<< "ngay sinh khach hang : " << ngay << endl
			<< "thang sinh khach hang : " << thang << endl
			<< "nam sinh khach hang : " << nam << endl
			<< "so cmnd khach hang : " << socmnd << endl
			<< "ho khau khach hang : " << hokhau << endl;
	}
	void xuatten() {
		cout << "ho ten khach hang la " << hoten << endl;
	}
	void sosanh(lopkhachhang a[], int n) {
		for (int i = 0; i < n ; i++) {
			for (int j = 0; j < n; j++) {
				if (strlen(a[i].hoten) < strlen(a[j].hoten)) {
					lopkhachhang tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
	}
	
};


int main() {
	int n;
	cout << "NHAP SO LUONG KHACH HANG LA : ";
	cin >> n;
	lopkhachhang a[100];
	fflush;
	cout << "\n\tNHAP THONG TIN KHACH HANG LA : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].nhap();
	}
	cout << "\n\tXUAT THONG TIN KHACH HANG LA : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].xuat();
	}
	cout << "\n\tKHACH HANG THEO THU TU TANG DAN CUA HO TEN : " << endl;
	for (int i = 0; i < n; i++) {
		a[i].sosanh(a, n);
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].xuatten();
	}
	for (int i = 0; i < n; i++) {
		if (a[i].thang == 12) {
			cout << "\n\tCAC KHACH HANG CO SINH NHAT THANG 12 LA : " << endl;
			a[i].xuatten();
		}
	}
	
	return 0;
}