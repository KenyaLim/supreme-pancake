#include <stdio.h>
//#include <stdlib.h>

int hargaBarang(int harga);

int main() {
  int total;
  int jumlahBeli, menu; 
  
  printf("||\tSelamat Datang R.M. Darren\t\t||\n");
  printf("||\tSilahkan Memilih Menu\t\t\t||\n");
  printf("||\t1.Nasi Goreng\t Rp. 10.000\t\t||\n");
  printf("||\t2.Mie Goreng\t Rp. 9.000\t\t||\n");
  printf("||\t3.Sate Ayam\t Rp. 15.000 / Porsi\t||\n");
  printf("||\t4.Rendang Sapi\t Rp. 25.000\t\t||\n");
  printf("Silahkan pilih salah satu menu : ");
  scanf("%i", &menu);
  
  switch (menu) {
    case 1:
      printf("Porsi yang ingin dipesan : ");
      scanf("%i", &jumlahBeli);
      total = jumlahBeli * 10000;
      break;

    case 2:
      printf("Porsi yang ingin dipesan : ");
      scanf("%i", &jumlahBeli);
      total = jumlahBeli * 9000;
      break;

    case 3:
      printf("Porsi yang ingin dipesan : ");
      scanf("%i", &jumlahBeli);
      total = jumlahBeli * 15000;
      break;

    case 4:
      printf("Porsi yang ingin dipesan : ");
      scanf("%i", &jumlahBeli);
      total = jumlahBeli * 25000;
      break;
  
    default:
      printf("Menu tidak terdaftar!\n");
      break;
  }

  int totalAkhir = hargaBarang(total);

  if (totalAkhir == total) {
    printf("Anda Tidak Mendapatkan Potongan\n");
  } else if (totalAkhir < total) {
    printf("Mendapatkan potongan sebesar 10 Persen\n");
  } else {
    printf("Mendapatkan potongan sebesar 15 Persen\n");
  }
  printf("Anda perlu Membayar sebesar Rp. %i\n", totalAkhir);

  return 0;
}

int hargaBarang(int harga) {
  int diskon;

  if (harga >= 50000 && harga < 150000) {
    diskon = harga * (10 / 100);
    return harga - diskon;
  } else if (harga >= 150000) {
    diskon = harga * (15 / 100);
    return harga - diskon;
  } else if (harga < 50000) {
    return harga;
  }
}
