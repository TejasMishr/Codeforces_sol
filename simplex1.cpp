#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define vf vector<float>

class Simplex{
    private:
     int rows, cols;
    // Stores coefficients of all the variables
    vector<vf> A;
    // Stores constants of constraints
    vf B;
    // Stores the coefficients of the objective function
    vf C;

    float maximum;

    bool isUnbounded;

public:
    Simplex(vector<vf> matrix, vf b, vf c){
        maximum = 0;
        isUnbounded = false;
        rows = matrix.size();
        cols = matrix[0].size();
        A.resize(rows, vf(cols, 0));
        B.resize(b.size());
        C.resize(c.size());

        for (int i = 0; i < rows; i++) for (int j = 0; j < cols; j++) A[i][j] = matrix[i][j];
        for (int i = 0; i < c.size(); i++) C[i] = c[i];
        for (int i = 0; i < b.size(); i++)  B[i] = b[i];
    }

    bool simplexAlgorithmCalculataion(){
        
        if (checkOptimality() == true) return true;
        int pivotColumn = findPivotColumn();

        if (isUnbounded == true){
            cout << "Error unbounded" << endl;
            return true;
        }

        int pivotRow = findPivotRow(pivotColumn);
        doPivotting(pivotRow, pivotColumn);

        return false;
    }

    bool checkOptimality(){
       
        bool isOptimal = false;
        int positveValueCount = 0;

        
        for (int i = 0; i < C.size(); i++){
            float value = C[i];
            if (value >= 0)  positveValueCount++;
        }
     
        if (positveValueCount == C.size()){
            isOptimal = true;
            print();
        }
        return isOptimal;
    }

    void doPivotting(int pivotRow, int pivotColumn){

        float pivetValue = A[pivotRow][pivotColumn];

        float pivotRowVals[cols]; 

        float pivotColVals[rows]; 

        float rowNew[cols]; 

        maximum = maximum - (C[pivotColumn] * (B[pivotRow] / pivetValue)); 
       
        for (int i = 0; i < cols; i++){
            pivotRowVals[i] = A[pivotRow][i];
        }
       
        for (int j = 0; j < rows; j++){
            pivotColVals[j] = A[j][pivotColumn];
        }

        
        for (int k = 0; k < cols; k++) {
            rowNew[k] = pivotRowVals[k] / pivetValue;
        }

        B[pivotRow] = B[pivotRow] / pivetValue;

       
        for (int m = 0; m < rows; m++) {
            if (m != pivotRow){
                for (int p = 0; p < cols; p++){
                    float multiplyValue = pivotColVals[m];
                    A[m][p] = A[m][p] - (multiplyValue * rowNew[p]);
                    // C[p] = C[p] - (multiplyValue*C[pivotRow]);
                    // B[i] = B[i] - (multiplyValue*B[pivotRow]);
                }
            }
        }

      
        for (int i = 0; i < B.size(); i++){
            if (i != pivotRow){
                float multiplyValue = pivotColVals[i];
                B[i] = B[i] - (multiplyValue * B[pivotRow]);
            }
        }
       
        float multiplyValue = C[pivotColumn];
       
        for (int i = 0; i < C.size(); i++){
            C[i] = C[i] - (multiplyValue * rowNew[i]);
        }

        
        for (int i = 0; i < cols; i++){
            A[pivotRow][i] = rowNew[i];
        }
    }

    // Print the current A array
    void print(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                cout << A[i][j] << " ";
            }
            cout << "" << endl;
        }
        cout << "" << endl;
    }

   
    int findPivotColumn(){

        int location = 0;
        float minm = C[0];

        for (int i = 1; i < C.size(); i++){
            if (C[i] < minm){
                minm = C[i];
                location = i;
            }
        }

        return location;
    }

    
    int findPivotRow(int pivotColumn){
        float positiveValues[rows];
        vf result(rows, 0);
        // Float result[rows];
        int negativeValueCount = 0;

        for (int i = 0; i < rows; i++){
            if (A[i][pivotColumn] > 0) positiveValues[i] = A[i][pivotColumn];
            else{
                positiveValues[i] = 0;
                negativeValueCount += 1;
            }
        }
        // Checking the unbound condition if all the values are negative ones
        if (negativeValueCount == rows) isUnbounded = true;
        else{
            for (int i = 0; i < rows; i++){
                float value = positiveValues[i];
                if (value > 0) result[i] = B[i] / value;
                else result[i] = 0;
            }
        }
        // find the minimum's location of the smallest item of the B array
        float minimum = 99999999;
        int location = 0;
        for (int i = 0; i < sizeof(result) / sizeof(result[0]); i++){
            if (result[i] > 0){
                if (result[i] < minimum){
                    minimum = result[i];
                    location = i;
                }
            }
        }

        return location;
    }

    void CalculateSimplex(){
        bool end = false;

        cout << "initial array(Not optimal)" << endl;
        print();

        cout << " " << endl;
        cout << "final array(Optimal solution)" << endl;

        while (!end){

            bool result = simplexAlgorithmCalculataion();

            if (result == true){ 
                end = true;
            }
        }
        cout << "Answers for the Constraints of variables" << endl;

        for (int i = 0; i < A.size(); i++){ // every basic column has the values, get it form B array
            int count0 = 0;
            int index = 0;
            for (int j = 0; j < rows; j++){
                if (A[j][i] == 0.0){
                    count0 += 1;
                }
                else if (A[j][i] == 1){
                    index = j;
                }
            }

            if (count0 == rows - 1){

                cout << "variable" << index + 1 << ": " << B[index] << endl; // every basic column has the values, get it form B array
            }
            else{
                cout << "variable" << index + 1 << ": " << 0 << endl;
            }
        }

        cout << "" << endl;
        cout << "maximum value: " << maximum << endl; // print the maximum values
    }
};

int main(){
    int colSizeA = 2; // Number of columns in A matrix
    int rowSizeA = 2; // Number of rows in A matrix

    float C[] = {-7, -6}; // Coefficients of the objective function for maximization

    float a[2][2] = { // Coefficients of the constraints
                     {1, 1},
                     {2, 1}};

    float B[] = {4, 6}; // Constants on the right-hand side of constraints

    vector<vf> vec2D(rowSizeA, vf(colSizeA, 0));

    vf b(rowSizeA, 0);
    vf c(colSizeA, 0);

    for (int i = 0; i < rowSizeA; i++){
        for (int j = 0; j < colSizeA; j++){
            vec2D[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < rowSizeA; i++){
        b[i] = B[i];
    }

    for (int i = 0; i < colSizeA; i++){
        c[i] = C[i];
    }

    Simplex simplex(vec2D, b, c);
    simplex.CalculateSimplex();

    return 0;
}

