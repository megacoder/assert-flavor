/*
 * vim: ts=8 sw=8
 */

#include <stdio.h>

#define	offsetof(t,e) (&((t *) NULL)->e)

typedef struct	{
	int	i;
	float	f;
	double	d;
	char	c[32];
	short	s;
} OO_t;

int
main(
	int		argc,
	char * *	argv
)
{
	static char const	fmt[] = { "Offset of '%s' is %u.\n" };

	printf( fmt, "i", offsetof( OO_t, i ) );
	printf( fmt, "f", offsetof( OO_t, f ) );
	printf( fmt, "d", offsetof( OO_t, d ) );
	printf( fmt, "c", offsetof( OO_t, c ) );
	printf( fmt, "s", offsetof( OO_t, s ) );
	return( 0 );
}
