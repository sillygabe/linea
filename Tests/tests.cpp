#include "../Linea"

int main()
{
    LineaInit();

    SDL_ShowCursor(SDL_DISABLE);

    Window window = Window("Hello, linea! :3", 201, 251);
    Color Background = Color(0, 34, 45);

    Texture mewo = Texture(window.loadImage("mewo.jpeg"));
    Rect mewo_rect = mewo.getRect();

    bool running = true; SDL_Event event;

    while (running)
    {   
        mewo_rect.setCenter(getMousePos());

        window.fill(Background);

        window.showImage(mewo, mewo_rect);

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