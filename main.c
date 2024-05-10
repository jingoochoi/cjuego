#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//my infos
int life = 30;//life of me
int att1 = 3;//attack point of me
int dfc1 = 1;//defence point of me
//enemy info
int juck = 35;
int att2 = 3;
int dfc2 = 2;
int game(void) {
    int rndm = rand() % 2;

    if (rndm == 1) {
        printf("normal attack\n");
        juck -= (att1 - dfc2);
    }
    else {
        printf("critical attack\n");
        juck -= ((att1 * 2) - dfc2);
    }

    printf("enemy life: %d\n", juck);

    if (juck <= 0) {
        printf("you win!\n");
        return 0;
    }

    life -= (att2 - dfc1);
    printf("my life: %d\n", life);

    if (life <= 0) {
        printf("you lose.. T.T\n");
        return 1;
    }

    printf("\n");
    return game();
}

int main(void) {
    srand(time(NULL));
	return game();
}