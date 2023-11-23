//NOTE :
//Programme in this C++ are a bit different from the attached document bcuz compilation and running was done online where i modified it a little bit.
////task1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num = 0;
//	cout <<"Enter the number :";
//	cin >> num;
//	for (int i = 1; i <= num; i++){
//	    if (num % i == 0){
//		cout << i << " " ;
//	    }
//	}
//	return 0;
//}

//task 2 
//Out put of the programme is x=5, y=10

////task 3
//#include <iostream>
//using namespace std;
//int main(){
//	
//	int num = 0;
//	cout << "Enter a number" ;
//	cin >> num;
//	if (num > 10 && num <= 20){
//	cout << 1;
//	}
//	    else{
//		cout << 0;
//	}
//return 0;
//}

////task 4
//#include <iostream>
//using namespace std;
//int main(){
//	int N = 0 ;
//	int count = 2;
//	int i = 1;
//	int largestPrime = 1;
//	bool isPrime = true;
//	
//	cout << "Enter the number : ";
//	cin >> N;
//
//	while (count <= N)
//	{
//		isPrime = true;
//		i = 2;
//		while (i < count && isPrime == true){
//		if (!(count % i == 0)){
//		isPrime = true;
//		}
//			else{
//			isPrime = false;
//			}
//		i++;
//		}
//		if (isPrime == true)
//		{
//			largestPrime = count;
//		}
//		count++;
//	}
//cout << "The largest prime number is " << largestPrime << endl;
//return 0;
//}

////task 5
//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string a;
//	string b;
//	cin >> a;
//	cin >> b;
//	if (a == b)
//	{
//		reverse(a.begin(), a.end());
//	}
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

//task 6
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 0;
//	cout << "Enter the number\n";
//	cin >> num;
//	int quotient = 0;
//	int divisor = 0;
//	cout << "Enter the divisor\n";
//	cin >> divisor;
//	while (num >= divisor)
//	{
//		num -= divisor;
//		quotient++;
//	}
//	cout << "The answer is " << quotient << endl;
//	return 0;
//}

//task 7
//#include <iostream>
//using namespace std;
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    cin>> input ;
//
//    string result = "";
//
//    for (char c : input) {
//        if (result.find(c) == string::npos) {
//            result += c;
//        }
//    }
//
//    cout << "The string without duplicate characters is: " << result << endl;
//
//    return 0;
//}

////task 8
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a[] = { 1,2,3,4,5 };
//    int size = 5;
//    
//    a[size]=1;
//    a[size+1]=2;
//    a[size+2]=3;
//    a[size+3]=4;
//    a[size+4]=5;
//    
//    for (int i = 0; i < size+5 ; i++){
//    cout << a[i] << " " <<endl ;
//    }
//return 0;
//}

////task 9
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	int num ;
//
//	bool found = false;
//	cout << "Enter an INTEGER :" <<endl;
//	cin >> num;
//	
//	cout << "Enter the numbers of the array:"<<endl;
//	//Enter the values of elements of array
//	for (int i = 0; i < 10; i++){
//	cin >> a[i];
//	}
//	for (int i = 0; i < 10; i++){
//		for (int j = 0; j < 10; j++){
//			for (int k = 0; k < 10; k++){
//				if (a[i] + a[j] + a[k] == num){
//				found = true;
//				}
//			}
//		}
//	}
//	if (!found){
//		cout << "Triplet not found" << endl;
//	}
//	else{
//    cout << "Triplet found";
//	}
//return 0;
//}

//task 10
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[6];
//	cout << "Enter the array of 6 integers:"<<endl;
//	for (int i = 0; i < 6; i++)//The algorithm starts by comparing the first two elements of the array.
//	{
//	cin >> a[i];
//	}
//	for (int j = 0; j <= 6; j++)
//	{
//		for (int k = 0; k < 4; k++)
//		{
//			if (a[k] > a[k + 1])//If the first element is greater than the second element, they are swapped.
//			{
//				int temp;
//				temp = a[k];
//				a[k] = a[k + 1];
//				a[k + 1] = temp;
//			}//This continues until the entire array is sorted
//		}
//	}
//	cout << "The BUBBLE sorted array is :" << endl;
//	for (int x = 0;x < 6; x++)
//	{
//		cout << a[x] << endl;
//	}
//	return 0;
//}


