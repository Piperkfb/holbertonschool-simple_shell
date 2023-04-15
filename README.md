## Simple Shell
<hr>
Shell is a program that provides a command-line interface for interacting with an operating system. It allows you to type commands that the computer will execute, and provides a way to navigate the file system, launch applications, and perform various other tasks.
<br />
<hr>
<b> Syntax </b>
<br />
The syntax for shell commands varies depending on the specific command and the shell being used. However, most shell commands follow a basic structure that includes the name of the command followed by one or more arguments.  
<br />
<hr>
<b> Built-ins  </b>
<br />
There are two built-ins programmed into the shell. 
<br />
<ul>
<li>env - The env command is a command that tells the shell program to display all of the environment variables with their values. It is a way to access those values through the shell.</li>
<br />
<li>exit - Terminates the current process and returns control to the operating system.</li>
</ul>
<br />
<hr>
<b> Files </b>
<br />
<ul>
<li>README.md: A list of current files and a brief explanation about this project.</li>
<li>header.h: This is pour header file.</li>
<li>hsh.c: Runs the shell process.</li>
<li>_getenv.c: Functions which are used to retrieve and copy environment variables.</li> 
<li>_getline.c: Puts input from user into the buffer line.</li>
<li>_which.c: Searches directories in path for commands.</li>
<li>built_exe.c: Executes the builtin functions.</li>
<li>builtins.c: Exits the shell.</li>
<li>freeing.c: Frees all possible malloc leaks at the end.</li>
<li>_child.c: Function for child process.</li>
<li>_prompt.c: Checks mode and prints prompt.</li> 
<li>_tokenization.c: Tokenizes a string.</li> 
<li>errors.c: Prints errors based on case.</li>
<li>str_functions.c: Compares two strings and copies the string to buffer.</li> 
</ul>

## Contributors
<br />
Piper Finleybrown - Developer - Implemented the command execution of functions.
<br />
Stephaine Biggs - Developer - Command execution, README file, and Man page.
