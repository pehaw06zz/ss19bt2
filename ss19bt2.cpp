#include<stdio.h>
#include<string.h>
#define maxLength 100
void nhapChuoi(char *str){
	printf("nhap chuoi: ");
	getchar();
	fgets(str,99,stdin);
	str[strcspn(str,"\n")]='\0';
	
}
void inChuoi(const char *str){
	printf("chuoi da nha: %s\n",str);
	
}
int chucai(char ktr){
	return( ktr >= 'A' && ktr <= 'Z'||ktr <= 'a' && ktr <= 'z');
	// ktr xem co dung la chu ha khong
}
int chuso(char ktr){
	return ktr >= '0' && ktr <= '9';
}
int demchucai(const char *str){
	int count =0;
	const char *p =str;
	while(*p != '\0'){
	
	if  (chucai(*p)){
		count++;
		
	}
	p++;
	}
	return count;
}
int demchuso(const char *str){
	int count =0;
	const char *p=str;
	while(*p != '\0'){
	
	if (chuso(*p)){
		count++;
	}
	p++;
   }
   return count;
}
int demkydb(const char *str){
	int count=0;
	const char *p=str;
	while(*p != '\0'){
	
	if (!chucai(*p) && !chuso(*p) && *p != ' '){
		count++;
	}
	p++;
   }
   return count;
}
int main(){
	char str[maxLength]="";
	int choice;
	do{ 
	printf("\n--------MENU------\n");
	printf("1. nhap vao chuoi ky tu\n");
	printf("2. in ra chuoi ky tu\n");
	printf("3. dem so luong chu cai\n");
	printf("4. dem so luong chu so\n");
	printf("5. dme so lung kytudb\n");
	printf("6. thoat\n");
	printf("nhap lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
		nhapChuoi(str);
		break;
		case 2:
		inChuoi(str);
		break;
		case 3:
		printf("so luong chu cai la: %d\n",demchucai(str));
		break;
		case 4: 
		printf("so luong chu so la: %d\n",demchuso(str));
		break;
		case 5: 
		printf("so luong kytudb la: %d\n",demkydb(str));
		break;
		case 6:
		printf("thoat chuong trinh\n");
		break;
		default: 
		printf("lua chon khong dung,vui long nhap lai\n");
		break;
	}
}	while(choice !=6);

	
	return 0;
}
