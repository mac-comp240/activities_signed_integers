/*
 * Data activity 4
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "binary_convert.h"

int main() {
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
	
	// TODO: (Task 1) Try some other values here
	// TODO: (Task 1) Try writing a loop to print all values from SHRT_MIN to SHRT_MAX


	////////////////  unsigned integer values
	printf("\nA few unsigned short integer values\n");

	unsigned short utmp;

	// TODO: (Task 1) you add some unsigned values here using this declared variable:
	
	// TODO: (Task 2) Uncomment the code below and try it
	// Convert from smaller type to larger type
	short a = 2023;

	// short int v = -12345;
	// unsigned short uv = (unsigned short) v;
	// printf("v = %hd, uv = %hu\n", v, uv);
	
	///////////////////////////////// Part 3- keep commented until you work on this later
	/* create the hexidecimal table for all 1-byte signed numbers 
	signed char i;
	char * bin;   

	/*  uncomment this section for part 3 
	printf("decimal\thex\tbinary\n");

    for (i=-64; i<=63; i++) {	
		bin = char_to_bin_str(i);
		printf("%hhd\t%02hhx\t%s\n", i, i, bin);
		free(bin);

	}
	*/
    
}
