#include "calender.h"
void display(int n_yr,int n_month,int t_days,int days[])
{
    int i,j,pos;
    SetColor(12); //Color red
    gotoxy(56,6);printf("%s %d",month[n_month-1],n_yr); //Heading year and month dispalying
    for(i=0,pos=30;i<7;i++,pos+=10)
    {
         if(i==6)
            SetColor(9); //Sunday color blue
         else
            SetColor(10);  //Others day color green
        gotoxy(pos,8);printf("%s",week[i]);
    }

    SetColor(15); //setting the color white

   t_days++; //incrementing the tdays by 1
    if(t_days==0 || t_days==7)
        pos=91; //if tdays is 0 or 7, position is sunday
    if(t_days==1)
        pos=31; //if tdays is 1, position is monday
    if(t_days==2)
        pos=41;  //if tdays is 2, position is tuesday
    if(t_days==3)
        pos=51;  //if tdays is 3, position is wednesday
    if(t_days==4)
        pos=61;  //if tdays is 4, position is thursday
    if(t_days==5)
        pos=71;  //if tdays is 5, position is friday
    if(t_days==6)
        pos=81;  //if tdays is 6, position is saturday

    for(i=0,j=10;i<days[n_month-1];i++,pos+=10)
    {
        if(pos==91)
            SetColor(8); //Changing color to dark grey for sunday
        else
            SetColor(7); //Changing color to white for all days

        gotoxy(pos,j);printf("%d",i+1);
        if(pos==91)
        {
            pos=21; //Moving position to monday
            j++;  //Increasing j by 10 if position is sunday
        }
    }

    SetColor(5); //Changing color to purple

    //Drawing horizontal line
    for(i=22;i<102;i++)
    {
        gotoxy(i,4);printf("%c",196);
        gotoxy(i,17);printf("%c",196);
    }

    //Drawing all the corner of the rectangle
    gotoxy(21,4);printf("%c",218);
    gotoxy(102,4);printf("%c",191);
    gotoxy(21,17);printf("%c",192);
    gotoxy(102,17);printf("%c",217);

    //Drawing vertical line
    for(i=5;i<17;i++)
    {
        gotoxy(21,i);printf("%c",179);
        gotoxy(102,i);printf("%c",179);
    }

    SetColor(11); //Changing color to aqua

    //Drawing left and the right navigation symbol
    gotoxy(24,11);printf("%c",174);
    gotoxy(98,11);printf("%c",175);

}
