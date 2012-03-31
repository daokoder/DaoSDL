CC = gcc
INCLUDE = -I. -I/usr/local/dao/include -Iwrap -I../test
LIB = -L. -L/usr/lib
CFLAGS = -c -fPIC
LFLAGS =
LFLAGS2 =

OBJS = wrap/dao_SDL.o wrap/dao_SDL2.o wrap/dao_SDL3.o
OBJS2 = wrap/dao_SDL_Test.o wrap/dao_SDL_Test2.o wrap/dao_SDL_Test3.o ../test/common.o

TARGET = DaoSDL.so
TARGET2 = DaoSDL_Test.so

UNAME = $(shell uname)

ifeq ($(UNAME),Linux)
  CFLAGS += -DUNIX
  LFLAGS += -fPIC -shared -Wl,-soname,libDaoSDL.so
  LFLAGS2 += -fPIC -shared -Wl,-soname,libDaoSDL_Test.so
endif

ifeq ($(UNAME),Darwin)
  TARGET = DaoSDL.dylib
  TARGET2 = DaoSDL_Test.dylib
  CFLAGS += -DUNIX -DMAC_OSX
  LFLAGS += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libDaoSDL.dylib
  LFLAGS2 += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libDaoSDL_Test.dylib
  OBJS += daoSDL_Init.o
endif

CFLAGS_SDL = $(shell sdl2-config --cflags)
LFALGS_SDL = $(shell sdl2-config --static-libs)

CFLAGS += $(CFLAGS_SDL)
LFLAGS += $(LFALGS_SDL)
LFLAGS2 += $(LFALGS_SDL)

#CFLAGS += -ggdb -O0
CFLAGS += -O2

first: all

all: $(TARGET)

.SUFFIXES: .c .m

.c.o:
	$(CC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

.m.o:
	$(CC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(LIB) $(OBJS) -o $(TARGET)

test: $(OBJS2)
	$(CC) $(LFLAGS2) $(LIB) $(OBJS2) -o $(TARGET2)

clean:
	rm $(OBJS) $(OBJS2)


bind:
	@test -d wrap || mkdir wrap
	/Users/min/projects/dao/tools/clangdao/clangdao $(CFLAGS_SDL) sdl.c -o wrap/

bind-test:
	@test -d wrap || mkdir wrap
	/Users/min/projects/dao/tools/clangdao/clangdao $(CFLAGS_SDL) -I../test sdl_test.c -o wrap/
