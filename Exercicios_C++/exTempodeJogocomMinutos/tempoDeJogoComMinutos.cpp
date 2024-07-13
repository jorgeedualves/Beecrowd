#include <iostream>

using namespace std;

int main (void){
    int initialHour, initMinute, endHour, endMinute;

    cin >> initialHour >> initMinute >> endHour >> endMinute;

    int durationHours, durationMinutes;

    if (initialHour == endHour && initMinute == endMinute) {
        durationHours = 24;
        durationMinutes = 0;
    } else {
        if (endMinute < initMinute) {
            endMinute += 60;
            endHour -= 1;
        }

        if (endHour < initialHour) {
            endHour += 24;
        }

        durationHours = endHour - initialHour;
        durationMinutes = endMinute - initMinute;
    }

    cout << "O JOGO DUROU " << durationHours << " HORA(S) E " << durationMinutes << " MINUTO(S)" << endl;

    return 0;
}