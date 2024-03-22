#include <Windows.h>
// #include <winbase.h>
#include <winuser.h>
// #include <iostream>

// using namespace std;

int main(){
    // cerr << WinExec("rundll32.exe user32.dll,LockWorkStation", SW_NORMAL) << endl;
    // printf(LockWorkStation() ? "Success\n" : "Failed\n");
    // return 0;
    return(!LockWorkStation());
}