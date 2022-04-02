#include "calender.h"
void gb(int mon,int ye)
{
   int n_month=mon,n_yr=ye,ch;
    enteryear:
    while(1)
    {

        if(n_yr<1945)
        {
            //If year less than 1945
            printf("\n\t Please enter year above 1945\n");
            continue;
        }
        else
        {
            //If year greater than equal to 1945
            calendar(n_yr,n_month);
        }
        while(1)
        {
        gotoxy(20,20);printf("(*) Use LEFT, RIGHT, UP and DOWN arrow.");
        gotoxy(20,22);printf("(*) Press P to go to particular year and month.");
        gotoxy(20,24);printf("(*) Press ESC to Exit.");
        ch=getkey();
        switch(ch)
        {
        case 5: //-------- DOWN ARROW -----------
               //Increasing month
                if(n_month==12)
                {
                    //Jump to next year if month is december
                     n_month=1;
                     n_yr++;
                }
                else
                {
                    n_month++;
                }
                calendar(n_yr,n_month);
                break;
        case 6: //-------- RIGHT ARROW ----------
            //Increasing Year
                n_yr++;
                calendar(n_yr,n_month);
                break;
        case 7: //------- UP ARROW -------------
            // Decreasing Month
                if(n_month==1)
                {
                    // Jump to previous year if month is january
                    n_yr--;
                    n_month=12;
                }
                else
                    n_month--;
                calendar(n_yr,n_month);
                break;
        case 8: //-------- LEFT ARROW ----------
            //Decreasing year
                if(n_yr==1945)
                {
                    //If year is 1945 and we click left arrow than
                  gotoxy(15,2);printf("Year below 1945 not available");
                }
                else
                {
                    n_yr--;
                    calendar(n_yr,n_month);
                }

                break;
        case 9: //--------- ESC KEY ------------
            //Exit program
                system("cls");
                gotoxy(50,14);printf("Exiting program.\n\n\n\n\n");
                exit(0);
        case 10://---------- p KEY ------------
            //Go to particular year and month
                system("cls");
                goto enteryear;
        }
        }
        break;

    }
    getch();
}
