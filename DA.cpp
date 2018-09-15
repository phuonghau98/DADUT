#include <stdio.h>
// Su dung C
// viet cac chuc nang duoi dang ham, su dung con tro de thay doi gia tri trong mang nhan vien

struct employee {
	int id;
	char *lastName; 
	char *firstName; //https://stackoverflow.com/questions/26693537/in-c-why-cant-i-assign-a-string-to-a-char-array-after-its-declared
	int dateOBday; // ngay sinh
	int dateOBmonth; //thang sinh
	int dateOByear; // nam sinh
	int sex; // 1 la nam, 0 la nu
	int position; //chuc vu
	int department; // don vi cong tac
	float salary; // luong
	float coefficientPay; //he so
	float grantPay; //tien phu cap
	float salarySum; //tong linh thuc
	};
// function : xoa cac nhan vien lon hon 50 tuoi
// function : tinh luon, phu cap, thuc linh theo quy uoc trong file .doc
// function : in ra bang thong ke theo don vi gom cac cot: don vi, so nhan vien nam, so nv nu, tong thuc linh

int main(){
	struct employee A = {
		2313, 
		"Phuong", 
		"Hau"	
	};
	printf("%s", A.firstName);
	printf("Hello world! ");
	return 0;
}
