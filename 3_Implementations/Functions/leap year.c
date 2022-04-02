#include "calender.h"
int check_leapYear(int year){ //checks whether the year passed is leap year or not
    if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0))
       return 1;
    return 0;
}

void increase_month(int *mm,  int *yy){ //increase the month by one
    ++*mm;
    if(*mm > 12){
        ++*yy;
        *mm = *mm - 12;
    }
}

void decrease_month(int *mm,  int *yy){ //decrease the month by one
    --*mm;
    if(*mm < 1){
        --*yy;
        if(*yy<1600){
            printf("No record available");
            return;
        }
        *mm = *mm + 12;
    }
}
