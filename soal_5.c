#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int choice = 0;
    char word[1024],result[1024];
    while(choice != 3){
        printf("Program tOGGLE cASE\n");
        printf("1. Input kalimat\n");
        printf("2. Output kalimat\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Masukan Kalimat: ");
            fgets(word,1024,stdin);
            word[strcspn(word, "\n")] = '\0';
            break;
        case 2:
            for(int i=0;word[i] != '\0';i++){
                if(isupper(word[i])){
                    result[i] = tolower(word[i]);
                }else if(islower(word[i])){
                    result[i] = toupper(word[i]);
                }else{
                    result[i] = word[i];
                }
            }
            result[strlen(word)] = '\0';
            printf("%s\n",result);
            break;
        case 3:
        printf("Terima Kasih Telah Menggunakan Program Ini\n");
        break;
        
        default:
            break;
        }
    }
    system("pause");
    return 0;
};