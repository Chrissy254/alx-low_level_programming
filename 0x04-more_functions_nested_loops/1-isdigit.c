0x04. C - More functions, more nested loops
 README.md


# More functions, more nested loops


Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about nested loops in **C language**.


## Technologies

* C files are compiled using `gcc 4.8.4`

* C files are written according to the C90 standard

* Tested on Ubuntu 14.04 LTS


## Files

All of the following files are programs written in C:


| Filename | Description |

| -------- | ----------- |

| `0-isupper.c` | Checs for uppercase character |

| `1-isdigit.c` | Checks for a digit (`0` through `9`) |

| `2-mul.c` | Multiplies two integers |

| `3-print_numbers.c` | Prints the numbers, from `0` to `9` |

| `4-print_most_numbers.c` | Prints the numbers, from `0` to `9`, except `2` and `4` |

| `5-more_numbers.c` | Prints 10 times the numbers, from `0` to `14` |

| `6-print_line.c` | Draws a straight line in the terminal |

| `7-print_diagonal.c` | Draws a diagonal line in the terminal |

| `8-print_square.c` | Prints a sqaure |

| `9-fizz_buzz.c` | Prints Fizz-Buzz test |

| `10-print_triangle.c` | Prints a triangle |

| `100-prime_factor.c` | Finds and prints the largest prime factor of the number `612852475143` |

| `101-print_number.c` | Prints an integer |



0-isupper.c


#include "main.h"


/**

 * _isupper - uppercase letters

 * @c: char to check

 *

 * Return: 0 or 1

 */


int _isupper(int c)

{

        if (c >= 'A' && c <= 'Z')

                return (1);

        else

                return (0);

}



0-main.c

#include "main.h"

#include <stdio.h>


/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{

    char c;


    c = 'A';

    printf("%c: %d\n", c, _isupper(c));

    c = 'a';

    printf("%c: %d\n", c, _isupper(c));

    return (0);

}



1-isdigit.c


#include "main.h"


/**

 * _isdigit - check if numbers are 0 - 9

 * @c: char to be checked

 *

 * Return: 0 or 1

 */


int _isdigit(int c)

{

        if (c >= '0' && c <= '9')

                return (1);

        else

                return (0);

}
