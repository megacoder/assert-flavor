# vim: ts=8 sw=8

CC	=ccache gcc -march=i686
CFLAGS	=-Os -g
LDFLAGS	=-g
LDLIBS	=

all:	ass

clean:
	${RM} *.o core.* lint tags a.out

distclean clobber: clean
	${RM} ass

check:	ass
	./ass
