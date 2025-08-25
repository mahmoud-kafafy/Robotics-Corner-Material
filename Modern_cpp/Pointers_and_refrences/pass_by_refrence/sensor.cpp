//refrence
//function overload

#include <iostream>
#include <cmath>  // for atan2, sqrt

using namespace std;

// Function 1: simulate accelerometer reading
void readAccelerometer(double &yaw, double &pitch, double &roll) {
    // assign some dummy sensor values
    yaw = 0.5;    // radians
    pitch = 1.0;  // radians
    roll = -0.7;  // radians
}

// Function 2: convert radians to degrees
void convertToDegrees(double &yaw, double &pitch, double &roll) {
        const double RAD_TO_DEG = 180.0 / M_PI;
        //yaw   *= RAD_TO_DEG;
       // pitch *= RAD_TO_DEG;
        //roll  *= RAD_TO_DEG;
         yaw   = 10;
    pitch = 20;
    roll  = 30;
}
// Function 2: convert radians to degrees
void convertToDegrees(double *yaw, double *pitch, double *roll) {
    *yaw   = 10;
    *pitch = 20;
    *roll  = 30;
}

int main() {
    double yaw, pitch, roll;

    readAccelerometer(yaw, pitch, roll);   // values written via references
    convertToDegrees(yaw, pitch, roll);    // converted in-place

    cout << "Yaw: " << yaw 
         << "°, Pitch: " << pitch 
         << "°, Roll: " << roll << "°" << endl;
    convertToDegrees(yaw, pitch, roll);    // converted in-place

    cout << "Yaw: " << yaw 
         << "°, Pitch: " << pitch 
         << "°, Roll: " << roll << "°" << endl;

    return 0;
}