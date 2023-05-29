#!bash
gcc -c -o main.o main.c
gcc -c -o util.o util.c
gcc -o main main.o util.o
rm -rf *.o
./main