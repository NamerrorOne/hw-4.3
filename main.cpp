#include <stdio.h>

main() {
	int arr[100], n, iterations;
	printf("how many digitals in array?\n");
	scanf("%i", &n);
	bool flag = true;
	
	for(int i=0; i<n; i++) {
		printf("digital number %i: " , i+1);
		scanf("%i", &arr[i]);
	}
	printf("Unsorterred array:  \n\n");
		for(int i=0; i<n; i++) {
		printf("%3i", arr[i]);
	}
	printf("\n\n");
	while(flag) {
		flag = false;
			for(int i=0; i<n-1; i++) {
			if(arr[i] > arr[i+1]) {
				flag = true;
				int temp;
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		iterations++;
	}
		printf("sorterred array:  \n\n");
		for(int i=0; i<n; i++) {
		printf("%3i", arr[i]);
	}
	printf("\n iterations: %i", iterations);
	
}
