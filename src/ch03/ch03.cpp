//
// Created by ArtoriasChan on 2020/5/20.
//
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// 3.1
int sum50To100() {
    int start = 50;
    int sum = 0;
    while (start <= 100) {
        sum += start;
        start++;
    }
    cout << "sum50To100: " << sum << "!" << endl;
    return sum;
}

int reverse10To0() {
    cout << "reverse10To0: ";
    for (int i = 10; i >= 0; --i) {
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}

void printBewteenTwoNums() {
    cout << "please enter two numbers: " << endl;
    int start, end;
    cin >> start >> end;
    if (start > end) {
        cout << "End number must be larger than start number!" << endl;
        return;
    }
    cout << "print numbers bewteen " << start << " and " << end << " : ";
    for (int i = start; i <= end; ++i) {
        cout << i << "\t";
    }
    cout << endl;
}

// 3.2.2
int readline() {
    string line;
    cout << "Please input: " << endl;
    while (getline(cin, line)) {
        cout << line << endl;
    }
    return 0;
}

int readword() {
    string word;
    cout << "Please input: " << endl;
    while (cin >> word) {
        cout << word << endl;
    }
    return 0;
}

int printLargestString() {
    string string1, string2;
    cin >> string1 >> string2;
    if (string1.size() != string2.size()) {
        if (string1.size() > string2.size()) {
            cout << string1 << endl;
        } else {
            cout << string2 << endl;
        }
    }
    return 0;
}

int printMergeString() {
    string concatenated;
    string word;
    while (cin >> word) {
        concatenated += word;
    }
    cout << "The concatenated string is " << concatenated << endl;
    return 0;
}

// 3.2.3
int replaceString(string str) {
    for (auto &c : str) {
        c = 'X';
    }
    cout << str << endl;
    return 0;
}

int replaceStringWithWhile() {
    string str("simple thing!");
    // while
    decltype(str.size()) i = 0;
    while (i < str.size()) str[i++] = 'X';
    cout << str << endl;

    // for
    for (i = 0; i < str.size(); str[i++] = 'Y');
    cout << str << endl;

    // I like range for.
    return 0;
}

int excludePunctuation() {
    string str(",,,s,,,imple thing!");
    string newStr;
    for (auto c : str) {
        if (!ispunct(c)) {
            newStr += c;
        }
    }
    cout << newStr << endl;
    return 0;
}

// 3.3.2
int readNumsAndSave() {
    int num;
    vector<int> ivec;
    while (cin >> num) {
        ivec.push_back(num);
    }
    return 0;
}

int readStringAndSave() {
    string str;
    vector<string> svec;
    while (cin >> str) {
        svec.push_back(str);
    }
    return 0;
}

// 3.3.3
int vectorSize() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    if (v1.size() == 0) cout << "v1.size() equals 0" << endl;
    if (v2.size() == 10) cout << "v2.size() equals 10" << endl;
    if (v3.size() == 10) cout << "v3.size() equals 10" << endl;
    if (v4.size() == 1) cout << "v4.size() equals 1" << endl;
    if (v5.size() == 2) cout << "v5.size() equals 2" << endl;
    if (v6.size() == 10) cout << "v6.size() equals 10" << endl;
    if (v7.size() == 10) cout << "v7.size() equals 10" << endl;
}

int upperWords() {
    vector<string> svec;
    for (string buffer; cin >> buffer; svec.push_back(buffer));
    for (auto &str : svec) for (auto &c : str) c = toupper(c);
    for (auto str: svec) {
        cout << str << endl;
    }
    return 0;
}