#include <stdio.h>

struct Product {
	char nama[100];
	int stok;
	int harga;
};

void listProduct(){
	FILE *fp = fopen("product.txt", "r");
	struct Product pdt;
	printf("===============================\n");
	while(fscanf(fp, "%[^#]#%d#%d\n", pdt.nama, &pdt.stok, &pdt.harga) != EOF){
		printf("Nama Product : %s\n", pdt.nama);
		printf("Jumlah Stok : %d\n", pdt.stok);
		printf("Harga : %d\n", pdt.harga);
		printf("\n");
	}
	printf("===============================\n");
}

void tambahProduct(){
	getchar();
	printf("==================\n");
	printf("|     Qazir      |\n");
	printf("==================\n");
	printf("  Tambah Product\n");
	
	struct Product pdt;
	printf("Nama Product : ");
	scanf("%[^\n]s", pdt.nama);
	printf("Jumlah Stok : ");
	scanf("%d", &pdt.stok);
	printf("Harga : ");
	scanf("%d", &pdt.harga);
	printf("==================\n");
	
	FILE *fp = fopen("product.txt", "a");
	fprintf(fp, "%s#%d#%d\n", pdt.nama, pdt.stok, pdt.harga);
	fclose(fp);
	
	printf("Nama product : %s\nJumlah stok : %d\nHarga : %d\n", pdt.nama, pdt.stok, pdt.harga);
	printf("==================\n");
	printf("Terupdate!\n");
}

void pembayaran(){
	
}

void cekStok(){
	FILE *fp = fopen("product.txt", "r");
	struct Product pdt;
	printf("===============================\n");
	while(fscanf(fp, "%[^#]#%d#%d\n", pdt.nama, &pdt.stok, &pdt.harga) != EOF){
		printf("Nama Product : %s\n", pdt.nama);
		printf("Jumlah Stok : %d\n", pdt.stok);
		printf("\n");
	}
	printf("===============================\n");
}

int main (){
	int choice;
	do{
		printf("==================\n");
		printf("|     Qazir      |\n");
		printf("==================\n");
		puts("1. List Product");
		puts("2. Tambah Product");
		puts("3. Pembayaran");
		puts("4. Cek stock");
		puts("5. Exit");
		printf("Masukkan angka untuk menuju ke menu : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				listProduct();
				break;
			}
			case 2:{
				tambahProduct();
				break;
			}
			case 3:{
				pembayaran();
				break;
			}
			case 4:{
				cekStok();
				break;
			}
		}
	}while(choice != 5);
	printf("  ==================\n");
	printf("     TERIMA KASIH\n");
	printf("   POWERED BY QAZIR\n");
	printf("  ==================\n");
	printf("Algorithm Bootcamp B25");
	return 0;
}
