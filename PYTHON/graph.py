# Line Graph

import matplotlib.pyplot as plt 
from matplotlib import style
style.use('ggplot')

x1, y1 = [1,2,3],[2,4,1]
x2, y2 = [1,2,3],[4,1,3]

plt.plot(x1, y1, 'g', label='Line One', linewidth=5) 
plt.plot(x2, y2, 'c', label='Line Two', linewidth=5)

plt.xlabel('x - axis')           
plt.ylabel('y - axis')
plt.title('Two lines on the same graph!') 
plt.legend()
plt.show()



# Bar Graph
left, height = [1, 2, 3, 4, 5], [10, 24, 36, 40, 5]

tick_label = ['one', 'two', 'three', 'four', 'five'] # labels for bars
plt.bar(left, height, tick_label = tick_label, width = 0.8, color = ['red', 'green']) # plotting a bar chart
plt.xlabel('x - axis') 
plt.ylabel('y - axis') 

plt.title('My bar chart!')
plt.show()



#  pie Chart
import matplotlib.pyplot as plt
# defining labels
activities = ['eat', 'sleep', 'work', 'play']
# portion covered by each label 
slices = [3, 7, 8, 6]

colors = ['r', 'y', 'g', 'b'] # color for each label
# plotting the pie chart
plt.pie(slices, labels = activities, colors=colors, startangle=90, shadow = True, explode = (0, 0, 0, 0.1), radius = 1.2, autopct = '%1.2f%%')

plt.legend(loc='lower left') # plotting legend
# showing the plot
plt.show()



import numpy as np

# Define two matrices
matrix1 = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
matrix2 = np.array([[9, 8, 7], [6, 5, 4], [3, 2, 1]])


add_mat = np.add(matrix1, matrix2)     #addition of matrix;

transpose_mat = np.transpose(add_mat)  #transpose of matrix;

print("Addition of matrix1 & 2:", add_mat)
print("Transpose of matrix:", transpose_mat)



def fib(n):
    a = 0
    b = 1
    if n < 0:
        print("Incorrect input")
    elif n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(2,n):
            c = a + b
            a = b
            b = c
        return b

print(fib(9))

class Student:
    def __init__(self, name):
        self.name = name
        self.marks = {"maths": 0, "physics": 0, "chemistry": 0}

    def get_marks(self):
        maths = int(input(f"Enter the {self.name}'s maths marks: "))
        physics = int(input(f"Enter the {self.name}'s physics marks: "))
        chemistry = int(input(f"Enter the {self.name}'s chemistry marks: "))
        self.marks["maths"] = maths
        self.marks["physics"] = physics
        self.marks["chemistry"] = Chemistry

    def calculate_average(self):
        total_marks = sum(self.marks.values())
        average = total_marks / 3
        return average

    def display_result(self):
        print(f"Student Name: {self.name}")
        print(f"Total Marks: {sum(self.marks.values())}")
        print(f"Average: {self.calculate_average():.2f}")

if __name__ == "__main__":
    student = Student(input("Enter the student name: "))
    student.get_marks()
    student.display_result()

