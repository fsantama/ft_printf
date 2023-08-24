# ft_printf Project README

## Table of Contents
- [General Instructions](#general-instructions)
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)
- [Delivery and Evaluation](#delivery-and-evaluation)

---

## General Instructions

- This project must be written in C.
- Follow the Norm when writing your project. Additional files or functions are included in the Norm's verification, and any norm error will result in a score of 0.
- Your functions must not end unexpectedly (segfault, bus error, double free, etc.), nor exhibit undefined behavior.
- Properly release all heap-allocated memory. Memory leaks are not allowed.
- If required, provide a Makefile that compiles your source files to the required output with the flags -Wall, -Werror, and -Wextra. Your Makefile should not relink.
- Your Makefile should include at least the norms $(NAME), all, clean, fclean, and re.
- For bonus points, create a bonus rule in your Makefile and include all headers, libraries, or functions that are prohibited in the main part of the project. Bonus tasks are evaluated separately from the mandatory part.
- If your project allows the use of the libft, create a directory named "libft" and copy its source and associated Makefile there. Your project's Makefile should first compile the libft library using its Makefile and then compile your project.
- While not mandatory, it's recommended to create test programs for your project to ensure its correctness. These test programs won't be submitted or evaluated, but they can help verify your program's functionality during your and your peers' evaluations.

---

## Mandatory Part

**Project Name:** libftprintf.a

**Files to Submit:** Makefile, *.h, */*.h, *.c, */*.c

**Required Makefile Rules:** NAME, all, clean, fclean, re

**Authorized Functions:** malloc, free, write, va_start, va_arg, va_copy, va_end

**Use libft:** Yes

**Description:** Develop a library that contains the function ft_printf(), mimicking the behavior of the original printf() function from libc. You need to reprogram the printf() function. The prototype of ft_printf() is `int ft_printf(char const *, ...);`.

Requirements:

- Do not implement the buffer management of the original printf().
- Implement the following conversions: cspdiuxX %
- Compare the behavior of your function with the original printf().
- Use the `ar` command to create your library (do not use libtool).
- Your libftprintf.a file should be created in the root of your repository.

---

## Bonus Part

The bonus part is not mandatory. Some of the bonus tasks include:

- Handling various combinations of flags like '-0.' and minimum field width under all possible conversions.
- Handling all the following flags: '# +'

If you choose to complete the bonus part, plan for the implementation of these extra features from the beginning to avoid issues later. The bonus tasks will only be evaluated if the mandatory part is completed perfectly.

---

## Delivery and Evaluation

Submit your project in your assigned Git repository. Only the content in your Git repository will be evaluated. Double-check your filenames for correctness.

Upon successful completion of this project, you can include the ft_printf() function in your libft, enabling you to use it in future C projects.