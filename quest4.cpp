#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        close(STDOUT_FILENO);
        printf("This will not be printed to the console.\n");
        // Even though printf fails, it doesn't return an error,
        // so we explicitly check the return value of write to demonstrate the failure.
        const char* message = "This will also not be printed.\n";
        ssize_t bytes_written = write(STDOUT_FILENO, message, strlen(message));
        if (bytes_written == -1) {
            std::cerr << "Write failed in child process." << std::endl;
        }
    } else if (pid > 0) {
        // Parent process
        wait(nullptr);
        std::cout << "Parent process continues." << std::endl;
    } else {
        std::cerr << "Fork failed." << std::endl;
        return 1;
    }

    return 0;
}
