#include "userInterface.h"
#include "myList.h"

int main() {
    CMyList DB;
    CUserInterface UI(DB);
    UI.run();

    return 0;
}
