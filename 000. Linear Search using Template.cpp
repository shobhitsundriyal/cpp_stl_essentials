#include <bits/stdc++.h>
using namespace std;

// This function only takes int array and int key and return (int) index
int Linear_search(int arr[], int n, int key){
	for (int i = 0; i<n; i++){
		if (arr[i] == key)
			return i;
	}
	return -1;
}

template <typename T> //generic template T
// This function only takes any type array and any type key, and return (int) index
int Generic_Linear_search(T arr[], int n, T key){
	for (int i = 0; i<n; i++){
		if (arr[i] == key)
			return i;
	}
	return -1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// code goes here
	int arr[] = {3,0,1,5,6,2,4};
	int size = sizeof(arr)/sizeof(int);
	cout<<Linear_search(arr, size, 6)<<endl;// Works fine, very good

	double d_arr[] = {1.0, 2.5, 604.5, 45.2};
	int d_size = sizeof(d_arr)/sizeof(double);
	//cout<<Linear_search(d_arr, d_size, 3.2);//This will throw error
	cout<<Generic_Linear_search(d_arr, d_size, 3.1)<<endl;// this give output -1 which is expected

	cout<<Generic_Linear_search(arr, size, 2);//op--> 5

	return 0;
}
