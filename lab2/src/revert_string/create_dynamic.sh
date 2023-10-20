gcc -Wall -fPIC -c revert_string.c
gcc -shared -o dyn_lib_reverse.so -Wl,-soname,dyn_lib_reverse.so revert_string.o
gcc -Wall -c main.c
gcc -o dl_rs main.o -L -l dyn_lib_reverse.so 
