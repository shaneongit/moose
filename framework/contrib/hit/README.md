
HIT Parser
===========

HIT is a simple heirarchical text language that can be used for whatever you want.  API
documentation can be found in ``parse.h`` and ``lex.h``.  HIT requires a C++ 11 compiler but
otherwise has no dependencies.  In addition to the parser library/files a ``hit`` utility command
is included that can be used for several common tasks such as renaming parameters, finding
files/locations where certain parameters exist, and automatically formatting files into a
canonical format.  Build the command by running ``make`` or ``make hit``.

There are optional python bindings that can be built by running ``make bindings``; this requires
the python interpreter to be installed on your system (and in your PATH).  This uses a cython
pre-generated ``hit.cpp`` file.  When changes are made to the hit API that affect the bindings,
``hit.cpp`` will need to be regenerated by running ``make hit.cpp``; this requires a working
``cython`` install alongside your python interpreter.
