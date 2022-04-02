#include "calender.h>
void calendar(int n_yr,int n_month)
{
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int t_days=0,z,myear;
    system("cls");
    myear=n_yr-1; //Decreasing year by 1
            if(myear>=1945)
            {
                for(z=1945;z<=myear;z++)
                {
                    if(z%4==0) //If the year is a leap year than total no of days is 366
                        t_days=t_days+366;  //counting all the days till nyr - 1
                    else //If the year is a leap year than total no of days is 365
                        t_days=t_days+365;  //counting all the days till nyr - 1
                }
            }

            if(n_yr%4==0)
                days[1]=29; //changing value in days array from 28 to 29 since leap year
            else
                days[1]=28; //changing value in days array from 29 to 28 since not a leap year

            for(z=0;z<(n_month-1);z++)
            {

                t_days=t_days+days[z]; //Adding nmonth-1 days to tdays
            }

            t_days=t_days%7; //Finding the remainder of tdays so it can calculate the position to display
            display(n_yr,n_month,t_days,days); //Passing the value to display
}

