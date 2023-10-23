# **Welcome to Linea!**

This is a C++ library built on top of [SDL](https://github.com/libsdl-org/SDL) to work with simple 3D and 2D Graphics.
This library is supposed to have linear learning curve (hence the name), so that you don't go insane from having to learn 1000 different modules and plugins with next to zero documentation.

To start working, install the latest release of Linea and SDL, and write `#include <Linea>`

PS: don't use `<iostream>` for input/output, it completely breaks SDL, instead use `<stdio.h>`.

# Math

The Math module has useful classes and functions, for example: Vector3D
```C++
math::Vector3D vect = math::Vector3D::fromPolar(10, 0, 0);
math::Point3D = vect.getPoint();
printf("%.1f, %.1f, %.1f", point.x, point.y, point.z);
```
This code will output `0.0, 0.0, 10.0`.

# Display
There's some work to do...