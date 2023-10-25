#include "../Linea"

int main()
{
    LineaInit();

    Window window = Window("Hello, linea! :3", 640, 480);
    Color Background = Color(0, 34, 45);
    Color Line = Color(255, 255, 255);

    bool running = true; SDL_Event event;

    Point2D center = Point2D(320, 240);
    Point2D mousePos = Point2D(0, 0);

    while (running)
    {   
        mousePos = getMousePos();

        window.fill(Background);

        window.drawLine(center, mousePos, Line);
        window.drawCircle(mousePos, 50, Line, 360);

        window.update();

        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    running = false;
                    break;
                
                default:
                    break;
            }
        }
    }

    window.destroy();
    LineaQuit();

    return 0;
}