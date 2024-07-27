
class Car {
    private:
        int speed;
    public:
        void setSpeed(int s) { speed = s; }
        int getSpeed() { return speed; }
};

union Data {
    int i;
    float f;
    char str[20];
};

struct Point {
    int x;
    int y;
};
