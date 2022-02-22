# libft-
Implementation of some C standard library functions
About
This is my very first individual project as a student at school 21. The goal is to recode several functions of the C standard library to gain a deeper understanding of data structures and underlying algorithms. It contains a lot of general purpose functions that my future C projects will rely on.

List of functions
Libc - some of the standard C functions, Additional functions - set of functions that are either not in the standart library, or that are part of it but in a different form, Bonus Functions - additional funcs to manipulate lists.

Libc functions	Additional functions	Bonus Functions
isalpha	ft_substr	ft_lstnew
isdigit	ft_strjoin	ft_lstadd_front
isalnum	ft_strtrim	ft_lstsize
isascii	ft_split	ft_lstlast
isprint	ft_itoa	ft_lstadd_back
strlen	ft_strmapi	ft_lstdelone
memset	ft_striteri	ft_lstclear
bzero	ft_putchar_fd	ft_lstiter
memcpy	ft_putstr_fd	ft_lstmap
memmove	ft_putendl_fd	
strlcpy	ft_putnbr_fd	
strlcat		
toupper		
tolower		
strchr		
strrchr		
strncmp		
memchr		
memcmp		
strnstr		
atoi		
calloc		
strdup		
How to use the library
To create the library run the following commands:

git clone https://github.com/MeSugar/libft.git
cd libft
make
libft.a along with a bunch of .o files (you can remove them by running 'make clean') have to be created at the root of your repository

I added example.c file to test ft_strlen, ft_putchar_fd and ft_toupper functions. To use it run:

gcc example.c -L. -lft -o example
./example
