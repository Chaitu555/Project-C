ABC.exe: main.o big3.o fact.o reverse.o sum.o palindrome.o sort.o
	gcc -o ABC.exe main.o big3.o fact.o reverse.o sum.o palindrome.o sort.o

main.o: main.c
	gcc -c main.c -o main.o

big3.o: big3.c
	gcc -c big3.c -o big3.o

fact.o: fact.c
	gcc -c fact.c -o fact.o

reverse.o: reverse.c
	gcc -c reverse.c -o reverse.o

sum.o: sum.c
	gcc -c sum.c -o sum.o

palindrome.o: palindrome.c
	gcc -c palindrome.c -o palindrome.o

sort.o: sort.c
	gcc -c sort.c -o sort.o

clean:
	rm -f *.o ABC.exe

