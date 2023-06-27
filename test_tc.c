/*
 * Activity 5
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "binary_convert.h"

void task1();
void task2();
void task3();

int main() {
    // Task 1: See TODO in helper function
    task1();

    // Task 2: Uncomment to run this task code, see TODO in helper function
    task2();

    // Task 3: UNCOMMENT THIS ONLY WHEN READY TO WORK ON THIS PART!
    task3();    
}

/* 
 * Tests out the representation of signed short integers, printing
 * in decimal, hex, and binary, and does similarly for unsigned shorts
 */
void task1() {
    // some limits: it's best to see what our mchine will give us
    printf("short is %zu bytes wide\n", sizeof(short));
    printf("min value of a short is: %hd\n", SHRT_MIN);
    printf("max value of a short is: %hd\n", SHRT_MAX);
	
    ////////////////  two's complement values
    printf("\nA few two's complement values\n");
	
    short tmp = -32767;
	
    char * bin_str;
    bin_str = short_to_bin_str(tmp);
    printf("%hd\t%04hx\t%s\n", tmp, tmp, bin_str);
    free(bin_str);

    tmp = SHRT_MIN;
    bin_str = short_to_bin_str(tmp); 
    printf("%hd\t%04hx\t%s\n", tmp, tmp, bin_str);
    free(bin_str);
	
    // TODO: Try some other values here


    ////////////////  unsigned integer values
    printf("\nA few unsigned short integer values\n");

    unsigned short utmp;

    // TODO: try some values for utmp, printing decimal and binary

}

/* 
 * Tests out what happens when we cast from a smaller integer type to a larger
 * one, from a larger to a smaller where both are signed or unsigned, and what
 * happens when we cast between signed and unsigned.
 */
void task2() {
	// TODO: In addition to the TODOs listed below, try varying the values of a, b, v, and uv

	// Convert from smaller type to larger type
	// TODO: add to the print statements the binary representations
	short a = 2023;
	int b;
	b = (int) a;

	printf("Converting from: Decimal: a = %hd   Binary: \n", a);
	printf("Converting to  : Decimal: b = %d    Binary: \n", b);

	// Convert from larger to smaller
	// TODO: add to the print statements the binary representation
	b = 80000;
	a = (short) b;

	printf("Converting from: Decimal: b = %d    Binary: \n", b);
	printf("Converting to  : Decimal: a = %hd   Binary: \n", a);

	// Convert from signed short to unsigned short
	// TODO: Add to the print statement the binary values of v and uv
	short int v = -12345;
	unsigned short uv = (unsigned short) v;
	printf("v = %hd, uv = %hu\n", v, uv);
}


/* 
 * Prints a table negative and positive values within the char data type
 */
void task3() {
	signed char i;
	char * bin;   

	printf("decimal\thex\tbinary\n");

	for (i=-128; i<=127; i++) {	
		bin = char_to_bin_str(i);
		printf("%hhd\t%02hhx\t%s\n", i, i, bin);
		free(bin);
	}
}
