#LINKED LISTS REPOSITORY
Root folder.
________________________________________________________________________________________________
Question 0:
Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 0-print_list.c

________________________________________________________________________________________________
Question 1:
Write a function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 1-list_len.c

________________________________________________________________________________________________
Question 2:
Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 2-add_node.c

________________________________________________________________________________________________
Question 3:
Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 3-add_node_end.c

________________________________________________________________________________________________
Question 4:
Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 4-free_list.c

________________________________________________________________________________________________
Question 5:
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

    You are allowed to use the printf function


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 100-first.c

________________________________________________________________________________________________
Question 6:
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

    You are only allowed to use the printf function
    You are not allowed to use interrupts
    Your program will be compiled using nasm and gcc:
julien@ubuntu:~/$ nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
julien@ubuntu:~/$ ./hello 
Hello, Holberton
julien@ubuntu:~/$ 

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 101-hello_holberton.asm
________________________________________________________________________________________________

