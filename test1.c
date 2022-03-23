#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin = 123;
	int mypin;
	int limit,lc,sd,tien_rut,sd_ht;
	char answer;
	limit = 0;
	sd = 1000000;

	do {
		printf("nhap ma pin: ");
		scanf("%d", &mypin);
		limit++; 
	} while (mypin != pin && limit < 3);

	if(mypin == pin) {
		do {
			printf("login thanh cong");
			printf("\n1. Xem so du hien tai: ");
			printf("\n2. Rut tien: ");
			printf("\nNhap lua chon: ");
			scanf("%d", &lc);

		switch(lc) {
			case 1:
					printf("\nxem so du:");
					printf("\nso du hien tai la: %d VND", sd);
				break;
			case 2:
					printf("\nNhap so tien muon rut: ");
					scanf("%d", &tien_rut);
				if (tien_rut <= sd) {
					sd_ht = sd - tien_rut;
						printf("Ban co chac chan muon rut tien khong (Y/N): ");
						fflush(stdin);
						scanf("%c", &answer);
						while(answer == 'y' || answer == 'Y'){
							printf("\nRut thanh cong!");
							printf("\nSo du con lai: %d VND", sd_ht);
						}

				} while (tien_rut > sd) {
						printf("So tien rut phai nho hon hoac bang so du: ");
						scanf("%d", &tien_rut);
					if (tien_rut <= sd) {
						printf("Ban co chac chan muon rut tien khong (Y/N): ");
						fflush(stdin);
						scanf("%c", &answer);
						printf("Rut thanh cong:");
						printf("\nSo du con lai la: %d",sd_ht);
					}
				}
					break;
			default:
						printf("Chuc nang hien tam khoa");
					break;
		}
						printf("\nBan co muon tiep tuc thuc hien giao dich khac khong? (Y/N): ");
						fflush(stdin);
						scanf("%c", &answer);
		} while (answer == 'Y' || answer == 'y');
	}
	else{
		printf("khoa the");
	}
	
	return 0;
}
