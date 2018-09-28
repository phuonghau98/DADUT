#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clrscr() //ham xoa man hinh
{
    system("@cls||clear");
}
// Su dung C
// viet cac chuc nang duoi dang ham, su dung con tro de thay doi gia tri trong mang nhan vien

struct employee {
	int id;
	char *lastName; 
	char *firstName; //https://stackoverflow.com/questions/26693537/in-c-why-cant-i-assign-a-string-to-a-char-array-after-its-declared
/*	int dateOBday; // ngay sinh
	int dateOBmonth; //thang sinh
	int dateOByear; //	nam sinh
	int sex; // 1 la nam, 0 la nu
*/	char *position; //chuc vu
	int department; // don vi cong tac
	float coefficientPay; //he so luong
	};
// function : xoa cac nhan vien lon hon 50 tuoi
// function : tinh luon, phu cap, thuc linh theo quy uoc trong file .doc

void tinhtien(struct employee a[],int n)
{
	int id;int i;float ep;
	float salary = 0,grantPay = 0,salarySum = 0;
	printf("Nhap id nhan vien can tinh: ");scanf("%d",&id);
	for (i=0;i<n;i++)
	{
		if (id == a[i].id)
		{
			ep = a[i].coefficientPay;
			salary = ep * 850;	
			if (a[i].position =="GD" || a[i].position =="PGD")
			{
				grantPay = (salary*40)/100 ;
			}
			else if(a[i].position == "TP"|| a[i].position == "PP")
			{
				grantPay = (salary*25)/100;
			}
	}
	}
	salarySum = salary + grantPay;
	printf("\nLuong=  %f", salary);
	printf("\nPhu cap= %f", grantPay);
	printf("\nTong linh= %f", salarySum);
	//printf("%f", salarySum);
		//printf("%s", a[0].position);
}
// function : in ra bang thong ke theo don vi gom cac cot: don vi, so nhan vien nam, so nv nu, tong thuc linh
//function : dem do dai ki tu
int stringl(char *s){
	int length;
	for(length = 0; s[length] != '\0'; ++length);
	return length;	
}
void centerstr(char *s, int flag = 0){
		int space;
		if(flag ==0){
			space = 60;
		}
		else if(flag ==1 ){
			space = 45;
		}
		int contentl = (int)(space-stringl(s)/2); //was 110
		for(int i = 0; i<contentl; i++){
		printf(" ");
	}
	printf("%s", s);
}
void blankline(int line){
	for(int i=0; i<line; i++){
		printf("\n");
	}
}
void header(){
	blankline(5);
	centerstr("QUAN LI NHAN VIEN");
	blankline(5);
}
void submenu(int i){
	char pointer[] = {' ', ' ', ' '};
	pointer[i] = '>';
	centerstr("MENU");
	blankline(5);
	centerstr("", 1); printf("%c XOA NHAN VIEN TREN 50 TUOI \n", pointer[0]);
	centerstr("", 1); printf("%c TINH LUONG, PHU CAP, LINH THUC \n", pointer[1]);
	centerstr("", 1); printf("%c BANG THONG KE\n", pointer[2]);
}
void menu(){
	   int ch;
	   int currentOption = 0;
	   submenu(0);
    while ((ch = getch()) != 27) /* 27 = Esc key */
    {	
    	clrscr();
    	header();
//        printf("%d", ch);	
		switch(ch = getch()){
			case 72:
				if(currentOption > 0){
				currentOption--;
				}
				submenu(currentOption);
				break;
			case 80:
				if(currentOption < 2){
				currentOption++;
				}
				submenu(currentOption);
				break;
		}
        printf("\n");
    }
    printf("ESC %d\n", ch);

}
int main(){
	struct employee a = {
		0001, 
		"Phuong", 
		"Hau",
		"GD",
		1000,
		100
				
	};
		struct employee b = {
		0002, 
		"Phat", 
		"Nguyen"	
	};
		struct employee c = {
		0003, 
		"Thanh", 
		"Nguyen"	
	};
	struct employee nhanvien[] = {a, b, c};
	header();
	//menu();
	tinhtien(nhanvien, 3);
	return 0;
}
