// Iterartors.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Pedro Bianchini de Quadros

////////////////////////////////////////////////////////////////////////////////////////////
// Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson    //
////////////////////////////////////////////////////////////////////////////////////////////

#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

template<class InputIterator, class OutputIterator>
void CopyToEnd(InputIterator start, InputIterator end, OutputIterator out);
template<class ForwardIterator>
void Add10(ForwardIterator first, ForwardIterator last);
int mystrlen(char* str);
void reverse(char* str);
char* MyFind(char* str, char value);
void MySort();

int main()
{
    std::cout << "Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson\n";
    std::cout << "Pedro Bianchini de Quadros\n";

    char message[32];
    strcpy(message, "Studying iterators");

    for (int i = 0; i < strlen(message); i++)
    {
        std::cout << message[i];
    }
    std::cout << std::endl;
    std::cout << mystrlen(message);

    reverse(message);

    for (int i = 0; i < strlen(message); i++)
    {
        std::cout << message[i];
    }

    std::cout << std::endl;

    // Using Iterators istream
    cout << endl << "---- Using stream iterators ----" << endl;
    cout << "Try example: 1 2 3 a: ";

    istream_iterator<int, char> int_in(cin);
    int sum;

    sum = accumulate(int_in, istream_iterator<int, char>(), 0);
    cout << endl << "sum=" << sum << endl;

    // Using Iterators istream
    // ostream_iterator for stream cout
    ostream_iterator<int> intOut(cout, "\n");
    int numbers[3] = { 1, 2, 3 };

    copy(numbers, numbers + 3, intOut);

    cout << endl << "---- Using forward iterators ----" << endl;

    int i, data[10];
    ostream_iterator<int> outStream(cout, " ");

    for (int i = 0; i < 10; i++) data[i] = i + 3;
    Add10(data, data+10);
    copy(data, data + 10, outStream);
    cout << endl;

    cout << endl << "---- Using forward iterators : List ----" << endl;
    list<int>::iterator list_iter;
    list<int> list1;
    ostream_iterator<int> out_Stream(cout, " ");

    for (int i = 0; i < 10; i++)
    {
        list1.push_back(i);
    }

    copy(list1.begin(), list1.end(), out_Stream);
    cout << endl;

    list_iter = list1.begin();

    while (list_iter != list1.end())
    {
        cout << *list_iter++ << ' ';
    }
    cout << endl;
    
}

int mystrlen(char* str) 
{
    int len = 0;
    while ((*str++) != 0)
    {
        len++;
    }
        
    return len;
}

void reverse(char* str)
{
    char* endPt;
    int len;
    char temp;

    len = mystrlen(str);
    if (len < 2)
    {
        return;
    }

    endPt = str + len - 1;
    // ponteiro + (tamanho - 1) -> essa é a parte final do ponteiro.
    //     0    +   12 - 1

    while (str < endPt)
    {
        temp = *str;
        *str = *endPt;
        *endPt = temp;
        str++;
        endPt--;
    }
}

char* MyFind(char* str, char value)
{
    char* endPt, * result;
    int len;

    len = mystrlen(str);
    endPt = str + len;
    result = std::find(str, endPt, value);

    // Validations
    if (result == endPt)
    {
        return NULL;
    }
    else
    {
        return result;
    }

}

void MySort()
{
    char text[32];
    char* endPt;
    int len;

    strcpy(text, "adftyrtsgsff");

    len = mystrlen(text);
    endPt = text + len;
    std::sort(text, endPt);
}

template<class InputIterator, class OutputIterator>
void CopyToEnd(InputIterator start, InputIterator end, OutputIterator out)
{
    while (start != end)
    {
        *out++ = *start++;
    }
}

template<class ForwardIterator>
void Add10(ForwardIterator first, ForwardIterator last)
{
    while (first != last)
    {
        *first = *first + 10;
        first++;
    }
}