#include <cmath>

namespace math {
    class Point2D 
    {
        public: 
            int x;
            int y;
            Point2D(int x, int y) {
                this->x = x;
                this->y = y;
            }
    };

    class Vector2D 
    {
        private:
            int x; 
            int y;
            double length;
        public:
            Point2D get_point() {
                return Point2D(this->x, this->y);
            }

            Vector2D(int x, int y) {
                this->x = x;
                this->y = y;
                this->length = this->get_length();
            }

            double get_length()
            {
                return sqrt(this->x * this->x + this->y * this->y);
            }

            Vector2D operator+(Vector2D val) 
            {
                return Vector2D
                (
                    this->x + val.x,
                    this->y + val.y
                );
            }

            void operator+=(Vector2D val) 
            {
                this->x += val.x;
                this->y += val.y;
            }

        static Vector2D from_polar(float length, float degrees) 
        {
            double radians = degrees / 180 * 3.14;
            return Vector2D
            (
                sin(radians) * length,
                cos(radians) * length
            );
        }
    };
}