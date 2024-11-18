//#include <iostream>
//using namespace std;
//
//int main() {
//    int month;
//
//   
//    cout << "Enter month number (1 to 12): ";
//    cin >> month;
//
//    
//    switch (month) {
//    case 1:
//        cout << "January" << endl;
//        break;
//    case 2:
//        cout << "February" << endl;
//        break;
//    case 3:
//        cout << "March" << endl;
//        break;
//    case 4:
//        cout << "April" << endl;
//        break;
//    case 5:
//        cout << "May" << endl;
//        break;
//    case 6:
//        cout << "June" << endl;
//        break;
//    case 7:
//        cout << "July" << endl;
//        break;
//    case 8:
//        cout << "August" << endl;
//        break;
//    case 9:
//        cout << "September" << endl;
//        break;
//    case 10:
//        cout << "October" << endl;
//        break;
//    case 11:
//        cout << "November" << endl;
//        break;
//    case 12:
//        cout << "December" << endl;
//        break;
//    default:
//        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
//        break;
//    }
//
//    return 0;
//}


//Task -3
//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2; 
//    char operation;            
//
//    
//    cout << "Enter first number: ";
//    cin >> num1;
//
//    cout << "Enter an operator (+, -, *, /): ";
//    cin >> operation;
//
//    cout << "Enter second number: ";
//    cin >> num2;
//
//    
//    switch (operation) {
//    case '+':
//        cout << "Result: " << num1 + num2 << endl;
//        break;
//    case '-':
//        cout << "Result: " << num1 - num2 << endl;
//        break;
//    case '*':
//        cout << "Result: " << num1 * num2 << endl;
//        break;
//    case '/':
//       
//        if (num2 != 0) {
//            cout << "Result: " << num1 / num2 << endl;
//        }
//        else {
//            cout << "Error! Division by zero." << endl;
//        }
//        break;
//    default:
//        cout << "Error! Invalid operator." << endl;
//        break;
//    }
//
//    return 0;
//}
// Task-4

//#include <iostream>
//using namespace std;
//
//int main() {
//    int score;
//
//   
//    cout << "Enter your score (0 to 100): ";
//    cin >> score;
//
//   
//    if (score < 0 || score > 100) {
//        cout << " Please enter a score between 0 and 100." << endl;
//    }
//    else {
//       
//        switch (score / 10) {  
//        case 10:
//        case 9:
//            cout << "Grade: A" << endl;
//            break;
//        case 8:
//            cout << "Grade: B" << endl;
//            break;
//        case 7:
//            cout << "Grade: C" << endl;
//            break;
//        case 6:
//            cout << "Grade: D" << endl;
//            break;
//        case 5:
//        case 4:
//        case 3:
//        case 2:
//        case 1:
//        case 0:
//            cout << "Grade: F" << endl;
//            break;
//        default:
//            cout << "Error! Invalid score." << endl;
//        }
//    }
//
//    return 0;
//}

//Task-5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int days;
//
//   
//    cout << "Enter a number between 1 and 7 for days : ";
//    cin >> days;
//
//    
//    switch (days) {
//    case 1:
//        cout << "Monday" << endl;
//        break;
//    case 2:
//        cout << "Tuesday" << endl;
//        break;
//    case 3:
//        cout << "Wednessday" << endl;
//        break;
//    case 4:
//        cout << "Thursday" << endl;
//        break;
//    case 5:
//        cout << "Friday" << endl;
//        break;
//    case 6:
//        cout << "Saturday" << endl;
//        break;
//    case 7:
//        cout << "Sunday" << endl;
//        break;
//    default:
//        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
//        break;
//    }
//
//    return 0;
//}
////Task-6


