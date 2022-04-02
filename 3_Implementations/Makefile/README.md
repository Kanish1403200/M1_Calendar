all: calender

calender:main.o calender.o
	gcc -Wall -o c main.o calender.o

main.o:main.c
	gcc -c -Wall main.c

calender.o:calender.c
	gcc -c -Wall calender.c
