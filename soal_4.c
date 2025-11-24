#include <stdio.h>
#include <stdlib.h>
int checking(int x[3],int y[3]){
    for(int i=0;i<3;i++){
        printf("Masukan X%d : ", i+1);
        scanf("%d", &x[i]);
        printf("Masukan Y%d : ", i+1);
        scanf("%d", &y[i]);
    }
    int check = (x[0]*(y[1]-y[2])) + (x[1]*(y[2]-y[0])) + (x[2]*(y[0]-y[1]));
    return check;
}
int main(){
    int panjang[3],tinggi[3];
    int check = checking(panjang,tinggi);
    if(check == 0){
        printf("Tidak Membentuk Segitiga\n");
    }else{
        printf("Membentuk Segitiga\n");
    }
    system("pause");
    return 0;
}