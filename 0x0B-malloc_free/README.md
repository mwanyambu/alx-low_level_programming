1 0. Float like a butterfly, sting like a bee                                                                                                                           2 mandatory
  3 Write a function that creates an array of chars, and initializes it with a specific char.
  4
  5 Prototype: char *create_array(unsigned int size, char c);
  6 Returns NULL if size = 0
  7 Returns a pointer to the array, or NULL if it fails
  8 1. The woman who has no imagination has no wings
  9 mandatory
 10 Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 11
 12 Prototype: char *_strdup(char *str);
 13 The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed 14 Returns NULL if str = NULL
 15 On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 16 FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
 17 2. He who is not courageous enough to take risks will accomplish nothing in life
 18 mandatory
 19 Write a function that concatenates two strings.
 20
 21 Prototype: char *str_concat(char *s1, char *s2);
 22 The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
 23 if NULL is passed, treat it as an empty string
 24 The function should return NULL on failure
 25
 26 3. If you even dream of beating me you'd better wake up and apologize
 27 mandatory
 28 Write a function that returns a pointer to a 2 dimensional array of integers.
 29
 30 Prototype: int **alloc_grid(int width, int height);
 31 Each element of the grid should be initialized to 0
 32 The function should return NULL on failure
 33 If width or height is 0 or negative, return NULL
 34
 35 4. It's not bragging if you can back it up
 36 mandatory
 37 Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
 38
 39 Prototype: void free_grid(int **grid, int height);
 40 Note that we will compile with your alloc_grid.c file. Make sure it compiles.
 41
 42 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
 43 #advanced
 44 Write a function that concatenates all the arguments of your program.
 45
 46 Prototype: char *argstostr(int ac, char **av);
 47 Returns NULL if ac == 0 or av == NULL
 48 Returns a pointer to a new string, or NULL if it fails
 49 Each argument should be followed by a \n in the new string
