C File Handling Overview
-------------------------
In C, file handling lets you create, open, read from, write to, and close files on disk. You work with files using a FILE* pointer and the <stdio.h> library. The most common functions and modes are:

Opening a file:
---------------
FILE *fp = fopen("filename.txt", "mode");

Modes include:
---------------
"r" – open for reading (file must exist)
"w" – open for writing (creates or truncates)
"a" – open for appending (creates if not exists)
"r+" – open for reading & writing (must exist)
"w+" – open for reading & writing (creates or truncates)
"a+" – open for reading & appending (creates if not exists)

Closing a file:
---------------
fclose(fp);

Text I/O:
---------
fprintf(fp, ...) — write formatted text
fscanf(fp, ...) — read formatted text
fputs(str, fp) — write a string
fgets(buf, size, fp) — read a line
fputc(ch, fp) — write a character
fgetc(fp) — read a character