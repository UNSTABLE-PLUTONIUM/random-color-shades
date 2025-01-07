#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int r = rand() % 255;
	int g = rand() % 255;
	int b = rand() % 255;

	while (r<255 && g<255 && b<255) {
		printf("\033[48;2;%d;%d;%dmrgb(%d, %d, %d)\033[0m\n", r, g, b, r, g, b);

		r += 5;
		g += 5;
		b += 5;
	}
}
