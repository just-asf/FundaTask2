#include <stdio.h>
#include <stdlib.h>
float konversi(char x,int y){
    float z;
    switch (x)
    {
    case 'f':
        z = (y * 9.0/5.0) + 32;
        return z;
        
        break;
        case 'k':
        z = y + 273.15;
        return z;
        break;
        case 'r':
        z = y * 4.0/5.0;
        return z;
        break;
    
    default:
        return 0;
    }
}
int main()
{
    int celcius;
    char tujuan;
    char temp[] = {'f','k','r'};
    char tipe[11];
    printf("Temperatur tujuan [f,k,r] : ");
    scanf("%c",&tujuan);
    int x=0;                                                
    for(int i = 0;i<3;i++){
        if(tujuan == temp[i]){
            x = 1;
            switch (temp[i])
            {
            case 'f':
                sprintf(tipe, "Fahrenheit");
                break;
            case 'k':
                sprintf(tipe, "Kelvin");
                break;
            case 'r':
                sprintf(tipe, "Reamur");
                break;
            
            default:
                break;
            }
            break;
        }
    }
    while(!x){
        printf("Masukan Kembali Temperatur Tujuan [f,k,r] : ");
        scanf(" %c", &tujuan);
        for(int i = 0;i<3;i++){
        if(tujuan == temp[i]){
            x = 1;
            switch (temp[i])
            {
            case 'f':
                sprintf(tipe, "Fahrenheit");
                break;
            case 'k':
                sprintf(tipe, "Kelvin");
                break;
            case 'r':
                sprintf(tipe, "Reamur");
                break;
            
            default:
                break;
            }
            }
        }
    }
    printf("Masukan Suhu Celcius : ");
    scanf("%d",&celcius);
    float hasil = konversi(tujuan,celcius);
    printf("Suhu %s = %.2f\n", tipe, hasil);
    system("pause");
    return 0;
}
