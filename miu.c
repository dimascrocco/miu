/**
 * MU-puzzle Game
 *
 * @author: dimas.crocco
 */

#include <stdio.h>
#include <stdlib.h>

int youCan = 1;
char option;

void main() {

	printf("MIU-System Game\n");

        while(youCan) {
                system("cls"); system("clear"); // cros platform =]
                printf("1. Mxi   -> Mxiu\n");
                printf("2. Mx    -> Mxx\n");
                printf("3. Mxiii -> Mxu\n");
		printf("4. MxUU  -> Mx\n");
		printf("0. exit\n");
                printf(">> ");
                scanf(" %c", &option);
                //option = getch();

                switch (option) {
                        case '1':
                                printf("alow\n");
                                break;
                        case '2':
                                printf("blah\n");
                                break;
                        case '3':
                                printf("bye bye...\n");
                                exit(0);
                }

        }
	
}
