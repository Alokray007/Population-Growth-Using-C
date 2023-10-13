#include <cs50.h>
#include <stdio.h>

int get_population(void);
int get_endPopulation(int n);
int calculate_year(int n, int m);

int main(void)
{
    // TODO: Prompt for start size
    int n = get_population();

    // TODO: Prompt for end size
    int m = get_endPopulation(n);

    // TODO: Calculate number of years until we reach threshold
    int year = calculate_year(n, m);

    // TODO: Print number of years
    printf("Years: %i\n", year);
}

int get_population(void)
{
    int n;
    do
    {
        n = get_int("Enter start size: ");
    }
    while (n < 9);
    return n;
};

int get_endPopulation(int n)
{
    int m;
    do
    {
        m = get_int("Enter end size: ");
    }
    while (m < n);
    return m;
};

int calculate_year(int n, int m)
{
    int countYear = 0;
    int newPopulation = n;
    while (newPopulation < m)
    {
        newPopulation = newPopulation + (newPopulation / 3) - (newPopulation / 4);
        countYear++;
    }
    return countYear;
}
