#include <iostream>

using namespace std;

// Function Prototype
bool isPrime(int);
void limitedKeyboardPrinter(int, char);

void limitedKeyboardPrinter(int n, char c){
	
	/* 

		Psuedocode:
			1. Create an "isPrime(num)" helper function
				a. for i = 2; i < num; i++:
					1) if num % i == 0:
						a) return false
				b. return true 
			2. Check if n isPrime (consider 0?)
				a. If so, paste n times
				b. return
			3. Initialize a count to 0
			4. For i=n/2; till i < 4; i--: 
				a. Check if i isPrime
					1)If so:
						a) For i times:
							1. Paste
							2. Increment count
						b) Break out of loop
			5. Copy current output
			6. For n/count times:
				a. Paste

	*/

	// Check if n is prime, if so paste c for  n times
	if(isPrime(n)){
		for(i = 0; i < n; i++){
			std::cout << c;
		}
		return true;
	}
	else{
		int count = 0;
		string copy = "";
		// Any primes greater than n/2 will not be a multiple of n
		// Until i is less than 4 because, non-primes start at 4 (excluding 0)
		for(int i = n/2; i >= 4; i--){
			if(isPrime(i)){
				for(int j = 0; j < i; j++){
					std::cout << c;
					copy += c;
					count++;
				}
				break;
			}
		}
		// Current output to be appended and print n/count times
		for(int i = 0; i < n/count; i++){
			std::cout << copy;
		}
		
	}
	

}

// Returns true if a number is prime and false if not
// Takes in a number to check whether or not the number is a prime
bool isPrime(int num) {
	// Loop begins at 2 as primes have a multiple at 1 and themselves
		// In other words, moding the number at 1 will be 0 (i.e. anyNumber % 1 = 0)
		// and modding the number with iteself will be 0 (i.e. anyNumber % anyNumber = 0)
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return false;
		}
	}
	
	return true;
}





