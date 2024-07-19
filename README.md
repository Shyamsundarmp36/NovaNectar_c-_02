Stopwatch Program
Description
This C++ program implements a simple stopwatch that allows the user to start, stop, reset, and quit the stopwatch using console commands. The elapsed time is displayed when the stopwatch is stopped.

Features
Start: Begins timing from the current moment.
Stop: Stops the timing and displays the elapsed time.
Reset: Resets the stopwatch to zero.
Quit: Exits the program.
Usage
Compile the Program: Use a C++ compiler to compile the code.

sh
Copy code
g++ -o stopwatch task2.cpp
Run the Program: Execute the compiled program.

sh
Copy code
./stopwatch
Enter Commands:

s: Start the stopwatch.
t: Stop the stopwatch and display the elapsed time.
r: Reset the stopwatch to zero.
q: Quit the program.
Example
sh
Copy code
Enter command (s:start, t:stop, r:reset, q:quit): s
Enter command (s:start, t:stop, r:reset, q:quit): t
Elapsed time: 2.34567 seconds
Enter command (s:start, t:stop, r:reset, q:quit): r
Enter command (s:start, t:stop, r:reset, q:quit): q
Code Explanation
Stopwatch Class
start(): Records the current time as the start time and sets the stopwatch to running.
stop(): Records the current time as the end time if the stopwatch is running.
reset(): Resets the start and end times to the current time and sets the stopwatch to not running.
elapsedSeconds(): Returns the elapsed time in seconds. If the stopwatch is running, it calculates the time from the start time to the current time. If it is stopped, it calculates the time from the start time to the end time.
Main Function
The main function continuously prompts the user to enter a command to control the stopwatch.
Depending on the command (s, t, r, q), the corresponding method of the Stopwatch class is called.
contact  (shyamsundarmp36.gmail.com)
