#include <stdio.h>
#include <conio.h>

int main()
{
	char* gang[5] = {
		"Spanky",
		"Buckwheat",
		"Alfalfa",
		"Darla",
		"Pete the Pup"
	};
	int x;

	for (x = 0; x < 5; x++) {
		printf("%s\n", gang[x]);
	}
	
	_getch();
	return(0);
}