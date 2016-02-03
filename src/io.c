/* INFO **
** INFO */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include standard headers */
#include <stdio.h>
/*  func  : POSIX: fileno, WINDOWS: _fileno */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include posix headers */
// TODO: decide what to do with: __MINGW32__
#if defined unix        ||                                                     \
    defined __unix      ||                                                     \
    defined __unix__    ||                                                     \
    defined __linux__   ||                                                     \
    defined __FreeBSD__ ||                                                     \
    defined __CYGWIN__  ||                                                     \
    (defined __APPLE__ && defined __MACH__)
        #include <unistd.h>
        /*  func  : isatty */
#elif defined WIN32   ||                                                       \
      defined _WIN32  ||                                                       \
      defined __WIN32
        #include <io.h>
        /*  func  : _isatty */

        /* Aliases */
        #define isatty _isatty
        #define fileno _fileno
#else
    #error "Currently syswrap is not supporting this platform"
#endif

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include syswrap headers */
#include "syswrap/io.h"

/*----------------------------------------------------------------------------*/
int
sw_isatty(FILE *stream)
{
    return isatty(fileno(stream));
}
