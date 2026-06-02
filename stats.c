/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief file with function implementations and execution
 *
 * @author Oleksandr Pysarchuk
 * @date 06.03.2026
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


	sort_array(test, SIZE);
	printf("Sorted array:\n");
	print_array(test,SIZE);

	print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, int array_size) {

	printf("Max value: %d\n", find_maximum(array, array_size));
	printf("Min value: %d\n", find_minimum(array, array_size));
	printf("Mean value: %f\n", find_mean(array, array_size));
	printf("Median value: %d\n", find_median(array, array_size));
}

void print_array(unsigned char* array, int array_size) {
	for (int i = 0; i < array_size; i++) {
		printf("%d\n", array[i]);
	}
}

int find_median(unsigned char* array, int array_size) {
	return (array[array_size / 2 - 1] + array[array_size / 2]) / 2;
}

float find_mean(unsigned char* array, int array_size) {
	int tmp = 0;
	for (int i = 0; i < array_size; i++) {
		tmp += array[i];			
	}

	return tmp / (float)array_size;
}

int find_maximum(unsigned char* array, int array_size) {
	unsigned char tmp = 0; 

	tmp = array[0];

	for (int i = 0; i < array_size; i++) {
		if (array[i] > tmp) {
			tmp = array[i];
		}
	}

	return tmp;
}

int find_minimum(unsigned char* array, int array_size) {
	unsigned char tmp = 0;

	tmp = array[0];

	for (int i = 0; i < array_size; i++) {
		if (array[i] < tmp) 
			tmp = array[i];
	}

	return tmp;
}

void sort_array(unsigned char* array, int array_size) {
	int tmp = 0;
	for (int i = 0; i < array_size - 1; i++) {
		for (int j = 0; j < array_size - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;	
			}
		}
	}
}
