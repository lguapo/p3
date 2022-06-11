#remove(rm) recursivo ´forçado(-rf) todo/qualquer(*) extensão do arq(.o)
rm -rf *.o
rm -rf *.exe
gcc -c biblioteca.c
gcc -c mainp3.c
gcc -o mainp3.exe mainp3.o biblioteca.o
./mainp3.exe