# Piscine Reloaded

A comprehensive review project containing various C programs, shell scripts, and fundamental exercises revisiting key concepts from the 42 C Piscine.

## 📌 Overview

**Piscine Reloaded** is a special project designed to reinforce and test the core programming foundations acquired during the 42 School Piscine. It covers a wide spectrum of exercises ranging from basic Unix shell commands and file manipulation to advanced C programming concepts like pointers, memory management, structures, and makefiles.

This repository serves as a structured collection of my solutions, strictly adhering to 42's rigorous quality standards.

---

## 🗂️ Project Structure & Contents

The repository is organized into individual exercises (`ex00` to `ex27`):

| Exercise | Description / Files | Key Concepts |
| :--- | :--- | :--- |
| **ex00** | `exo.tar` | Archive extraction and management |
| **ex01** | `z`] | Basic file creation and output |
| **ex02** | `clean` | Shell script for cleaning temporary/backup files |
| **ex03** | `find_sh.sh` | Find files with `.sh` extension |
| **ex04** | `MAC.sh` | Extract network MAC address using `ifconfig` and `awk` |
| **ex05** | `\?*$*MaRViN*$?\"` | Dealing with complex/special characters in filenames |
| **ex06 - ex08** | `ft_print_alphabet.c`, `ft_print_numbers.c`, `ft_is_negative.c` | Basic functions, conditions, and character printing |
| **ex09 - ex11** | `ft_ft.c`, `ft_swap.c`, `ft_div_mod.c` | Pointers, variable manipulation, and arithmetic |
| **ex12 - ex14** | Factorials (`ft_iterative_factorial.c`, `ft_recursive_factorial.c`), Square root (`ft_sqrt.c`) | Iteration, recursion, and mathematical algorithms |
| **ex15 - ex17** | `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c` | Strings and memory traversal |
| **ex18 - ex19** | `ft_print_params.c`, `ft_sort_params.c` | Command-line arguments handling and sorting |
| **ex20 - x21** | `ft_strdup.c`, `ft_range.c` | Dynamic memory allocation (`malloc`) |
| **ex22 - ex23** | Headers (`ft_abs.h`, `ft_point.h`) | Preprocessor macros and custom structures (`typedef struct`) |
| **ex24** | `Makefile` | Compilation automation rules (`all`, `clean`, `fclean`, `re`) |
| **ex25 - ex26** | `ft_foreach.c`, `ft_count_if.c` | Function pointers and advanced array processing |
| **ex27** | `Makefile`, `ft_display_file.c` | File descriptor reading, error handling, and compilation |

---

## ⚙️ Development Guidelines & Tooling

To ensure consistency and high-level software engineering practices, all C projects adhere strictly to the following standards:

```text
├── Compiler       : gcc (GNU Compiler Collection)
├── Flags          : -Wall -Wextra -Werror
├── Code Style     : 42 Norminette Rules
├── Environment    : Unix / Linux Shell
└── Text Editor    : Vim / Neovim / VS Code
