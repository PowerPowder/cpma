#include <stdio.h>
#include <string.h>

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] = {
    {"Argentina",       54}, {"Australia",             61}, {"Bangladesh",   880},
    {"Brazil",          55}, {"Burma (Myanmar)",       95}, {"China",         86},
    {"Colombia",        57}, {"Congo, Dem. Rep. of",  243}, {"Egypt",         20},
    {"Ethiopia",       251}, {"France",                33}, {"Germany",       49},
    {"India",           91}, {"Indonesia",             62}, {"Iran",          98},
    {"Italy",           39}, {"Japan",                 81}, {"Mexico",        52},
    {"Nigeria",        234}, {"Pakistan",              92}, {"Phillipines",   63},
    {"Poland",          48}, {"Russia",                 7}, {"South Africa",  27},
    {"South Korea",     82}, {"Spain",                 34}, {"Sudan",        249},
    {"Thailand",        66}, {"Turkey",                90}, {"Ukraine",      380},
    {"United Kingdom",  44}, {"United States",          1}, {"Vietnam",       84},
};

char* get_country(int code);

int main(void)
{
    int code;
    printf("Enter an international dialing code: ");
    scanf("%d", &code);

    char *country = get_country(code);

    if (strlen(country) > 0)
        printf("Country name: %s\nCountry code: %d\n", country, code);
    else
        printf("Country with the code '%d' doesn't exist.\n", code);

    return 0;
}

char *get_country(int code)
{
    int n = sizeof(country_codes) / sizeof(struct dialing_code);

    int i;
    for (i = 0; i < n; i++)
        if (country_codes[i].code == code)
            return country_codes[i].country;

    return "";
}