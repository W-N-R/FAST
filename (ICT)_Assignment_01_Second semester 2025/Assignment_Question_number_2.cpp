//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int numOfOccurrences(const char* sentence, const char* find) {
//    int count = 0;
//    int sentenceLength = strlen(sentence);
//    int findLength = strlen(find);
//
//    for (int i = 0; i <= sentenceLength - findLength; i++) {
//        bool match = true;
//        for (int j = 0; j < findLength; j++) {
//            if (sentence[i + j] != find[j]) {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    char sentence[100], find[20];
//    
//    cout << "Enter a sentence: ";
//    cin.getline(sentence, 100);
//    
//    cout << "Enter the word to find: ";
//    cin.getline(find, 20);
//    
//    int occurrences = numOfOccurrences(sentence, find);
//    cout << "The word '" << find << "' appears " << occurrences << " times in the sentence." << endl;
//    
//    return 0;
//}
