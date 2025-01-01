### **Basic String Operations**

#### 1. **Concatenation**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string result = s1 + " " + s2;
    cout << result << endl;
}
```

#### 2. **Access Characters**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    char first = s[0];
    char last = s.back();
    cout << "First: " << first << ", Last: " << last << endl;
}
```

#### 3. **String Comparison**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "apple";
    string s2 = "banana";
    if (s1 < s2) cout << s1 << " comes before " << s2 << endl;
    // Output: apple comes before banana
}
```

### **String STL Methods**

#### 4. **Substring Extraction**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    string sub = s.substr(6, 5); // Start at index 6, take 5 characters
    cout << sub << endl; // Output: World
}
```

#### 5. **Find and Replace**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "The quick brown fox";
    size_t pos = s.find("brown"); // Find substring "brown"
    if (pos != string::npos) {
        s.replace(pos, 5, "red"); // Replace "brown" with "red"
    }
    cout << s << endl; // Output: The quick red fox
}
```

#### 6. **Erase Characters**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcdef";
    s.erase(2, 3); // Remove 3 characters starting from index 2
    cout << s << endl; // Output: abf
}
```

#### 7. **Insert Characters**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    s.insert(5, " World");
    cout << s << endl; // Output: Hello World
}
```

#### 8. **String to Number Conversion**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string numStr = "1234";
    int num = stoi(numStr); // Convert to int
    double d = stod("123.45"); // Convert to double
    cout << "Integer: " << num << ", Double: " << d << endl;
}
```

---

### **Algorithm Examples**

#### 9. **Reverse a String**

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << s << endl; // Output: olleH
}
```

#### 10. **Sort Characters**

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "dcba";
    sort(s.begin(), s.end());
    cout << s << endl; // Output: abcd
}
```

#### 11. **Count Characters**

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "hello world";
    int count = count(s.begin(), s.end(), 'l');
    cout << "Count of 'l': " << count << endl; // Output: 3
}
```

---

### **String Tokenization**

#### 12. **Split by Delimiter**

```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "split by space";
    stringstream ss(s);
    string token;
    vector<string> tokens;
    while (ss >> token) {
        tokens.push_back(token);
    }
    for (const auto& word : tokens) {
        cout << word << endl;
    }
}
```

#### 13. **Split by Custom Delimiter**

```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s = "apple,banana,grape";
    stringstream ss(s);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ',')) { // Split by ','
        tokens.push_back(token);
    }
    for (const auto& word : tokens) {
        cout << word << endl;
    }
}
```

---

### **Advanced Manipulations**

#### 14. **Joining Strings**

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    vector<string> words = {"Hello", "World"};
    ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) oss << " "; // Add space between words
        oss << words[i];
    }
    cout << oss.str() << endl; // Output: Hello World
}
```

#### 15. **Convert Case**

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "HeLLo WoRLd";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl; // Output: hello world

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl; // Output: HELLO WORLD
}
```

---

### **Conclusion**

While string manipulation in C++ may seem verbose compared to higher-level languages, the **`string`** class and **STL** algorithms provide robust and efficient tools for managing strings in diverse scenarios. By combining STL methods and algorithms, you can handle most string-related tasks effectively.
