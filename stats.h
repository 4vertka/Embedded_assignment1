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
 * @file stats.h
 * @brief function header file
 *
 * Function header file for stats.c file 
 *
 * @author Pysarchuk
 * @date 06.03.2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief Print statistics about array 
 * This function takes array pointer and array size as parameters
 * and prints max, min, mean and median value of an array.
 *
 * @param pointer to an array that will be used to print statistics about
 * @param array size, because array is statically allocated
 *
 * @return function return nothing, all statistics is printed to console
 */
void print_statistics(unsigned char* array, int array_size);

/**
 * @brief Print all array elements to console
 * This function prints each element of array in newline
 *
 * @param pointer to an array that will be printed
 * @param array size, because array is statically allocated
 *
 * @return return nothing, all array elements are printed to console
 */
void print_array(unsigned char* array, int array_size);

/**
 * @brief Find the median value of an array
 * This function takes array as an input and find its median value
 *
 * @param pointer to an array, where function will look for median value
 * @param array size, because array is statically allocated
 *
 * @return return integer value of an array median value
 */
int find_median(unsigned char* array, int array_size);

/**
 * @brief Find mean valie of an array 
 * This function takes array as input and find its mean value
 *
 * @param pointer to an array, where function will calculate mean value
 * @param array size, because array is statically allocated
 *
 * @return mean calculation result as floating point value
 */

float find_mean(unsigned char* array, int array_size);

/**
 * @brief Find maximum element of given array
 * This function takes array as parameter and returns its maximum value
 *
 * @param pointer to an array, where function will look for maximum value
 * @param array size, because array is statically allocated
 *
 * @return maximum element of an array as integer value
 */

int find_maximum(unsigned char* array, int array_size);

/**
 * @brief Find minimum element of given array
 * This function takes array as parameter and returns its minimum value
 *
 * @param pointer to an array, where function will look for minimum value
 * @param array size, because array is statically allocated
 *
 * @return minimum element of an array as integer value
 */

int find_minimum(unsigned char* array, int array_size);

/**
 * @brief Sort the given array in descending order
 * This function takes array as input and sort its elements in descending order 
 *
 * @param pointer to an array, which will be sorted
 * @param array size, because array is statically allocated
 *
 * @return nothing is returned because functio task is to change the array values order
 */

void sort_array(unsigned char* array, int array_size);

#endif /* __STATS_H__ */
