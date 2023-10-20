namespace math 
{
    class Point3D 
    {
        public:
            double x;
            double y;
            double z;

            Point3D (double x, double y, double z) 
            {
                this->x = x;
                this->y = y;
                this->z = z;
            }
    };

    class Vector3D 
    {
        private:
            double x;
            double y;
            double z;
            
        public:

            Vector3D (double x, double y, double z)
            {
                this->x = x;
                this->y = y;
                this->z = z;
            }

            Point3D get_point() 
            {
                return Point3D
                (
                    this->x,
                    this->y, 
                    this->z
                );
            }

            void invert()
            {
                this->x *= -1;
                this->y *= -1;
                this->z *= -1;
            }

            Vector3D operator+(Vector3D val)
            {
                return Vector3D
                (
                    this->x + val.x,
                    this->y + val.y,
                    this->z + val.z
                );
            }

            Vector3D operator-(Vector3D val)
            {
                this->x -= val.x;
                this->y -= val.y;
                this->z -= val.z;
            }

            void operator+=(Vector3D val)
            {
                this->x += val.x;
                this->y += val.y;
                this->z += val.z;
            }

            void operator-=(Vector3D val)
            {
                this->x -= val.x;
                this->y -= val.y;
                this->z -= val.z;
            }
    };
}