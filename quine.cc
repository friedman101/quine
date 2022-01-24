#include <iostream>
int main() {
    using namespace std;
    char q = 34;
    char c = 44;
    string str[21] = {
"#include <iostream>",
"int main() {",
"    using namespace std;",
"    char q = 34;",
"    char c = 44;",
"    string str[21] = {",
"    };",
"    for (int i = 0; i < 6; i++) {",
"        cout<<str[i]<<endl;",
"    }",
"    for (int i = 0; i < 6; i++) {",
"        cout<<q+str[i]+q+c<<endl;",
"    }",
"    for (int i = 6; i < 21; i++) {",
"        cout<<q+str[i]+q+c<<endl;",
"    }",
"    for (int i = 6; i < 21; i++) {",
"        cout<<str[i]<<endl;",
"    }",
"    return 0;",
"}",
    };
    for (int i = 0; i < 6; i++) {
        cout<<str[i]<<endl;
    }
    for (int i = 0; i < 6; i++) {
        cout<<q+str[i]+q+c<<endl;
    }
    for (int i = 6; i < 21; i++) {
        cout<<q+str[i]+q+c<<endl;
    }
    for (int i = 6; i < 21; i++) {
        cout<<str[i]<<endl;
    }
    return 0;
}
