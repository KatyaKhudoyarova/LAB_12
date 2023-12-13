/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int m = 4;
    const int n = 3;

    int array[m][n];


    cout << "Two-dimensional array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < m; ++i) {
        int count_even = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i][j] % 2 == 0) {
                count_even++;
            }
        }
        cout << "In row " << i + 1 << ", the number of even numbers is: " << count_even << endl;
    }

    return 0;
}*/

/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Initializing the random number generator

    const int m = 6; // Number of rows
    const int n = 4; // Number of columns

    int array[m][n]; // Declaration of a two-dimensional array

    // Filling the array with random numbers and displaying it
    cout << "Two-dimensional array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1; // Generating a random number from 1 to 100
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Calculating the number of even numbers in each column and displaying it
    for (int j = 0; j < n; ++j) {
        int count_even = 0;
        for (int i = 0; i < m; ++i) {
            if (array[i][j] % 2 == 0) {
                count_even++;
            }
        }
        cout << "In column " << j + 1 << ", the number of even numbers is: " << count_even << endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int m = 5;
    const int n = 7;
    int array[m][n];


    cout << "Array:\n";
    for (int i = 0; i < m; ++i) {
        int row_sum = 0;
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
            row_sum += array[i][j];
        }
        cout << "| Sum: " << i + 1 << " = " << row_sum << endl;
    }

    return 0;
}*/

/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int m = 4;
    const int n = 6;

    int array[m][n];


    cout << "Array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Sum elements in column:\n";
    for (int j = 0; j < n; ++j) {
        int column_sum = 0;
        for (int i = 0; i < m; ++i) {
            column_sum += array[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << column_sum << endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int m = 3;
    const int n = 4;

    int array[m][n];


    cout << "Array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    int maxElement = array[0][0];
    int rowIndex = 0, colIndex = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                rowIndex = i;
                colIndex = j;
            }
        }
    }


    cout << "\nMax element in array: " << maxElement << endl;
    cout << "Row`s number: " << rowIndex + 1 << endl;
    cout << "Column`s number: " << colIndex + 1 << endl;

    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Для використання константи INT_MAX

using namespace std;

int main() {
    srand(time(0)); //

    const int m = 4;
    const int n = 7;

    int array[m][n];


    cout << "Array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    int minElement = INT_MAX;
    int rowIndex = 0, colIndex = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                rowIndex = i;
                colIndex = j;
            }
        }
    }


    cout << "\nMin element in array: " << minElement << endl;
    cout << "Row`s number: " << rowIndex + 1 << endl;
    cout << "Column`s number: " << colIndex + 1 << endl;

    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int m = 3;
    const int n = 3;

    int array[m][n];


    srand(time(0));


    cout << "Two-dimensional array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    int mainDiagonalSum = 0;
    int sideDiagonalSum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) { // Main diagonal
                mainDiagonalSum += array[i][j];
            }
            if (i + j == m - 1) { // Side diagonal
                sideDiagonalSum += array[i][j];
            }
        }
    }


    cout << "\nSum of numbers in the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of numbers in the side diagonal: " << sideDiagonalSum << endl;

    return 0;
}*/


