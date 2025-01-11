#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Arrays
	char vowel[5] {'a','e','i','o','u'};

	 cout << "First element of array is " << vowel[0] << endl;
	 cout << "Second element of array is " << vowel[1] << endl;
	 cout << "Third element of array is " << vowel[2] << endl;
	 cout << "Fourth element of array is " << vowel[3] << endl;
	 cout << "Fifth element of array is " << vowel[4] << endl << endl;

	 // Vectors
//	 vector <char> vowels (5);
//	 vector <int> test_scores (10);
	 vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
	 vector <int> test_scores {100, 98, 89, 85, 93};
	 vector <double> hi_tempretures (365, 80.0);
	  // Accessing vector elements in array form.
	 cout << "Accessing vector elements in array form." << endl;
	 cout << "First element of vector is " << test_scores[0] << endl;
	 cout << "Second element of vector is " << test_scores[1] << endl;
	 cout << "Third element of vector is " << test_scores[2] << endl;
	 cout << "Fourth element of vector is " << test_scores[3] << endl;
	 cout << "Fifth element of vector is " << test_scores[4] << endl << endl;

	  // Accessing vector elements in vector form.
	  cout << "Accessing vector elements in vector form." << endl;
	 cout << "First element of vector is " << test_scores.at(0) << endl;
	 cout << "Second element of vector is " << test_scores.at(1) << endl;
	 cout << "Third element of vector is " << test_scores.at(2) << endl;
	 cout << "Fourth element of vector is " << test_scores.at(3) << endl;
	 cout << "Fifth element of vector is " << test_scores.at(4) << endl << endl;

	 // Changing the contents of vector elements
	 cout << "Changing the contents of vector elements ";
	 cin >> test_scores.at(0);
	 cin >> test_scores.at(1);
	 cin >> test_scores.at(2);
	 cin >> test_scores.at(3);
	 cin >> test_scores.at(4);
	 cout << endl;

	 cout << "First element of vector is " << test_scores.at(0) << endl;
	 cout << "Second element of vector is " << test_scores.at(1) << endl;
	 cout << "Third element of vector is " << test_scores.at(2) << endl;
	 cout << "Fourth element of vector is " << test_scores.at(3) << endl;
	 cout << "Fifth element of vector is " << test_scores.at(4) << endl << endl;

	 // When do they grow as needed?
	 vector <int> score {500, 947, 561};
	 int new_score {0};
	 cout << "Please Enter next score: ";
	 cin >> new_score;
	 cout << "Vector before adding new score." << endl;
	 cout << "First element of vector is " << score.at(0) << endl;
	 cout << "Second element of vector is " << score.at(1) << endl;
	 cout << "Third element of vector is " << score.at(2) << endl << endl;
	 score.push_back(new_score);
	 cout << "Vector after adding new score." << endl;
	 cout << "First element of vector is " << score.at(0) << endl;
	 cout << "Second element of vector is " << score.at(1) << endl;
	 cout << "Third element of vector is " << score.at(2) << endl;
	 cout << "Fourth element of vector is " << score.at(3) << endl << endl;
	 cout << "Size of this vector is " << size(score);

	return 0;
}
