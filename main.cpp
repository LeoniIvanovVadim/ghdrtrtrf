#include<iostream>
#include<ctime>

using namespace std;
/**
*@brief конструктор по умолчанию
*/
class MyStack {
private:
    int size = -1;
    int mus[100];
public:
    /**
    *@brief конструктор по умолчанию
    */
    MyStack() {}
    /**
    * @brief  добавление нового элемента в стек
    * @param elem добавленный элемент
    */
    void push(int elem) {
        mus[size + 1] = elem;
        size++;
    }
    int  top()      { return mus[size];    }
    /**
    *@brief удаляет верхний элемент стека
    */
    void pop()      { size--;              }
    bool isEmpty()  { return(size == -1);  }
    int  getSize()  { return size;         }
};

int main() {
    srand(time(NULL));
    MyStack st;
    for (int i = 0; i < 10; i++) {
        int tmp = rand() % 20;
        cout << tmp << " ";
        st.push(tmp);
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << st.isEmpty() << endl;
}
