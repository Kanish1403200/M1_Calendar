#include "calender.h"
void printMonth(int mon,int year,int x,int y){ //prints the month with all days
    int nod, day, cnt, d = 1, x1 = x;
    if(!(mon>=1 && mon<=12)){
        printf("INVALID MONTH");
        getch();
        return;
    }
    if(!(year>=1600)){
        printf("INVALID YEAR");
        getch();
        return;
    }
    gotoxy(20,y);
    print_date(mon,year);
    y += 3;
    gotoxy(x,y);
    printf("S   M   T   W   T   F   S   ");
    y++;
    nod = getNumberOfDays(mon,year);
    day = getDayNumber(d,mon,year);
    switch(day){ //locates the starting day in calender
        case 0 :
            x=x;
            cnt=1;
            break;
        case 1 :
            x=x+4;
            cnt=2;
            break;
        case 2 :
            x=x+8;
            cnt=3;
            break;
        case 3 :
            x=x+12;
            cnt=4;
            break;
        case 4 :
            x=x+16;
            cnt=5;
            break;
        case 5 :
            x=x+20;
            cnt=6;
            break;
        case 6 :
            x=x+24;
            cnt=7;
            break;
        default :
            printf("INVALID DATA FROM THE getOddNumber()MODULE");
            return;
    }
    gotoxy(x,y);
    if(cnt == 1){
        SetColor(12);
    }
    if(checkNote(d,mon)==1){
            SetColorAndBackground(15,12);
    }
    printf("%02d",d);
    SetColorAndBackground(15,1);
    for(d=2;d<=nod;d++){
        if(cnt%7==0){
            y++;
            cnt=0;
            x=x1-4;
        }
        x = x+4;
        cnt++;
        gotoxy(x,y);
        if(cnt==1){
            SetColor(12);
        }else{
            ClearColor();
        }
        if(checkNote(d,mon)==1){
            SetColorAndBackground(15,12);
        }
        printf("%02d",d);
        SetColorAndBackground(15,1);
    }
    gotoxy(8, y+2);
    SetColor(14);
    printf("Press 'n'  to Next, Press 'p' to Previous and 'q' to Quit");
    gotoxy(8,y+3);
    printf("Red Background indicates the NOTE, Press 's' to see note: ");
    ClearColor();
}
