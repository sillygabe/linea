echo "Starting.\n"
g++ tests.cpp -std=c++20 -o main -F/Library/Frameworks -framework SDL2 -lc++ -framework SDL2_image -framework SDL2_mixer
./main
echo "Program Ended."
rm main