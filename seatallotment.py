
def create_classroom(num_rows, num_cols):
    """
    Initializes a classroom matrix of size num_rows x num_cols.

    Args:
        num_rows (int): Number of rows in the classroom.
        num_cols (int): Number of columns in the classroom.

    Returns:
        list: 2D list representing the classroom matrix.
    """
    return [[None] * num_cols for _ in range(num_rows)]




def assign_seats(classroom, students, row_indices, col_indices):
    """
    Assigns students to seats in the classroom matrix.

    Args:
        classroom (list): The classroom matrix.
        students (list): List of student names.
        row_indices (tuple): The range of row indices in the matrix.
        col_indices (tuple): The range of column indices in the matrix.
    """
    random.shuffle(students)
    for row in range(*row_indices):
        for col in range(*col_indices):
            if classroom[row][col] is None:
                classroom[row][col] = students.pop(0)


def print_classroom_matrix(classroom_matrix):
    """Print the classroom matrix in a formatted way."""
    for row in classroom_matrix:
        print(" ".join(str(seat) for seat in row))


if __name__ == '__main__':
    rows, cols = 8, 9
    classroom = initialize_classroom(rows, cols)
    batch_sizes = {'A': 2, 'B': 2, 'C': 2, 'D': 2, 'E': 2, 'F': 2, 'G': 2, 'H': 2}
    for batch, size in batch_sizes.items():
        assign_seats(classroom, [f'{batch}{i+1}' for i in range(size)],
                     (0, size), (0, cols))
    print_classroom(classroom)

