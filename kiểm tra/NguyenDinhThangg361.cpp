#include <iostream.h>
using namespace std;

class PTGT 
{
	private:
	//thuoc tinh 
	       
	       char ma[10];
	       char hang[10];
	       int ngayxx;
	       float gia;
 
     public:
            
            PTGT(char *ma = "",char *hang = "", int ngayxx = 0, float gia = 0)
            {
           	    strcpy (this ->ma, ma);
            	strcpy (this ->hang, hang);
            	this ->ngayxx = 0;
	            this ->gia = 0;
            }
            
            ~PTGT()
            {
               this ->ma;
			   this ->hang;
			   this ->ngayxx;
			   this ->gia;	
            }   
			
			void nhap()
			{
				fflush(stdin);
				cout <<"\nNhap ma phuong tien: ";
				cin.getline(ma, 10);
				cout <<"\nNhap hang san xuat: ";
				cin.getline(hang, 10);
				cout <<"\nNhap ngay xuat xuong: ";
				cin>>ngayxx;
				cout <<"\nNhap gia chua thue: ";
				cin>>gia;
			} 
			
			void xuat()
			{
				cout <<"\nMa phuong tien: "<<ma<<endl;
				cout <<"\nHang san xuat: "<<hang<<endl;
				cout <<"\nNgay xuat xuong: "<<ngayxx<<endl;
				cout <<"\Gia chua thue: "<<gia<<endl;
			}
};


class MAYBAY : public PTGT 
{
	private:
	     
		 char duongbay[15];
		 int chongoi;
		 char dangky[30];
    
    public:
    
         MAYBAY(char *ma = "",char *hang = "", int ngayxx = 0, float gia = 0,
		 char *duongbay = "", int chongoi = 0, char *dangky = "")
		 :PTGT(ma, hang, ngayxx, gia)
		 {
 			strcpy (this ->duongbay, duongbay);
 			this ->chongoi = 0;
			 strcpy(this ->dangky, dangky);
 		}
 		~MAYBAY()
 		{
		 	this ->duongbay;
	        this ->chongoi;
	        this ->dangky;
		 }
 		void nhap()
 		{
		 	PTGT::nhap();
			cout <<"\nNhap duong bay :";
			cin.getline(duongbay, 15);
			cout <<"\nNhap so cho ngoi: ";
			cin>>chongoi;
			fflush(stdin);
			cout <<"\nNhap noi dang ky kinh doanh: ";
			cin.getline(dangky, 30);
			 
		 }
		 void GiaThanh()
		 
};



int main()
{
	int n;
	cout<<"\nNhap so phuong tien giao thong: ";
	cin>>n;
	fflush(stdin);
	PTGT a[n];
	cout<<"\nNhap phuong tien giao thong: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nPhuong tien thu "<<i + 1<<": \n";
		a[i].nhap();
	}
	cout<<"\n\tXuat phuong tien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nPhuong tien thu "<<i + 1<<": \n";
		a[i].xuat();
	}
	//------------------------
	
	return 0;
}