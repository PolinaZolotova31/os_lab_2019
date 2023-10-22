#include <unistd.h>
#include <stdio.h>

int main(){
    printf("Now we're running sequential_min_max in exec mode!\n");
    execlp("seqental_min_max", "seqental_min_max", 100, 1234, 10);

    return 0;
}