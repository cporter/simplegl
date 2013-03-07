simplegl
========

A very simple OpenGL binding for V8/node

Building
--------

installing using [npm](http://npmjs.org/) via [GitHub](http://github.com/)
seems to be the easiest way:

    npm install cporter/simplegl

Use
---

This library is meant for use in program extension code.  It assumes that you already
have an OpenGL context created.

Hacking
-------

For now, build using [node-gyp](https://github.com/TooTallNate/node-gyp).  It should
be as simple as

    % node-gyp configure
    % node-gyp build

And you're done.

The main source file &mdash; `src/geeell.cc` &mdash; is auto-generated by the python
script `parse.py`.  You'll need to have the jinja2 python package installed.
(It's available via easy_install.)  It takes the OpenGL header file gl.h as input
and dumps a bunch of C++ to stdout.  This step generates the following bindings:

- Constants
- Functions that take primitaves as arguments


Known Bugs
----------

- Doesn't implement all of the OpenGL spec yet
- Only tested on Mac OS X 10.8, and only lightly tested on that
- Likely only builds on Mac OS X 10.8 (though this is fixable)
- And much, much more!


