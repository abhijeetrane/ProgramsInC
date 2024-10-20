#include <stdio.h>
#include <string.h>

int main() {
    const char hello[] = "Hello, World11!\n"; // 'Hello, World!' plus a linefeed character
    size_t helloLen = strlen(hello); // Length of the 'Hello, World!' string

    // The system call for write (sys_write)
    fwrite(hello, sizeof(char), helloLen, stdout); // File descriptor 1 - standard output

    // The system call for exit (sys_exit)
    return 0; // Exit with return "code" of 0 (no error)
}

