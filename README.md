# Lab work xv6 Syscalls
   Authors: <mark>[Danyil Hutsul](https://github.com/DanHutsul)</mark>
## Usage
  `sysinfo` - Get number of processes and opened files
  
  `info` - Get current date
  
  To get information about every syscall:
  1. Navigate and open **syscall.c**
  2. Uncomment two sections of code. Each section is located between `// Changes start` and `// Changes end`

## Explanations

### `syscall.h`
Defines syscalls. We add additional syscalls and increase their respective number

### `syscall.c`
We need to add a pointer to the system call `[SYS_NAME] sys_name`

Also need to a function prototype `extern type sys_name(void)`

### `usys.S`
We add `SYSCALL(name)` to allow programs to use our syscall

### `user.h`
Declare a function that will be mapped to the system call `type name(void)`

### `Makefile`
Add new program to program list below `UPROGS=\` and `EXTRA=\`

### `file.c`
I added a `sys_openfiles` function to iterate through file table and check whether the file is opened. If opened - the counter goes up

### `proc.c`
Similarly to before I added `sys_numproc` function to iterate through process table and check whether the process is unused. If not - the counter goes up
