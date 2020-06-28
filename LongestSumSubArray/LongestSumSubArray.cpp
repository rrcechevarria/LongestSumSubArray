using namespace std;

Just a pseudocode


0 1 2 3 4 5 6 7 8 9 10
arr 1 2 3 4 5 6 7 8

arraylength = 8

left = 0 1 2 3
right = 0 1 2 3 4 5  6
total = 0 1 3 6 10 15 21 20 18 15
result[] = 0, 4
resultLen = 4
sum 15


int[] longestSum(arr, sum) {
	left = 0, right = 1
		total = 0
		result = -1
		resultLen = 0;

	if arr is empty
		return result;
	if arr length = 1 and arr[0] == sum
		return result = 0
	else
		retun result

		while right < arr.length{
			total += arr[right]

			while left < right && total > sum
				total -= arr[left]
				left++;
		}
			if total == sum{
				if (resultLen < (right - left)) {
					result[] = {left, right};
					resultLen = right - left;

				}
			}

				right++

}
return result;
}


int main() {
	int arr[] = { 1,2,3,4,5,0,0,0,6,7,8, };
	int sum = 15;
	int *result = longestSum(arr, sum);
}

