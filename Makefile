# Activity 5

CC=gcc -std=c99

all: twos_comp

twos_comp: test_c.c binary_convert.c
	${CC} -o twos_comp test_c.c binary_convert.c

clean:
	rm -f twos_comp
