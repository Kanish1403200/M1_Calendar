#include "calender.h"
void AddNote(){
    FILE *fp;
    fp = fopen("note.dat","ab+");
    system("cls");
    gotoxy(5,7);
    printf("Enter the date(DD/MM): ");
    scanf("%d%d",&R.dd, &R.mm);
    gotoxy(5,8);
    printf("Enter the Note(50 character max): ");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    if(fwrite(&R,sizeof(R),1,fp)){
        gotoxy(5,12);
        puts("Note is saved sucessfully");
        fclose(fp);
    }else{
        gotoxy(5,12);
        SetColor(12);
        puts("\aFail to save!!\a");
        ClearColor();
    }
    gotoxy(5,15);
    printf("Press any key............");
    getch();
    fclose(fp);
}

void showNote(int mm){
    FILE *fp;
    int i = 0, isFound = 0;
    system("cls");
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.mm == mm){
            gotoxy(10,5+i);
            printf("Note %d Day = %d: %s", i+1, R.dd,  R.note);
            isFound = 1;
            i++;
        }
    }
    if(isFound == 0){
        gotoxy(10,5);
        printf("This Month contains no note");
    }
    gotoxy(10,7+i);
    printf("Press any key to back.......");
    getch();

}
