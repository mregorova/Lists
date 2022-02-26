#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

typedef int data_t;

class l_elem {
public:
    l_elem* Next = nullptr;
    l_elem* Prev = nullptr;
};

class list {
private:
    l_elem* Head;
    l_elem* Tail;
    size_t  count;

public:

    bool pop_front();
    bool pop_back();
    bool delete_elem(l_elem* position);

    l_elem* push_front(data_t elem);
    l_elem* push_back(data_t elem);
    l_elem* insert_before(data_t elem, l_elem* position);
    l_elem* insert_after(data_t elem, l_elem* position);

    size_t size();

    void list_dump();
};

list::list():
     count(0),
     Head(nullptr),
     Tail(nullptr) {}

bool list::pop_front() {
    if (count == 0) {
        printf("There isn't any element to pop from front\n");

        return true;
    }

    else if (Head == Tail) {
        delete Head;

        Head = nullptr;
        Tail = nullptr;
        count = 0;

        return true;
    }

    Head = (Head)->Next;
    (Head->Prev)->Next = nullptr;
    delete Head->Prev;
    Head->Prev = nullptr;

    count--;

    return true;
}

bool list::pop_back() {
    if (count == 0) {
        printf("There isn't any element to pop back");

        return true;
    }

    else if (Head == Tail) {
        delete Tail;

        Head = nullptr;
        Tail = nullptr;
        count = 0;

        return true;
    }

    Tail = (Tail)->Prev;
    (Tail->Next)->Prev = nullptr;
    delete Tail->Next;
    Tail->Next = nullptr;

    count--;

    return true;
}

bool list::delete_elem(l_elem* position) {
    
}

l_elem*::push_front(data_t elem) {}

l_elem*::push_back(data_t elem) {}

l_elem*::insert_before(data_t elem, l_elem* position) {}

l_elem*::insert_after(data_t elem, l_elem* position) {}

int main()
{
    std::cout << "Hello World!\n";
}
