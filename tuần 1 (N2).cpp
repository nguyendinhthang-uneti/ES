#include <iostream>
using namespace std;

int main() {
	int thu;
	do{
		cout << " Nhap vao thu (1 -> 7) trong tuan: ";
		cin >> thu;
		if(thu <= 0 || thu >= 8) {
			cout << " Thu khong hop le, yeu cau nhap lai! "<<endl;
		}
	}while(thu <= 0 || thu >= 8);
	if(thu == 1) {
		cout << " Sunday " <<endl;
	}
	else if(thu == 2) {
		cout << " Monday " <<endl;
	}
	else if(thu == 3) {
		cout << " Tuesday " <<endl; 
	}
	else if(thu == 4) {
		cout << " Wednesday " <<endl; 
	} 
	else if(thu == 5) {
		cout << " Thursday " <<endl; 
	} 
	else if(thu == 6) {
		cout << " Friday " <<endl; 
	} 
	else {
		cout << " Saturday " <<endl; 
	} 
}

// if - else
// Bai 2
#include <iostream>
using namespace std;

int main() {
	int n;
	do{
		cout << " Nhap vao so KW dien tieu thu: ";
	    cin >> n;
	    if(n <= 0) {
	    	cout << " \nSo KW khong hop le, hay nhap lai! "<<endl;
		}
	}while(n <= 0);
	if( n > 0 && n <= 100) {
		cout << " Don gia: 2000 dong/KW " <<endl;
	}
	else if( n >= 101 && n <= 200 ) {
		cout << " Don gia: 2500 dong/KW " <<endl;
	}
	else if( n >= 201 && n <= 300 ) {
		cout << " Don gia: 3000 dong/KW " <<endl;
	}
	else{
		cout << " Don gia: 5000 dong/KW " <<endl;
	}

}


// Vong lap for
// Bai 3
#include <iostream>
using namespace std;

int main() {
	int n;
	float P=1;
	cout << " Nhap n: ";
	cin >> n;
	for( int i = 1; i <= n; i++) {
		P = P*2*i; 
	}
	cout << P<< endl;
}

// Bai 4
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao gia tri cua n ";
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=i;j>=1;j--){
			cout<<"*"; 
		} 
		cout<<endl; 
	}	
	return 0;
}
