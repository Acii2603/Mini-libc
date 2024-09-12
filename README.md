# 🛠️ Mini-libc Project

## 🚀 Objectives
- Gain insight into the **C standard library** and its core functionalities.
- Familiarize yourself with the **syscall interface** on Linux.
- Deepen your understanding of **string manipulation** and **memory management**.
- Explore how **low-level I/O operations** are supported by the standard C library.

---

## 📜 Project Overview
The **Mini-libc** project is a challenge to develop a **minimalistic version** of the **C standard library** for Linux systems. This mini-libc serves as a **replacement for system libc** (like **glibc**), providing essential operations for string handling, memory management, and file I/O.

### ✨ Key Features
- **Freestanding Design**: Implemented using direct **syscall** invocations for `x86_64` architecture. No external libraries used.
- **String Functions**: Implement `strcpy()`, `strcat()`, `strlen()`, and others from `<string.h>`.
- **Memory Management**: Build core memory functions such as `malloc()`, `free()`, `calloc()`, and `realloc()` from `<stdlib.h>`.
- **File I/O**: Handle file operations like `open()`, `close()`, `lseek()`, and `stat()` from `<unistd.h>`.
- **Time Functions**: Implement functions like `nanosleep()` and `sleep()` for time management.

---

## 📂 Directory Structure
- **`src/`**: Contains the core mini-libc codebase with placeholders (`TODOs`) for unimplemented functions.
- **`samples/`**: Contains example programs and use cases to demonstrate mini-libc in action.
- **`tests/`**: Automated testing scripts to evaluate and grade your implementation.

---

## 🔧 How to Build
To compile and build the mini-libc, follow these steps:

1. **Building the mini-libc**:
   ```bash
   cd src/
   make
