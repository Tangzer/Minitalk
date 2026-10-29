# minitalk

A client/server messaging program in C, built at École 42 (Brussels).

The client sends a string to the server one bit at a time, using only two UNIX signals (`SIGUSR1` and `SIGUSR2`). The server rebuilds each character and prints the message.

## Build and run

```bash
make
./server            # prints its PID
./client <PID> "Hello"
```
