#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

string check_date(int dd, int mm, int yyyy) {
    if (yyyy < 2000 || yyyy > 2099) {
        return "NO";
    }

    tm time_in = {0, 0, 0, dd, mm - 1, yyyy - 1900};

    time_t t = mktime(&time_in);
    if (t == -1) {
        return "NO";
    }

    if (time_in.tm_mday != dd || time_in.tm_mon != mm - 1 || time_in.tm_year != yyyy - 1900) {
        return "NO";
    }

    return "YES";
}

int main() {
    for (int i = 0; i < 5; ++i) {
        int dd, mm, yyyy;
        cin >> dd >> mm >> yyyy;
        cout << check_date(dd, mm, yyyy) << endl;
    }
    return 0;
}