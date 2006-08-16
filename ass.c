/*
 * vim: ts=8 sw=8
 */

#include <stdio.h>
#include <assert.h>

int
main(
	int		argc,
	char * *	argv
)
{
	/*
	 * Some implementations of assert(3) keep the exact () contents
	 * and use that, including any commentary, as the message.  Some
	 * have already elided the comments.  See what this compiler does.
	 */
	assert( 1 == 1 /* This should be fine */ );
	assert( 0 == 1 /* This should produce a runtime error */ );
	return( 0 );
}
