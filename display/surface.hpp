#include <SDL2/SDL.h>

namespace disp
{
    class LineaSurface
    {
        private:
            SDL_Surface* surf = NULL;
        public:
            LineaSurface(
                int width,
                int height
            )
            {
                this->surf = SDL_CreateRGBSurface
                (
                    SDL_SWSURFACE,
                    width,
                    height,
                    16,
                    0x000000FF,
                    0x0000FF00,
                    0x00FF0000,
                    0xFF000000
                );
            }

            void fill(int r, int g, int b)
            {
                SDL_FillRect(
                    this->surf,
                    NULL,
                    SDL_MapRGB(
                        this->surf->format,
                        r,
                        g,
                        b
                    )
                );
            }
    };
}
