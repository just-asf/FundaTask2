#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define fisrtCost 15000
#define secondCost 6000
#define discount 0.2

float Hitung_biaya(float beratAsli){
    float hasil,j,hargaSementara,hargaDisc,total;

    float celling = ceilf(beratAsli);
    int berat = (int)celling;
    if(berat == 1){
        hasil = fisrtCost;
    }else{
        int i = berat - 1;
        j = i*secondCost;
        hargaSementara = j + fisrtCost;
        if(berat <= 20){
            hasil = hargaSementara;
        }else{
            hargaDisc =  hargaSementara * discount;
            total = hargaSementara - hargaDisc;
            hasil = total;
        }
    }
    return hasil;
}

int main(){
    float x;
    printf("Masukan Berat(kg) : ");
    scanf("%f",&x);
    float hasil = Hitung_biaya(x);
    printf("Biaya = Rp.%.2f\n",hasil);
    system("pause");
    return 0;
}