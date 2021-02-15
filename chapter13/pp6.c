#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int strcmp_no_case(char *s, char *t);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            if (strcmp_no_case(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j+1);
                break;
            }

        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

int strcmp_no_case(char *s, char *t)
{
	while (tolower(*s) == tolower(*t))
	{
		if (*s == '\0')
			return 0;
		s++, t++;
	}
	return *s - *t;
}