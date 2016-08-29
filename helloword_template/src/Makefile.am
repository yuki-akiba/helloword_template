# Specify the target name to be created.
#bin_PROGRAMS = helloworld
noinst_PROGRAMS = helloworld_proc

# Specify source files needed to build
helloworld_proc_SOURCES =
helloworld_proc_SOURCES += helloworld/hello.cpp
helloworld_proc_SOURCES += helloworld/main.cpp

# Extra objects (*.$(OBJEXT)) and libraries (*.a, *.la)
# can be added to a program by listing them in the _LDADD variable.
helloworld_proc_LDADD =
# AM_CPPFLAGS is ignored in preference to a per-executable
# (or per-library) _CPPFLAGS variable if it is defined.
helloworld_proc_CPPFLAGS =
helloworld_proc_CPPFLAGS += -I$(top_srcdir)/src/helloworld
helloworld_proc_CPPFLAGS += -I$(top_srcdir)/src/helloworld/factory

# This variable is used to pass extra flags to the link step of a program
# or a shared library. It overrides the AM_LDFLAGS variable.
helloworld_proc_LDFLAGS =
helloworld_proc_LDFLAGS += -L/usr/local/lib
helloworld_proc_LDFLAGS += -lboost_system
helloworld_proc_LDFLAGS += -lboost_thread

# This variable is used to specify additional objects or libraries to link with.
LDADD =
# Any flags to pass to the C++ compiler.
#CXXFLAGS =
# The maintainer’s variant of CXXFLAGS.
AM_CXXFLAGS = -O2 -g
# The contents of this variable are passed to every compilation
# that invokes the C preprocessor;
# it is a list of arguments to the preprocessor.
# For instance, -I and -D options should be listed here.
# AM_CPPFLAGS is ignored in preference to a per-executable
# (or per-library) _CPPFLAGS variable if it is defined.
AM_CPPFLAGS =
# This is the variable the Makefile.am author can use to pass
# in additional linker flags.
# In some situations, this is not used,
# in preference to the per-executable (or per-library) _LDFLAGS.
AM_LDFLAGS =
