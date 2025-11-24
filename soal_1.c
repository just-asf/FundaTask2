#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int validation(int x){
    while(x<1 || x>30)
    {
        printf("Masukan Angka antara 1-30: ");
        scanf("%d",&x);
    }
    return x;
}
void loop(int angka){
    int i,j;
    char num[100];
    for (i=0;i<=angka;i++){
        if(i%2 == 1){
            num[0] = '\0';
            for(j=0;j<i;j++){
                strcat(num,"0");
            }
            printf("%d %s\n",i,num);
        }
    }
}
int main(){
    int angka;
    printf("Masukan Angka : ");
    scanf("%d",&angka);
    angka = validation(angka);
    loop(angka);
    system("pause");
    return 0;
}