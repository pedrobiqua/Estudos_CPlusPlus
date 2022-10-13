// DesignPatters_State.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Name: Pedro Bianchini de Quadros

////////////////////////////////////////////////////////////////////////////////////////////////
// Reference: https://refactoring.guru/pt-br/design-patterns/state/cpp/example                //
////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

class State
{
protected:
	Context* context_;
public:
	virtual ~State();

	void set_Context(Context* context) 
	{
		this->context_ = context;
	}

	virtual void Handle1() = 0;
	virtual void Handle2() = 0;
};

State::~State(){}

class Context
{
public:
	// TODO
	Context(State* state) : state_(nullptr) 
	{
		
	}
	~Context() 
	{
		delete state_;
	}

	void TransitionTo(State* state) 
	{
		std::cout << "Context: Transition to" << typeid(*state).name() << ".\n";
		if (this->state_ != nullptr)
		{

		}
	}

private:
	State* state_;

};

int main()
{
    std::cout << "Hello World!\n";
}
