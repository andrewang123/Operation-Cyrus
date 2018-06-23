// Pascal's Triangle - LC # 118
 
/*
    Pseudocode:
        1. Initialize as 2 arrays/vectors (prevArr, nextArr) of size n-1 and n, respectively
        2. Print the first two rows
        3. Take the second row and push the values into the prevArr
        4. For (n - 2) times:
            a. push 1 into nextArr (1 will always be the first element in each row)
            b. For the length of the prevArr - 1: 
                1) Add prevArr[i] and prevArr[i+1] and push result into nextArr
            c. push 1 into nextArr (1 will always be the last element in each row)
            d. Set prevArr to copy values of nextArr, and clear nextArr
    
    Analysis: 
        Space Complexity: O(n)
        Time Complexity: O(n^2)
    
    Notes: 
        Potential Dynamic Programming Solution if data within arrays are cached into a Hash.
        This would take O(n) Time and Space Complexity...I think. 
*/

// Seems like LC wants the solution to be returned as a vector of vectors (2d). 
// Here, focusing primarily on functionality


// n resembles the number of rows to be printed in pascals' triangle
void printPascal(int n){
    if (n <= 0){
        return;
    }
    else if (n == 1){
        cout << 1 << endl;
        return;
    }
    else {
        int result;
        cout << 1 << endl;
        cout << "1 1" << endl;
        // Initialize two vectors
        vector<int> prevVec = {1, 1};
        vector<int> nextVec;
        for(int i = 0; i < n; i++){
            nextVec.push_back(1);
            cout << 1;
            for(int i = 0; i < prevVec.size() - 1; i++){
                result = prevVec[i] + prevVec[i + 1];
                nextVec.push_back(result);
                cout << result;
            }
            nextVec.push_back(1);
            cout << 1;

            // Set prevVec to nextVec and clear nextVec
            prevVec = nextVec;
            nextVec = vector<int>();
        } 
    }
}
