#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int shift = 3;

    cout << "Enter text: ";
    getline(cin, text);

    // Encrypt: move each character 3 steps forward
    for (int i = 0; i < text.size(); i++) {
        text[i] = text[i] + shift;
    }
    cout << "Encrypted: " << text << endl;

    // Decrypt: move each character 3 steps back
    for (int i = 0; i < text.size(); i++) {
        text[i] = text[i] - shift;
    }
    cout << "Decrypted: " << text << endl;

    return 0;
}