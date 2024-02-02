//感谢《数据结构（C++语言版）》提供的代码

#include"..\..\..\List\List\template-of-List\List.hpp"

template <typename T> class Queue : public List<T> {
public:
	void enqueue(T const& e) { this->insertAsLast(e); }
	T dequeue() { return this->remove(this->first()); }
	T& front() { return this->first()->data; }
};
