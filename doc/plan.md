Steps the program will take:
----------------------------

Steps 1:
0. Start with non-circular patterns.
1. Parse the pattern (assume no *star* notation).
2. Display stitches in order.

Steps 2:
3. Respect repetitions (*star* notation).

Steps 3:
4. Display circular patterns.

Steps 3:
5. Display square patterns.

Optional:
* Allow changing mode between British and American patterns. 

Modules I will need:
--------------------

1. A pattern parser; it should read the pattern row by row and maybe put the rows in a stack.
2. A symbol library; it will contain all pattern symbols and will contain a mapper from written to char symbols.
3. A display unit; it will display the chart and will allow us to save it as a pdf file.

Pattern assumptions and observations:
--------------------
* Every pattern line starts with "Row" and ends with "turn".
* Every stitch has a name and an offset from the current position of the needle; by default the offset is 1;

Potential fonts:
----------------
* [StitchinCrochetPRO](https://www.myfonts.com/fonts/adriprints/stitchin-crochet-pro/)
* [HookinCrochet](https://fontbundles.net/hookincrochet/50076-hookincrochet-symbols-1-font-software)
