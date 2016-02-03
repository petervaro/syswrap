/* INFO **
** INFO */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include standard headers */
#include <stdio.h>
/*  value : stdout
    func  : printf
            tmpfile */
#include <stddef.h>
/*  type  : size_t */
#include <stdlib.h>
/*  const : EXIT_SUCCESS
            EXIT_FAILURE */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include syswrap headers */
#include "syswrap/io.h"
/*  func  : sw_isatty */


/*----------------------------------------------------------------------------*/
int
main(void)
{
    size_t  i;
    FILE   *streams[] = {stdout, tmpfile()};

    for (i=0; i<(sizeof streams / sizeof(FILE*)); ++i)
    {
        printf("streams[%zu] is %sa TTY\n", i, sw_isatty(streams[i]) ? "" : "not ");
        if (i)
            fclose(streams[i]);
    }

    return EXIT_SUCCESS;
}
