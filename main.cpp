#include <vector>


#include <iostream>
#include <iterator>
#include <algorithm>
//012,021,102,120,201,210
/*procedure next permutation(a1a2 . . . an: permutation of
{1, 2, . . . , n} not equal to n n - 1 . . . 2 1)
j := n - 1
while aj > aj+1
j := j - 1
{j is the largest subscript with aj < aj+1}
k := n
while aj > ak
k := k - 1
{ak is the smallest integer greater than aj to the right of aj}
interchange aj and ak
r := n
s := j + 1
while r > s
interchange ar and as
r := r - 1
s := s + 1*/
// swaps given index value x & y interchange the array

void interchange(int x, int y, std::vector<int> &array) {
	int temp1 = array[x];
	array[x] = array[y];
	array[y] = temp1;
// 	std::cout << "temp1 " << temp1 << std::endl;
// 	std::cout << "array[x]" << array[x] << " array[y]" << array[y] << std::endl;

}
void printArray(std::vector<int> &array){
    for (int i = 0; i < array.size(); i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
void interchangeRemaining(int start, std::vector<int> &array) {

    // std::cout << "Size " << array.size() << " start " << start << std::endl;
    int i = start + 1, j = array.size() - 1;
    while (i < j) {
        // std::cout << "called interchange with  " << i << " " << j << std::endl;
        interchange(i, j, array);
;
        i++;
        j--;
    }
  
}
void permutation(int n) {
	// J is the highest index  such that Array[j] < array[j+1]
	// K is the highest index such that Array[j] < array[k]
	// 0 1 2 3 4 5 6,,  j = (4,5)  (5< 6) && K = (3,4)
	std::vector<int> array;
	int j = -1;
	int k = 0;
	// first lets create a vector of size n-1 has n elements
	
	//array.resize(n);
	for (int i = 0; i <= n; i++) {
		array.push_back(i);
	}
    do{
        j = -1;
        // std::cout << "Constructed array " << std::endl;
        printArray(array);
	// STEP #1 of alg find ==> {j is the largest subscript with aj < aj+1}
	    for (int i = 0; i <= n-1 ; i++) {
		    if (array[i] < array[i + 1]) {
			    j = i;
		    }
	    }
	// STEP # 2  {ak is the smallest integer greater than aj to the right of aj}
        if(j != -1){
            for (int i = 0; i <= n; i++) {
		        if (array[j] < array[i]) {
			        k = i;
		        }
	        }
	    // Step # 3 interchange arra[j] & array [k]
	    interchange(j, k, array);
        // printArray(array);
        interchangeRemaining(j, array);
        }
        
	// Step # 4 interchange the remaning... from J to the START OF THE ARRAY.
        // interchangeRemaining(j, array);
    }while(j != -1);
}


// main method to call and read in input from user between N 1-9 
// no edge cases
int main() {
	std::cout << "Please enter N value 1-9 :" << std::endl;
	int n;
	std::cin >> n;
	permutation(2);
	

}