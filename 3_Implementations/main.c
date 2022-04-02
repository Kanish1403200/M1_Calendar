#include "calender.h"
int main(){
    ClearConsoleToColors(15, 1);
    SetConsoleTitle("Calender Project - LEARNPROGRAMO");
    int choice;
    while(1){
        system("cls");
        printf("\t\t Learnprogramo - Programming made simple\n");
        printf("1. Find Out the Day\n");
        printf("2. Print all the day of month\n");
        printf("3. Add Note\n");
        printf("4. QUIT\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        system("cls");
        switch(choice){
            case 2:
                printf("Enter date (DD MM YYYY) : ");
                scanf("%d %d %d",&date.dd,&date.mm,&date.yy);
                printf("Day is : %s",getDay(date.dd,date.mm,date.yy));
                printf("\nPress any key to continue......");
                getch();
                break;
            case 1 :
                printf("Enter month and year (MM YYYY) : ");
                scanf("%d %d",&date.mm,&date.yy);
                system("cls");
                gb(date.mm,date.yy);

                break;
            case 3:
            	AddNote();
				break;


            case 4 :
                exit(0);
        }
    }
    return 0;
