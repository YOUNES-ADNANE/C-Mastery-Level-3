# 🚀 C Programming Mastery: Level 3 
## 🧠 The Deep Dive into Memory & System Calls

Welcome to the most critical stage of my C journey. In **Level 3**, I moved beyond the comfort of standard libraries like `stdio.h` and started communicating directly with the **Operating System Kernel**. This level focused on how data flows through memory addresses and how to manipulate it at a low level.

---

## 📑 Table of Contents
1. [Overview](#-overview)
2. [Chapter 1: Unix System Calls](#-chapter-1-unix-system-calls)
3. [Chapter 2: Memory Addresses & Pointers](#-chapter-2-memory-addresses--pointers)
4. [Chapter 3: String Manipulation via Pointers](#-chapter-3-string-manipulation-via-pointers)
5. [The "1337" Coding Standard](#-the-1337-coding-standard)
6. [Graduation Project: The String Engine](#-graduation-project-the-string-engine)
7. [Technical Skills Acquired](#-technical-skills-acquired)

---

## 🧐 Overview
In this level, I successfully implemented **16 low-level exercises**. The transition from `printf` to `write` and the shift from variables to pointers marked my transformation into a **Low-Level Programmer**. 

---

## 📁 Chapter 1: Unix System Calls (`write`, `read`, `open`)
I learned that in Unix-like systems, **"Everything is a file"**. I mastered the use of File Descriptors:
- **`0` (STDIN):** Reading input from the keyboard.
- **`1` (STDOUT):** Printing output to the terminal.
- **`2` (STDERR):** Handling error messages.

### Key Exercises:
*   **ex00 - Hello Write:** First time printing without `printf`.
*   **ex01 - File Creation:** Using `open()` with `O_CREAT` and `O_WRONLY` to generate `.txt` files.
*   **ex02 - Data Retrieval:** Reading content from files and buffers.
*   **ex05 - The Cloner:** Building a manual `cp` (copy) command that clones files byte by byte.

---

## 📍 Chapter 2: Memory Addresses & Pointers
This was the "Aha!" moment. I stopped seeing variables as just "names" and started seeing them as **hexadecimal locations** in the RAM.

### Concepts Mastered:
*   **The `&` Operator:** Extracting the memory address of any variable.
*   **The `*` Operator:** Dereferencing a pointer to modify the original value (Remote Control).
*   **Pointer to Pointer (`**ptr`):** Understanding multi-level indirection—the foundation of complex data structures.

### Key Exercises:
*   **ex08 - ft_swap:** Swapping two integers by passing their addresses, ensuring the change persists outside the function scope.
*   **ex11 - Double Pointers:** Navigating through addresses of addresses.

---

## 🧵 Chapter 3: String Manipulation via Pointers
Instead of using array brackets `[]`, I learned to traverse strings using **Pointer Arithmetic**.

*   **Pointer Increment (`ptr++`):** Moving through the memory one byte at a time.
*   **The Null Terminator (`\0`):** Understanding that every string must have an end-marker to prevent memory leaks and "Segmentation Faults".
*   **ex10 - Pointer Strlen:** Calculating length by finding the distance between the start and end pointers.

---

## 📏 The "1337" Coding Standard
Throughout this level, I strictly followed the **School 42/1337 Norm**:
- **No Global Variables:** Keeping the memory safe.
- **Modular Functions:** Each function performs exactly one task.
- **Top-Down Structure:** Helper functions are defined above the `main` for better compilation flow.
- **Code Clarity:** Using `Tabs` instead of spaces and maintaining a maximum of 25 lines per function.

---

## 🏆 Graduation Project: The String Engine (ex15)
The final project of Level 3 is a comprehensive tool that showcases everything I've learned.

**Features:**
1.  **Direct Read:** Takes user input using the `read()` system call.
2.  **Pointer Processing:** Manually reverses the string in-place without creating a copy.
3.  **Low-Level Output:** Prints the result using a custom `ft_putstr` function built on `write()`.
4.  **Memory Efficiency:** Uses a 1-byte buffer approach to minimize RAM usage during reversal.

---

## 🛠️ Technical Skills Acquired


| Skill | Description |
| :--- | :--- |
| **System Calls** | Proficiency in `write`, `read`, `open`, and `close`. |
| **Memory Logic** | Understanding Stack vs. Heap (Introduction). |
| **Data Redirection** | Redirecting input/output between files and terminals. |
| **Debugging** | Fixing `Segmentation Faults` by tracing pointer addresses. |
| **Professionalism** | Following industry-standard coding norms (1337/42). |

---

## ⏩ Road to Level 4: Dynamic Allocation
Level 3 is complete. I have mastered the static memory. Next, I will tackle **Dynamic Memory Allocation** using `malloc` and `free`, where I will learn how to request memory from the OS during runtime.

---
**"Code is like humor. When you have to explain it, it’s bad."**
*Developed and maintained by [YOUNESS](https://github.com)*