#include <iostream>
#include <chrono>

class Stopwatch {
public:
    void start() {
        startTime = std::chrono::steady_clock::now();
        running = true;
    }

    void stop() {
        if (running) {
            endTime = std::chrono::steady_clock::now();
            running = false;
        }
    }

    void reset() {
        running = false;
        startTime = endTime = std::chrono::steady_clock::now();
    }

    double elapsedSeconds() {
        if (running) {
            return std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - startTime).count();
        } else {
            return std::chrono::duration_cast<std::chrono::duration<double>>(endTime - startTime).count();
        }
    }

private:
    std::chrono::steady_clock::time_point startTime, endTime;
    bool running = false;
};

int main() {
    Stopwatch stopwatch;
    char command;

    while (true) {
        std::cout << "Enter command (s:start, t:stop, r:reset, q:quit): ";
        std::cin >> command;

        switch (command) {
            case 's':
                stopwatch.start();
                break;
            case 't':
                stopwatch.stop();
                std::cout << "Elapsed time: " << stopwatch.elapsedSeconds() << " seconds" << std::endl;
                break;
            case 'r':
                stopwatch.reset();
                break;
            case 'q':
                return 0;
            default:
                std::cout << "Invalid command" << std::endl;
        }
    }

    return 0;
}
