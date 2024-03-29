#include <iostream>
#pragma warning(disable : 4996)

////////////////////////////////////////////////////////////////////////////////////////////
//                                  Studyng design patters                                //
// Reference : https://sourcemaking.com/design_patterns/abstract_factory/cpp/before-after //
////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;

/**
 * Abstract base product. It should define an interface
 * which will be common to all products. Clients will
 * work with products through this interface, so it
 * should be sufficient to use all products.
 */
class Widget {
public:
    virtual void draw() = 0;
};

/**
 * Concrete product family 1.
 */
class LinuxButton : public Widget {
public:
    void draw() { cout << "LinuxButton\n"; }
};
class LinuxMenu : public Widget {
public:
    void draw() { cout << "LinuxMenu\n"; }
};

/**
 * Concrete product family 2.
 */
class WindowsButton : public Widget {
public:
    void draw() { cout << "WindowsButton\n"; }
};
class WindowsMenu : public Widget {
public:
    void draw() { cout << "WindowsMenu\n"; }
};

/**
 * Concrete product family 3.
 */
class MacButton : public Widget {
public:
    void draw() { cout << "MacButton\n"; }
};
class MacMenu : public Widget {
public:
    void draw() { cout << "MacMenu\n"; }
};

/**
 * Abstract factory defines methods to create all
 * related products.
 */
class Factory {
public:
    virtual Widget* create_button() = 0;
    virtual Widget* create_menu() = 0;
};

/**
 * Each concrete factory corresponds to one product
 * family. It creates all possible products of
 * one kind.
 */
class LinuxFactory : public Factory {
public:
    Widget* create_button() {
        return new LinuxButton;
    }
    Widget* create_menu() {
        return new LinuxMenu;
    }
};

/**
 * Concrete factory creates concrete products, but
 * returns them as abstract.
 */
class WindowsFactory : public Factory {
public:
    Widget* create_button() {
        return new WindowsButton;
    }
    Widget* create_menu() {
        return new WindowsMenu;
    }
};

/**
 * Concrete factory creates concrete products, but
 * returns them as abstract.
 */
class MacFactory : public Factory {
public:
    Widget* create_button() {
        return new MacButton;
    }
    Widget* create_menu() {
        return new MacMenu;
    }
};

/**
 * Client receives a factory object from its creator.
 *
 * All clients work with factories through abstract
 * interface. They don't know concrete classes of
 * factories. Because of this, you can interchange
 * concrete factories without breaking clients.
 *
 * Clients don't know the concrete classes of created
 * products either, since abstract factory methods
 * returns abstract products.
 */
class Client {
private:
    Factory* factory;

public:
    Client(Factory* f) {
        factory = f;
    }

    void draw() {
        Widget* w = factory->create_button();
        w->draw();
        display_window_one();
        display_window_two();
    }

    void display_window_one() {
        Widget* w[] = {
            factory->create_button(),
            factory->create_menu()
        };
        w[0]->draw();
        w[1]->draw();
    }

    void display_window_two() {
        Widget* w[] = {
            factory->create_menu(),
            factory->create_button()
        };
        w[0]->draw();
        w[1]->draw();
    }
};

/**
 * Now the nasty switch statement is needed only once to
 * pick and create a proper factory. Usually that's
 * happening somewhere in program initialization code.
 */
int main() {
    Factory* factory;
    char operationSystem[100];
    char nameOperationSystem[20];
    char copyNameOperatingSystem[20];

    cout << "What is your operating system?" << '\n';
    cin >> operationSystem;
    cout << "Make your scream" << '\n';

    int i = 0;
    while (operationSystem[i] != '\0')
    {
        nameOperationSystem[i] = tolower(operationSystem[i]);
        i++;
    }

    nameOperationSystem[i++] = '\0';

    strcpy(copyNameOperatingSystem, nameOperationSystem);
    

    if (operationSystem != NULL)
    {
        if (strcmp(copyNameOperatingSystem, "linux") == 0)
        {
            factory = new LinuxFactory;
        }
        else if (strcmp(copyNameOperatingSystem, "windows") == 0)
        {
            factory = new WindowsFactory;
        }
        else if (strcmp(copyNameOperatingSystem, "mac") == 0)
        {
            factory = new MacFactory;
        }
        else
        {
            cout << "Nao existe esse SO" << '\n';
            factory = NULL;
        }

        if (factory != NULL)
        {
            Client* c = new Client(factory);
            c->draw();
        }
    }

    return 1;
}