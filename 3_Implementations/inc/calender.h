#ifndef CALENDER_H_INCLUDED
#define CALENDER_H_INCLUDED
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int getkey();
void display(int,int,int,int[]);
void calendar(int,int);
struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Remainder{
    int dd;
    int mm;
    char note[50];
};
struct Remainder R;
char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
char *week[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
void gb(int mon,int ye);
COORD xy = {0, 0};


#endif // CALENDER_H_INCLUDED
