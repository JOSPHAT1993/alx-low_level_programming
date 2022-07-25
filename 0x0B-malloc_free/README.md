#README FILE FOR MEMORY ALLOCATION AND FREE DIRECTORY
This is is a file for Malloc/Free Repository.
Below is the list of questions and answers provided in the repository.
_____________________________________________________________________________________________
Question 0:
0. Float like a butterfly, sting like a bee
mandatory

Write a function that creates an array of chars, and initializes it with a specific char.

    Prototype: char *create_array(unsigned int size, char c);
    Returns NULL if size = 0
    Returns a pointer to the array, or NULL if it fails

______________________________________________________________________________________________
Question 1:
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    Prototype: char *_strdup(char *str);
    The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    Returns NULL if str = NULL
    On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 1-strdup.c

______________________________________________________________________________________________
Question 2:
Write a function that concatenates two strings.

    Prototype: char *str_concat(char *s1, char *s2);
    The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
    if NULL is passed, treat it as an empty string
    The function should return NULL on failure



Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 2-str_concat.c
_____________________________________________________________________________________________
Question 3:
Write a function that returns a pointer to a 2 dimensional array of integers.

    Prototype: int **alloc_grid(int width, int height);
    Each element of the grid should be initialized to 0
    The function should return NULL on failure
    If width or height is 0 or negative, return NULL


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 3-alloc_grid.c
_____________________________________________________________________________________________

Question 4:
Write a function that frees a 2 dimensional grid previously created by your alloc grid function.

    Prototype: void free_grid(int **grid, int height);
    Note that we will compile with your alloc_grid.c file. Make sure it compiles.


    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 4-free_grid.c
_____________________________________________________________________________________________
