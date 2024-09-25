#include <iostream>
#include <ctime>

using namespace std;

string checkDate(int dd, int mm, int yyyy) {
    
    struct tm start = {0, 0, 0, 1, 0, 100};   
    struct tm end = {0, 0, 0, 31, 11, 199};   

    struct tm date = {0, 0, 0, dd, mm - 1, yyyy - 1900};

    if (mktime(&date) == -1) {
        return "NO";
    }


    if (difftime(mktime(&date), mktime(&start)) >= 0 && difftime(mktime(&end), mktime(&date)) >= 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    for (int i = 0; i < 5; i++) {
        int dd, mm, yyyy;
        cin >> dd >> mm >> yyyy;
        cout << checkDate(dd, mm, yyyy) << endl;
    }
    return 0;
}
