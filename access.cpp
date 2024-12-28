#include <iostream>
using namespace std;

class Base {
private:
    int private_member;

protected:
    int protected_member;

public:
    int public_member;

    Base() {
        private_member = 1;
        protected_member = 2;
        public_member = 3;
    }

    void showBase() {
        cout << "Base Class Members: \n";
        cout << "Private: " << private_member << endl;
        cout << "Protected: " << protected_member << endl;
        cout << "Public: " << public_member << endl;
    }
};

// Public inheritance
class DerivedPublic : public Base {
public:
    void showDerivedPublic() {
        // private_member is NOT accessible
        // protected_member is accessible as protected
        // public_member is accessible as public
        cout << "DerivedPublic: Protected: " << protected_member << endl;
        cout << "DerivedPublic: Public: " << public_member << endl;
    }
};

// Protected inheritance
class DerivedProtected : protected Base {
public:
    void showDerivedProtected() {
        // private_member is NOT accessible
        // protected_member is accessible as protected
        // public_member is accessible as protected
        cout << "DerivedProtected: Protected: " << protected_member << endl;
        cout << "DerivedProtected: Public (now Protected): " << public_member << endl;
    }
};

// Private inheritance
class DerivedPrivate : private Base {
public:
    void showDerivedPrivate() {
        // private_member is NOT accessible
        // protected_member is accessible as private
        // public_member is accessible as private
        cout << "DerivedPrivate: Protected (now Private): " << protected_member << endl;
        cout << "DerivedPrivate: Public (now Private): " << public_member << endl;
    }
};

int main() {
    Base base;
    base.showBase();

    DerivedPublic obj1;
    obj1.showDerivedPublic();
    cout << "Accessing public_member directly from DerivedPublic: " << obj1.public_member << endl; // Accessible

    DerivedProtected obj2;
    obj2.showDerivedProtected();
    // cout << obj2.public_member; // Error: Not accessible

    DerivedPrivate obj3;
    obj3.showDerivedPrivate();
    // cout << obj3.public_member; // Error: Not accessible

    return 0;
}
