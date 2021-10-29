#include <stdio.h>

void output_array(int *array, int number_of_elements)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        printf("%i, ", *(array + i));
    }
}

void input_array(int *array, int number_of_elements)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        printf("Write value of element number %i: ", i + 1);
        scanf("%i", array + i);
    }
}

void main()
{
    printf("Please, write size of array (it must be even number) :\n");
    int number_of_elements, suma_of_first_half, suma_of_second_half, position_of_chosen_element;
    scanf("%i", &number_of_elements);

    int array[number_of_elements];
    input_array(&array[0], number_of_elements);

    for (int i = 0; i < number_of_elements / 2; i++)
    {
        suma_of_first_half += array[i];
    }
    for (int i = number_of_elements / 2; i < number_of_elements; i++)
    {
        suma_of_second_half += array[i];
    }

    printf("Write the position of chosen element: ");
    scanf("%i\n", &position_of_chosen_element);
    if (position_of_chosen_element - 1 > number_of_elements / 2)
    {
        // if element in the first half add the difference between suma of first and second half
        array[position_of_chosen_element - 1] += suma_of_first_half - suma_of_second_half;
    }
    else
    {
        // if if element in the second half add the difference between suma of second and first half
        array[position_of_chosen_element - 1] += suma_of_second_half - suma_of_first_half;
    }
    output_array(&array[0], number_of_elements);
}