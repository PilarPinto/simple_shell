# Simple Shell Project
Creating our version of a command line interpreter: shell.

![enter image description here](https://lh3.googleusercontent.com/BuM-_w8ugAH-PE3DHEU5866JZ3T888WrKipcQPzpcCBZt9xWSU1SZ5y94BMGoDwWrrSlFUp9MN4 "README")
- This repository includes our version of the Shell: simple Unix command interpreter, replicates the basic functionalities of the simple shell (sh), here we will apply the knowledge that we have acquired during the learning of the programming language C, works with the system call of the Kernel.
- This project is requested by Holberton School.

---------------

This version of super simple shell support the next built-in

| Command             | Definition                                                                                |
| ------------------- | ----------------------------------------------------------------------------------------- |
| exit            | Exit the shell with the command exit.                                          |
| env                 | Print the environment.                                                                    |

This project works in two different modes, the interactive mode and the non interactive mode.

When you use the interactive mode is when you compile with the gcc
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
and then create and executable file that can use to emulate the simple shell like this


```sh
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

## Installation

Use the [git clone](https://github.com/PilarPinto/simple_shell.git) to install this super simple shell.

```bash
git clone https://github.com/PilarPinto/simple_shell.git
```
### Examples

```sh
$ /bin/ls -l
drwxrwxr-x 1 vagrant vagrant 279 Nov 20 03:14 README.md
drwxrwxr-x 2 vagrant vagrant 165 Nov 20 23:46 arguments.c
```

```sh
$ /bin/pwd
/home/vagrant/test_my_own_shell
```

```sh
$ hhhhh
Does not execute, write valid command: No such file or directory
```


## Contributing
You can contribute with this shell adding some buil-int functions, feel free to make pull request.

## Autors
- [Lady Marcela Sánchez Moreno](https://github.com/marcewp15)
- [Pilar Andrea Pinto](https://github.com/PilarPinto)

