#include "binsearch.h"

int main() {
	int list[] = {0, 1, 2, 3, 3, 5, 6, 7, 8, 9, 11};
	int target;
	int index;

	printf("Enter a number to search for: ");
	scanf("%d", &target);
	index = binsearch(sizeof(list)/sizeof(list[0]) - 1, 0, list, target);

	if(index != -1){
		printf("The number is list[%d]\n", index);
		return 0;
	}
	else {
		printf("The number is not in the array\n");
		return -1;
	}
}
