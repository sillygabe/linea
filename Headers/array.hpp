template <typename T>
class Array
{   
    //A dynamic array, use it instead of vector for maximum compatibility
    private:
        T* array;
        size_t used;
        size_t size;
    public:
        Array(typename T, size_t size)
        {
            this->array = new T[size];
            this->used = 0;
            this->size = size;
        }

        void append(T element)
        {
            if (this->size == this->used)
            {
                this->size *= 2;
                T* newArray = new T[this->size];
                for (size_t i = 0; i < this->used; i++)
                {
                    newArray[i] = this->array[i];
                }
                delete[] this->array;
                this->array = newArray;
            }
            this->array[this->used++] = element;
        }

        T operator[](size_t index)
        {
            return this->array[index];
        }
};