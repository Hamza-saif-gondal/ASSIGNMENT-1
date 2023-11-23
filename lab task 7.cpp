//task 1
//Take 10 integer inputs from user and store them in an array and print them on screen
//#include <iostream>
//using namespace std;
//int main(){
//
//    int x=0,y=0;
//    int array [9]={ };               //ARRAY type = integer //No.of Elements = 9
//
//        while (x<10){                //WHILE loop for entering the value of elements in array 
//        cout<<" Enter the number: "; 
//		cin>>array[x]; 
//		x++;
//    }
//    cout<<"The Array is: ";          
//	while (y<10){                   //WHILE loop for getting the array
//	cout<< array [y] <<" ";
//	y++;
//    }
//
//return 0;
//}
//task 2
//#include <iostream>
//using namespace std;
//int main(){
//
//    int x = 0 ,product = 1,sum = 0;
//    int num[5];
//
//    while (x < 5) {
//    cout << "Insert number: " ;
//    cin >> num[x];
//    x++;
//    }
//    for (int n = 0 ; n < 5 ; n++){
//    product = product*num[n];
//    }
//    cout << "Product of all integers in array=" << product << endl;
//
//    for (int i = 0 ; i<5 ;i++){
//    sum = sum + num[i];
//    }
//    cout << "Sum of all integers in array=" << sum << endl;
//
//return 0;
//}

//task 3
//#include <iostream>
//using namespace std;
//int main () {
//    int x, y;
//    x=11;
//	y=11; 
//   
//    if (x%2!=0 && y%2!=0){
//    char array[x];
//    
//	    for (int j=0; j<=x;j++){
//        array[j]=' ';
//        }
//        for (int i=0;i<=x/2;i++){	
//        array[(y/2)+i]='*', array[(y/2)-i]='*';
//        cout<<array<<endl;
//        }
//        for (int i=(x/2)+1;i<x;i++){
//        array[i-1-(y/2)]=' ', array[(y/2)+y-i]=' ';
//        cout<<array<<endl;
//        }
//	}
//return 0;
//}
