#include <iostream>
using namespace std;

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

int main() {
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;

    if ( col == Color::red )
        cout << "red" << endl;

    if ( light < Traffic_light::red )
        cout << "go" << endl;

    // cout << col << endl;
}
