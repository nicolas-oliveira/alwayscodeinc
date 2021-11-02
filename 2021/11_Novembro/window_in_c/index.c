#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
    Display *my_display;
    Window my_window;
    XEvent event;
    const char *MSG = "Hello, World!";
    int DefaultScreenNumber;
 
    my_display = XOpenDisplay(NULL);

    if (my_display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    DefaultScreenNumber = DefaultScreen(my_display);
    my_window = XCreateSimpleWindow(my_display, RootWindow(my_display, DefaultScreenNumber), 10, 10, 100, 100, 1,
                                    BlackPixel(my_display, DefaultScreenNumber), 
                                    WhitePixel(my_display, DefaultScreenNumber));

    XSelectInput(my_display, my_window, ExposureMask | KeyPressMask);
    
    XMapWindow(my_display, my_window);

    while (1) {
        XNextEvent(my_display, &event);
        if (event.type == Expose) {
            XFillRectangle(my_display, my_window, DefaultGC(my_display, DefaultScreenNumber), 20, 20, 10, 10);
            XDrawString(my_display, my_window, DefaultGC(my_display, DefaultScreenNumber), 10, 50, MSG, strlen(MSG));
        }
        
        if (event.type == KeyPress)
            break;
    }

    XCloseDisplay(my_display);
    return 0;
}