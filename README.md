# holbertonschool-printf
proyect #1 - PRINTF

Members : Vonzell Carson | Alexandra Guadalupe | Emanuel Mendez

#1. Education is when you read fine print. Experience is what you get if you don't.

Conversion specifiers and their meanings are:
- d, i: The int argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires  fewer  digits,  it  is padded  on  the  left  with zeros.  The default precision is 1. When 0 is printed with an explicit precision 0, the  output  is empty.

- s: If  no  l modifier is present: the const char * argument is expected to be a pointer to an array of character  type  (pointer to a string).  Characters from the array are written up to (but not including) a terminating null byte ('\0'); if  a  precision is  specified,  no  more than the number specified are written.
If a precision is given, no null byte need be present;  if  the precision  is not specified, or is greater than the size of the array, the array must contain a terminating null byte.

- c : If no l modifier is present, the int argument is  converted  to an  unsigned  char, and the resulting character is written.  If an l modifier is present, the wint_t (wide character)  argument is  converted  to  a  multibyte  sequence by a call to the wcr‐ tomb(3) function, with a conversion state starting in the  initial state, and the resulting multibyte string is written.

- % : '%' is written.  No argument is converted.  The complete  conversion specification is '%%'.

