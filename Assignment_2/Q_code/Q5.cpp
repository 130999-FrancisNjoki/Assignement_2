#include <iostream>
#include <thread>   // for sleep_for
#include <chrono>   // for chrono::seconds

using namespace std;

enum TrafficLightState { RED, YELLOW, GREEN };

int main() {
    TrafficLightState state = RED;
    int timer = 0;//To display the case based on the timer indvated 

    while (true) {
        // Use switch case to display the color based on the state
        switch (state) {
            case RED:
                cout << "Traffic Light is RED" << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Red light for 5 seconds
                state = GREEN; // Next state
                break;

            case YELLOW:
                cout << "Traffic Light is YELLOW" << endl;
                this_thread::sleep_for(chrono::seconds(2)); // Yellow light for 2 seconds
                state = RED; // Next state
                break;

            case GREEN:
                cout << "Traffic Light is GREEN" << endl;
                this_thread::sleep_for(chrono::seconds(4)); // Green light for 4 seconds
                state = YELLOW; // Next state
                break;
                
        }
    }

    return 0;
}
