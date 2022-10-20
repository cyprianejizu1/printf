#include "main.h"

/**

 * driver - selector for type of fun.

 * @format: string.

 * Description: the function loops through the structs

 * selector[] ment of the struct.

 * Return: a pointer

 * structype selector - Struct

 */

int (*driver(char *format))(char *format, va_list)

{

int i;

structype selector[] = {

{"%c", printc},

{"%s", printstr},

{"%d", printint},

{"%i", printint},

{"%%", printpercent},

{"%x", printhex},

{"%X", printHEX},

{"%o", printocta},

{NULL, NULL}

