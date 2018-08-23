#include "binsearch.h"

int binsearch(int highbound, int lowbound, int SortedArray[], int n){
	
	int middle = (highbound + lowbound)/2;
	
	if(SortedArray[middle] == n){
		return middle;
	}
	else if(highbound == lowbound){
		return -1;
	}
	else if(SortedArray[middle] > n){
		return binsearch(middle, lowbound, SortedArray, n);
	}
	else if(SortedArray[middle] < n){
		return binsearch(highbound, middle+1, SortedArray, n);
	}

	printf("binsearch: no conditions met\n");
	return 2;

}
