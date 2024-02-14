#include <iostream>
#include <tchar.h>
using namespace std;

void main() {
    // 1
    //_TCHAR a[] = _TEXT("QWERTYUIOP4567803248972349320");
    //wcout << "Start: " << a << endl;
    //for (int i = 0; i < _tcslen(a); i++) {
    //    if (a[i] == _TEXT(' '))
    //        a[i] = _TEXT('\t');
    //}
    //wcout << "Result: " << a << endl;
    //system("pause");

    // 2
    //_TCHAR a[] = _TEXT("%$&%^*&^(*&)jdsfsldkfjipDSF;J@#%#$@@");
    //wcout << "Start: " << a << endl;
    //int bukvy = 0, tsifry = 0, simvoly = 0;
    //for (size_t i = 0; i < _tcslen(a); i++) {
    //    if (a[i] > 48 && a[i] < 57)
    //        tsifry++;
    //    else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
    //        bukvy++;
    //    else
    //        simvoly++;
    //}
    //wcout << "bukvy: " << bukvy << endl << "tsifry: " << tsifry << endl << "simvoly: " << simvoly << endl;
    //system("pause");
    

    // 3
    //_TCHAR a[] = _TEXT("Hello hola hi privet kak dela, Blala.");
    //wcout << "Start: " << a << endl;
    //int ñount = 0;
    //bool inWord = false;
    //for (int i = 0; i < _tcslen(a); i++) {
    //    if (iswalpha(a[i])) {
    //        if (!inWord) {
    //            inWord = true;
    //            ñount++;
    //        }
    //    }
    //    else { inWord = false; }
    //}
    //wcout << "Word count: " << ñount << endl;
    //system("pause");

    //4
    //setlocale(LC_ALL, "Russian");
    //_TCHAR a[] = _TEXT("×èâîáëèí");
    //wcout << "Start: " << a << endl;
    //int count = 0;
    //for (size_t i = 0; i < _tcslen(a); i++) {
    //    _TCHAR b = _totlower(a[i]);
    //    if (b == _TEXT('à') || b == _TEXT('å') || b == _TEXT('¸') || b == _TEXT('è') || b == _TEXT('î') ||
    //        b == _TEXT('ó') || b == _TEXT('û') || b == _TEXT('ý') || b == _TEXT('þ') ||
    //        b == _TEXT('ÿ')) {
    //        ++count;
    //    }
    //}
    //wcout << "Count: " << count << endl;
    //system("pause");

    // 5
    //bool isPalindrome(const _TCHAR*);

    //bool isPalindrome(const _TCHAR * c) {
    //    int length = _tcslen(c);
    //    for (int i = 0; i < length / 2; ++i) {
    //        if (c[i] != c[length - 1 - i])
    //            return false;
    //    }
    //    return true;
    //}

    //_TCHAR a[] = _TEXT("FGWSA");
    //wcout << "Start: " << a << endl;
    //if (isPalindrome(a))
    //    wcout << "It's a palindrome!" << endl;
    //else
    //    wcout << "It's not a palindrome!" << endl;

    //system("pause");
    //return 0;

    // 6
    //void removeSymbol(_TCHAR*, size_t);
    //void removeSymbol(_TCHAR * c, size_t l) {
    //    if (l >= _tcslen(c))
    //        return;
    //    for (size_t i = l; i < _tcslen(c); i++)
    //        c[i] = c[i + 1];
    //}

    //TCHAR a[] = _TEXT("Oh my god how are you make this!");
    //wcout << "Start: " << a << endl;
    //size_t posRemove = 0;
    //removeSymbol(a, posRemove);
    //wcout << "Removing position is " << posRemove << ", result: " << a << endl;
    //system("pause");
    //return 0;

    // 7
    //void removeAllElems(_TCHAR * c, _TCHAR toRemove) {
    //    size_t length = _tcslen(c);
    //    size_t ind = 0;
    //    for (size_t i = 0; i < length; i++) {
    //        if (c[i] != toRemove) {
    //            c[ind] = c[i];
    //            ind++;
    //        }
    //    }
    //    c[ind] = _TEXT('\0');
    //}

    //_TCHAR a[] = _TEXT("Oh my god how are you make this!");
    //_TCHAR r = _TEXT('e');
    //wcout << "Start: " << a << endl;
    //removeAllElems(a, r);
    //wcout << "Removing elem is " << r << ", result: " << a << endl;
    //system("pause");

    // 8
    //void insertCharacter(_TCHAR* c, size_t pos, _TCHAR ins) {
    //    int length = _tcslen(c);
    //    if (pos >= 0 && pos <= length) {
    //        for (int i = length; i > pos; i--) {
    //            c[i] = c[i - 1];
    //        }
    //        c[pos] = ins;
    //    }
    //}

    //_TCHAR a[] = _TEXT("Oh my god how are you make this!");
    //wcout << "Start: " << a << endl;
    //_TCHAR insElem = _T('E');
    //size_t posIns = 10;
    //insertCharacter(a, posIns, insElem);
    //wcout << "Integrated elem is " << insElem << ", result: " << a << endl;
}