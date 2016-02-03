[![[license: GPLv3]][1]][2]
[![[standard: ISO C11]][3]][4]

- - -

![<syswrap>][5]

The purpose of `syswrap` is to provide a strictly standard compilant API for
system specific features. Some systems are extending the standard library's
headers with features that should not be there. And even if these features are
only available, when the user is compiling with special standards or defining
certain flags, these features are sometimes required by other standalone
libraries. This means, that the user is forced to use the non-standard features
of the standard headers to get access to those external ones.

`Syswrap` is solving this problem, by wrapping and encapsulating these features.
That means, `syswrap` itself has to be compiled in a non-standard environment,
but all its users can be compiled in a standard conforming one.



Functions
---------

```C
int
sw_isatty(FILE *stream);
```

License
-------

Copyright &copy; 2016 **Peter Varo**

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program, most likely a file in the root directory, called 'LICENSE'.
If not, see <http://www.gnu.org/licenses>.

- - -

The logo is based on the font called **SciFly**, designed by **Tomi Haaparanta**
at Suomi Type Factory, provided by FlyerZone.

<!-- -->

[1]: https://img.shields.io/badge/license-GNU_General_Public_License_v3.0-blue.svg
[2]: http://www.gnu.org/licenses/gpl.html
[3]: https://img.shields.io/badge/standard-ISO_C11-lightgrey.svg
[4]: http://www.open-std.org/jtc1/sc22/WG14/www/docs/n1570.pdf
[5]: img/logo.png?raw=true "<syswrap>"
