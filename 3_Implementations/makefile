all: pd

pdm:main.o calendar.o
	gcc -Wall -o pd main.o calendar.o

main.o:main.c
	gcc -c -Wall main.c

calendarmanagement.o:calendar.c
	gcc -c -Wall calendar.c
