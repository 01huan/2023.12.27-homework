#include <stdio.h>


int in(char a, char ans[4]) {
    for (int x=0; x<4; x++) {
        if (a == ans[x]) {
            return 1;
        }
    }
    return 0;
}


int main() {
    char ans[5], guess[3][5];
    scanf("%s", &ans);
    for (int i=0; i<3; i++) {
        scanf("%s", guess[i]);
    }
    for (int i=0; i<3; i++) {
    int A=0, B=0;
        for (int j=0; j<4; j++) {
            char test = guess[i][j];
            if (in(test, ans) == 1) {
                B++;
                if (test == ans[j]) {
                    A++;
                    B--;
                }
            }
        }
        printf("%dA%dB\n", A, B);
    }
}