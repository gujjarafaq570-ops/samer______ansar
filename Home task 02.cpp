#include <iostream>
using namespace std;

int main() {
    int minutes, frame_per_second, total_frames;

    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter frame per second: ";
    cin >> frame_per_second;
    total_frames = minutes * 60 * frame_per_second;

    cout << "Total frames = " << total_frames ;

    }
