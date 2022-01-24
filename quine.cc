#include <iostream>
int main() {
    using namespace std;
    char q = 34;
    char c = 44;
    string str[18] = {
"#include <iostream>",
"int main() {",
"    using namespace std;",
"    char q = 34;",
"    char c = 44;",
"    string str[18] = {",
"    };",
"    for (int i = 0; i < 6; i++) {",
"        cout<<str[i]<<endl;",
"    }",
"    for (int i = 0; i < 18; i++) {",
"        cout<<q+str[i]+q+c<<endl;",
"    }",
"    for (int i = 6; i < 18; i++) {",
"        cout<<str[i]<<endl;",
"    }",
"    return 0;",
"}",
    };
    for (int i = 0; i < 6; i++) {
        cout<<str[i]<<endl;
    }
    for (int i = 0; i < 18; i++) {
        cout<<q+str[i]+q+c<<endl;
    }
    for (int i = 6; i < 18; i++) {
        cout<<str[i]<<endl;
    }
    return 0;
}
