#!/usr/bin/python3
def no_c(my_string):
    new_str = ""
    for i in my_string:
        if (i != 'c') and (i != 'C'):
            new_str += i
    return (new_str)

vi 6-print_matrix_integer.py

#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for i in matrix:
        print(' '.join('{:d}'.format(j)for j in i))
