#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum,lc,sl,gia;
	sum = 0;
	char answer;
	do {
		printf("Menu Quan Coffe Gom Co: ");
		printf("\n1. Nau Da");
		printf("\n2. Bac Xiu");
		printf("\n3. Tra Da");
		printf("\nMoi ban goi mon theo so da dinh san: ");
		scanf("%d", &lc);
		
	switch(lc) {
		case 1:
			gia = 30000;
			printf("\nNau da co gia la: %d ", gia);
			printf("\nNhap so luong: ");
			scanf("%d", &sl);
			printf("Ban chon %d coc nau da", sl);
			sum += sl * gia;
			break;
		
		case 2:
			gia = 40000;
			printf("\nBac Xiu co gia la: %d",gia);
			printf("\nNhap so luong: ");
			scanf("%d", &sl);
			printf("Ban chon %d coc Bac Xiu", sl);
			sum += sl * gia;
			break;
		
		case 3:
			gia = 3000;
			printf("\nTra Da co gia la: %d",gia);
			printf("\nNhap so luong: ");
			scanf("%d", &sl);
			printf("Ban chon %d coc Tra Da", sl);
			sum += sl * gia;
			break;
			
	}
			printf("\nBan co muon goi them mon khac khong? (Y/N): ");
			fflush(stdin);
			scanf("%c", &answer);

}	while(answer == 'y' || answer == 'Y');
		printf("\nTong tien cua ban la: %d", sum);
	return 0;
}
