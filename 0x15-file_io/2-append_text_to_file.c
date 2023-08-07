#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure or 0 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
