#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*
    int output = 0;
    int i = 0;
    char next = '\0';
    while (i < strlen(argv[1])) {
        if (i == strlen(argv[1])-1) {
            next = argv[1][0];
        } else {
            next = argv[1][i+1];
        }
        if (argv[1][i] ==  next) {
            output += argv[1][i] - '0';
        }
        i++;
    }
    printf("%d\n", output);
    return output;
    */
    //Part 2
    int output = 0;
    int i = 0;
    int next = 0;
    while (i < strlen(argv[1])) {
        next = (i+(strlen(argv[1])/2)) % strlen(argv[1]);
        if (argv[1][i] == argv[1][next]) {
            output += argv[1][i] - '0';
        }
        i++;
    }
    printf("%d\n", output);
    return output;
}
