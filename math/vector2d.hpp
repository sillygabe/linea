#include <cmath>

namespace math {
    class Point2D {
        public: 
            int x;
            int y;
            Point2D(int x, int y) {
                this->x = x;
                this->y = y;
            }
    };

    class Vector2D {
        private:
            int x; 
            int y;
        public:
            Point2D get_point() {
                return Point2D(this->x, this->y);
            }
            Vector2D(int x, int y) {
                this->x = x;
                this->y = y;
            }
        static Vector2D from_polar(float length, float degrees) {
            
        }
    };
}