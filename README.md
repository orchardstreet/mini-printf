mini-snprintf
===========

Portable and minimal snprintf(), C89 compliant

Compatibility
-------------

For now only these are supported:

    %%       - print '%'
    %c       - character
    %s       - string
    %d, %u   - decimal integer
    %x, %X   - hex integer

The integer formatting also supports 0-padding up to 9 characters wide.
(no space-padding or left-aligned padding yet).

The implementation should be compatible with any GCC-based compiler.
Tested with native x86-64 gcc, arm-none-eabi-gcc and avr-gcc.

It's completely standalone without any external dependencies.

Usage
-----

1. Include "mini-printf.h" into your source files.
2. Use mini_snprintf() in place of snprint().
3. Compile, Flash, Test

One can use object files and -nostdlib for a smaller binary

Development of this program began by modifying an existing program under BSD-3-Clause, 
This entire program is also BSD-3-Clause.

The original author listed in the license does not necessarily endorse our usage

License
-------

Copyright (c) 2013,2014 Michal Ludvig <michal@logix.cz>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the auhor nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
