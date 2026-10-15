# libft

> My own C standard library, reimplemented from scratch (42 Madrid).

## What it does
Re-implements libc functions (`ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_calloc`, `ft_itoa`…), extra string helpers and a singly linked list API (`ft_lstnew`, `ft_lstmap`… as bonus). It is the base library reused by my later C projects (pipex, push_swap, miniRT).

## What I learned
- Manual memory management and edge cases of libc functions
- Building static libraries with `ar` and Makefiles

## Tech stack
C, Make

## Build & run
```bash
make        # builds libft.a
make bonus  # adds linked-list functions
make clean / fclean / re
```

## Structure
One `ft_*.c` file per function, `libft.h` header, `*_bonus.c` for lists.

---
*Built at 42 Madrid by jgomez-d (Jorge Gomez De Oliveira).*
