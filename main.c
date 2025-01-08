#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n---------------------UTS Semester 1------------------------\n\n");

    // Soal 1
    char jwb_1;
    printf("Soal 1\n");

    // Program ini meminta input dari pengguna untuk nilai n_1
    // Kemudian menghitung jumlah bilangan genap dan ganjil dari 1 hingga n_1
    do{
        int n_1, hasil1 = 0, hasil2 = 0;
        printf("Inputkan nilai untuk dijumlah hasil 2 dan hasil 1 nya: ");
        scanf("%d", &n_1);
        
        // Loop untuk memeriksa bilangan genap dan ganjil
        for(int i = 1; i <= n_1; i++){
            if(i % 2 == 0){
                hasil1 += i;  // Menjumlahkan bilangan genap
            }
            else{
                hasil2 += i;  // Menjumlahkan bilangan ganjil
            }
        }
        
        // Menampilkan hasil perhitungan jumlah bilangan genap dan ganjil
        printf("Hasil bilangan ganjil = %d\n", hasil2);
        printf("Hasil bilangan genap = %d\n", hasil1);
        printf("\n---------------------------------------------\n\n");
        
        // Meminta pengguna untuk mengulang soal ini
        fflush(stdin);
        printf("Apakah anda ingin mengulang [y/t]? ");
        scanf("%c", &jwb_1);
    }while(jwb_1 == 'y');
    
    // Menampilkan pemisah antar soal
    printf("\n---------------------------------------------\n\n");

    // Soal 2
    int bln_2, tgl_2, thn_2;
    char jwb_2;
    printf("Soal 2\n");

    // Program ini memeriksa validitas tanggal berdasarkan bulan dan tahun
    // Tahun kabisat akan diperhitungkan untuk bulan Februari
    do{
        int valid = 0;
        printf("Masukkan bulan: ");
        scanf("%d", &bln_2);
        printf("Masukkan tanggal: ");
        scanf("%d", &tgl_2);
        printf("Masukkan tahun: ");
        scanf("%d", &thn_2);
        
        // Memeriksa tanggal sesuai dengan bulan yang dimasukkan
        switch(bln_2){
            case 1:
                if(tgl_2 > 31) valid = 1;
                break;
            case 2:
                if(thn_2 % 4 == 0){
                    if(tgl_2 > 29) valid = 1;  // Tahun kabisat
                } else if(tgl_2 > 28) valid = 1;
                break;
            case 3:
                if(tgl_2 > 31) valid = 1;
                break;
            case 4:
                if(tgl_2 > 30) valid = 1;
                break;
            case 5:
                if(tgl_2 > 31) valid = 1;
                break;
            case 6:
                if(tgl_2 > 30) valid = 1;
                break;
            case 7:
                if(tgl_2 > 31) valid = 1;
                break;
            case 8:
                if(tgl_2 > 31) valid = 1;
                break;
            case 9:
                if(tgl_2 > 31) valid = 1;
                break;
            case 10:
                if(tgl_2 > 30) valid = 1;
                break;
            case 11:
                if(tgl_2 > 31) valid = 1;
                break;
            case 12:
                if(tgl_2 > 30) valid = 1;
                break;
        }
        
        // Menampilkan hasil validitas tanggal
        if(valid == 0)
            printf("Tanggal valid\n");
        else
            printf("Tanggal tidak valid\n");
        
        printf("\n---------------------------------------------\n\n");
        
        // Meminta pengguna untuk mengulang soal ini
        fflush(stdin);
        printf("Apakah anda ingin mengulang [y/t]? ");
        scanf("%c", &jwb_2);

    }while(jwb_2 == 'y');
    
    // Menampilkan pemisah antar soal
    printf("\n---------------------------------------------\n\n");

    // Soal 3
    printf("Soal 3\n");

    // Program ini akan memeriksa bilangan sempurna
    // Bilangan sempurna adalah bilangan yang jumlah pembagi dari bilangan tersebut (kecuali bilangan itu sendiri) sama dengan bilangan itu
    int n_3, kelipatan = 0;
    printf("Input untuk mengecek bilangan sempurna: ");
    scanf("%d", &n_3);
    
    // Loop untuk mencari bilangan sempurna
    for(int i = 2; i <= n_3; i++){
        int hasil_3 = 0;
        
        // Menjumlahkan pembagi bilangan i
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                hasil_3 += j;  // Menjumlahkan pembagi bilangan i
            }
        }
        
        // Jika hasil penjumlahan pembagi sama dengan bilangan itu sendiri
        // Maka bilangan tersebut adalah bilangan sempurna
        if(hasil_3 == i){
            printf("=%d\n", i);
        }
    }

    return 0;
}
