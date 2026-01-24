# CSH

<b>CSH</b> is an Open-source stack-based programming language, written in C. This was a practice project.
Its features include:

- A stack based memory, consisting of 1024 elements.
- Supports Integers (Strings, floats, and booleans will be added later.)
- Has 11 commands.

### Get Started

#### Installation

To get started, you can either:

1. Compile the code.
2. Download already compiled code.

##### Compiling the code

Clone the github repository.
```bash
git clone https://github.com/Subedara/CSH.git
```

then
```bash
cd CSH
cd code
```
###### Windows:
```bash
gcc csh.c -o csh.exe
csh.exe
```
###### Linux:
```bash
gcc csh.c -o csh
csh
```

##### Downloading already compiled code.

Clone the github repository.
```bash
git clone https://github.com/Subedara/CSH.git
```

then
```bash
cd CSH
cd program
```

###### Windows:
```bash
csh.exe
```
###### Linux:
```bash
csh
```

#### Launching Screen

After running the csh program, either on linux or windows, you will be greeted with this:

```
csh > 
```

##### Commands

###### PUSH

PUSH is used to push numbers into the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
```

###### POP

POP is used to pop the last number from the stack.

Usage:
```
csh > pop
POPPING VALUE FROM STACK.
```

NOTE: Nothing will happen if the stack is empty.

###### ADD

ADD is used to add the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9
PUSHING VALUE IN STACK.
csh > add 
ADDING NUMBERS.
```

###### SUBTRACT

SUBTRACT is used to subtract the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9
PUSHING VALUE IN STACK.
csh > subtract
SUBTRACTING NUMBER.
```

###### MULTIPLY

MULTIPLY is used to multiply the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9 
PUSHING VALUE IN STACK.
csh > multiply
MULTIPLYING NUMBER.
```

###### DIVIDE

DIVIDE is used to divide the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 5
PUSHING VALUE IN STACK.
csh > divide
DIVIDING NUMBER.
```

###### MOD

MOD is used to take the mod of the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 4
PUSHING VALUE IN STACK.
csh > mod
MODDING NUMBER.
```

###### XOR

XOR is used to take the XOR of the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9
PUSHING VALUE IN STACK.
csh > xor
XORING NUMBER.
```

###### AND

AND is used to take the AND of the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9
PUSHING VALUE IN STACK.
csh > and
ANDING NUMBER.
```

###### OR

OR is used to take the OR of the last 2 numbers from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > push 9
PUSHING VALUE IN STACK.
csh > or
ORING NUMBER.
```

###### NOT

NOT is used to take the NOT of the last number from the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > not
NOTING NUMBER.
```

###### SHOW

SHOW is used to show the integer that is on the top of the stack.

Usage:

```
csh > push 10
PUSHING VALUE IN STACK.
csh > show
TOP OF STACK = 10
```


### NOTES

- The Language is still in its early phase, so expect bugs.
- The Language does not support floats, strings, and other types. They will be added soon.
- Input is case-sensitive in this language. Meaning you will have to write `push`, `add`, `show`, not `PUSH`, `ADD`, `SHOW`.

### Contributions

Contributions are welcome! If you want to help improve this project, you can:

1) Report Bugs: Open an issue, describing what bug you are facing, steps to reproduce it, and expected output.
2) Feature Suggestions: Open an issue if you have and want to give an idea about any new command, memory, and other language features.
3) Submit Code:
   - Fork the repository.  
   - Create a new branch for your feature or fix:  
     ```bash
     git checkout -b feature-name
     ```
   - Make your changes and commit with clear messages.  
   - Push to your fork and open a pull request.

### LICENSE

This project is MIT Licensed. This is the [LICENSE](https://github.com/Subedara/CSH/blob/main/LICENSE).

### ROADMAP

- Support for floats, chars, and bools.
- Implementation for loops and conditions.
- Add custom file format.
- Improve error handling.

### Acknowledgements

This project was, initially, not supposed to be a stack-based programming language. It was supposed to be a bash type scripting language. It was also made when I was learning C programming language as a practice for making Terminal RPG.

### Contact

If you want to get in contact, you can email me on [abd2maqsood@gmail.com](mailto:abd2maqsood@gmail.com) or you can use my github [Subedara](https://github.com/Subedara).
