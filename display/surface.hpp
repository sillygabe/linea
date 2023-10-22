#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

namespace disp
{
    class LineaSurface
    {
        private:
            SDL_Surface* surf = nullptr;
        public:
            LineaSurface(
                int width,
                int height
            )
            {
                this->surf = SDL_CreateRGBSurface 
                (
                    0,
                    width,
                    height,
                    1,
                    0xFF000000,
                    0x00FF0000,
                    0x0000FF00,
                    0x000000FF
                );
            }

            LineaSurface(SDL_Surface* surf)
            {
                this->surf = surf;
            }

            void fill(int r, int g, int b)
            {
                SDL_FillRect(
                    this->surf,
                    nullptr,
                    SDL_MapRGB(
                        this->surf->format,
                        r,
                        g,
                        b
                    )
                );
            }

            SDL_Surface* getSurface()
            {
                return this->surf;
            }
    };
}
