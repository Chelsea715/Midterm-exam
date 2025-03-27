#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        std::cerr << "Fork failed!" << std::endl;
        return 1;
    }

    if (pid == 0) {
        // Child process
        std::cout << "hello" << std::endl;
        return 0; // Child process exits
    } else {
        // Parent process
        std::cout << "goodbye" << std::endl;
        return 0;
    }
}
