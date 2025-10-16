#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// تابع برای محاسبه سرعت متوسط
double calculateAverageSpeed(double distance, double time) {
    return distance / time;
}

int main() {
    // ورودی‌ها
    double distanceBetweenCameras; // فاصله بین دوربین‌ها (بر حسب کیلومتر)
    double speedLimit; // حد مجاز سرعت (بر حسب کیلومتر در ساعت)
    double time1, time2; // زمان عبور خودرو از دوربین اول و دوم (بر حسب ساعت)

    cout << "Enter the distance between the two cameras (in kilometers): ";
    cin >> distanceBetweenCameras;

    cout << "Enter the speed limit (in kilometers per hour): ";
    cin >> speedLimit;

    cout << "Enter the time when the car passed the first camera (in hours): ";
    cin >> time1;

    cout << "Enter the time when the car passed the second camera (in hours): ";
    cin >> time2;

    // محاسبه زمان طی شده
    double timeTaken = time2 - time1;
    if (timeTaken <= 0) {
        cout << "Invalid time inputs. The second time must be greater than the first time." << endl;
        return 1;
    }

    // محاسبه سرعت متوسط
    double averageSpeed = calculateAverageSpeed(distanceBetweenCameras, timeTaken);

    // نمایش سرعت متوسط
    cout << "The average speed of the car is: " << averageSpeed << " km/h" << endl;

    // بررسی اینکه آیا سرعت مجاز رعایت شده یا خیر
    if (averageSpeed > speedLimit) {
        cout << "The car was speeding! Issuing a fine." << endl;
    } else {
        cout << "The car was within the speed limit." << endl;
    }

    return 0;
}
