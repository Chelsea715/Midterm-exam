#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cstdlib>
void main() {
fork ();
fork ();
exit (0);
// It will create 3 child processes upon execution

}
