// muhammad naim bin abdullah         muhammad mukhritz al iman bin mohd raffi
// A23CS0134                          A23CS0250

#include <iostream>
using namespace std;

int main() {
    string letter_grade;

    cout << "Enter your letter grade: ";
    cin >> letter_grade;

    if (letter_grade == "A")
    {
	
        cout << "Excellent!";
    }
    else if (letter_grade == "B")
    {
	      cout << "Very good!";
    }
    else if (letter_grade == "C")
      {
	  cout << "Good";
}
	
    else if (letter_grade == "D")
    {
		    cout << "Adequate";
    }
	else
    {
	cout << "Fail";
    }

    return 0;
}


