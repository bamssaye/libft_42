# libft.a - Your Own C Library

## Description
`libft.a` is a custom C library created as part of your curriculum. It contains a collection of functions that replicate the behavior of standard C library functions. All functions have the `ft_` prefix, and they are designed to be used as a useful tool for your programming assignments and projects.

## Table of Contents
- [Technical Considerations](#technical-considerations)
- [Part 1 - Libc Functions](#part-1-libc-functions)
- [Part 2 - Additional Functions](#part-2-additional-functions)
- [Bonus Part - Linked List Functions](#bonus-part-linked-list-functions)

## Technical Considerations
- Global variables are not allowed.
- Helper functions should be defined as static functions to limit their scope to the appropriate file.
- All source files should be placed at the root of your repository.
- Unused files should not be included.
- All `.c` files must compile with the flags `-Wall -Wextra -Werror`.
- The `ar` command should be used to create the library (`libft.a`).
- The library should be created at the root of your repository.

## Part 1 - Libc Functions
In this part, you need to recreate a set of functions from the standard C library (`libc`) with names prefixed by `ft_`. These functions must have the same behavior as their standard counterparts.

Here are the functions to implement:
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

## Part 2 - Additional Functions
In this part, you need to implement additional functions that are either not in the standard C library or are presented in a different form.

Here are the additional functions to implement:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Bonus Part - Linked List Functions
If you have completed the mandatory part perfectly, you can proceed with the bonus part. This part involves manipulating linked lists using the provided `t_list` structure.

The bonus functions to implement are:
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter

Make sure to add the `t_list` structure declaration to your `libft.h` file and include a `make bonus` rule in your Makefile to build the bonus functions along with the mandatory ones.

**Note:** The bonus part will only be assessed if the mandatory part is perfect. If any mandatory requirements are not met, the bonus part will not be evaluated.

## Author
Your Name

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
