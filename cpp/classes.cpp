#include<iostream>

using namespace std;

class circle {
    private:
        int radius;
    public:
        void set_radius();
        int get_radius();
        int calc_area();
};

void circle::set_radius() {
    cin >> radius;
}

int circle::get_radius() {
    return radius;
}

int circle::calc_area() {
    return 3*radius*radius;
}

int main () {
    circle *a;
    a=new circle;
    cout << "Please enter the radius: " << endl;
    a->set_radius();
    cout << "The area of a circle with radius " << a->get_radius() << " is " << a->calc_area() << endl;
    return 0;
}
