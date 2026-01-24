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

#### Simple Program

After running the csh program, either on linux or windows, you will be greeted will this:

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

