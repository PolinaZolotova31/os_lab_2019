gcc -Wall -c revert_string.c
gcc -Wall -c main.c
ar cr st_lib_reverse.a revert_string.o
ranlib st_lib_reverse.a
gcc -o sl_rs main.o -L -l st_lib_reverse.a