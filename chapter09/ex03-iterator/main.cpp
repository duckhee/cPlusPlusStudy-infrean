#include "UserInterface.h"
#include "MyListEx.h"
#include "UserData.h"

int main() {
    MyListEx DB(new UserData("Dummy", "Head"));
    UserInterface UI(DB);
    UI.run();
}
