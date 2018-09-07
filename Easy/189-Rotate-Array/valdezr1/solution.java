

// Seems like you can take the size of the array, then add k to it.
// Then mod the sum to the size of the array. The result will be the
// New index of the current value.

// Acheived with O(n) space
int[] kStepRotation(int[] arr, int k) {
	int[] rotatedArr = arr;
	for (int i = 0; i < arr.length(); i++) {
		rotatedArr[(i + k + arr.length()) % arr.length()] = arr[i];  
	}
	return rotatedArr; 
}

// Acheived with O(1) space
void kStepRotation(int[] arr, int k) {
	int currentIndex = 0; 
	int displacedValue, priorDisplacedValue = arr[currentIndex];
	for (int i = 0; i < arr.length(); i++) {		
		displacedValue = arr[(currentIndex + k +  arr.length()) % arr.length()];
		arr[(currentIndex + k + arr.length()) % arr.length())] = priorDisplacedValue; 
		currentIndex = (currentIndex + k + arr.length()) % arr.length();
		priorDisplacedValue = displacedValue;
	}
		// When a value is displaced, we can find displaced value's 
		// Appropriate place rather than going in order of the arr
}
