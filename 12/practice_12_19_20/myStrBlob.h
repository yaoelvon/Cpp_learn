#ifndef __MY_STR_BLOB_H__
#define __MY_STR_BLOB_H__
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <initializer_list>
#include <exception>

using namespace std;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
public:
	typedef vector<string>::size_type size_type;
	StrBlob() : data(make_shared<vector<string>>()) { }
	StrBlob(initializer_list<string> il) : 
		data(make_shared<vector<string>>(il)) { }

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string &front();
	const string &front() const;
	string &back();
	const string &back() const;
	//提供给StrBlobPtr的接口
	StrBlobPtr begin();
	StrBlobPtr end();

	int my_use_count() { return data.use_count(); }
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
		throw out_of_range(msg);
}

string &StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const string &StrBlob::front() const 
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string &StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

const string &StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

class StrBlobPtr {
	friend bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
	friend bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
public:
	StrBlobPtr() : curr(0) { }
	StrBlobPtr(StrBlob &a, size_t sz = 0) : 
		wptr(a.data), curr(sz) { }
	bool operator!=(const StrBlobPtr &p) { return p.curr != curr; }
	string &deref() const;//解引用
	StrBlobPtr &incr();//前缀递增
private:
	shared_ptr<vector<string>> check(size_t, const string &) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

inline
shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if(!ret)
	{
		throw runtime_error("unbound StrBlobPtr");	
	}
	if(i >= ret->size())
		throw out_of_range(msg);

	return ret;
}

inline string &StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

inline StrBlobPtr &StrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}
inline StrBlobPtr StrBlob::begin() 
{ 
	return StrBlobPtr(*this); 
};

inline StrBlobPtr StrBlob::end() 
{ 
	return StrBlobPtr(*this, data->size());

};

inline
bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if(l == r)
	{
		return (!r || lhs.curr == rhs.curr);
	}
	else
	{
		return false;
	}
}

inline
bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return !eq(lhs, rhs);
}

#endif
