CC := cc
LD := ld
CFLAGS += -Wall -O2
LDFLAGS +=

FONTS =ar.tfo ai.tfo ab.tfo
OBJS = term.o pad.o draw.o font.o isdw.o scrsnap.o
FBPAD_OBJS = fbpad.o $(OBJS) $(FONTS)
FBPADS_OBJS = fbpads.o $(OBJS) $(FONTS)
LIB_OBJS = libfbpads.o vtconsole.o $(OBJS) $(FONTS)

all: fbpad fbpads libfbpads.a
fbpad.o: conf.h
term.o: conf.h
pad.o: conf.h
%.tfo: %.tf conf.h
	$(LD) -r -b binary -o $@ $<
%.o: %.c %.h Makefile
	$(CC) -c $(CFLAGS) $<
fbpad: $(FBPAD_OBJS) Makefile
	$(CC) -o $@ $(FBPAD_OBJS) $(LDFLAGS)
fbpads: $(FBPADS_OBJS) Makefile
	$(CC) -o $@ $(FBPADS_OBJS) $(LDFLAGS)
libfbpads.a: $(LIB_OBJS) Makefile
	$(AR) rcs $@ $(LIB_OBJS)
clean:
	rm -f *.o *.a *.tfo fbpads
