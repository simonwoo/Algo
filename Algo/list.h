#ifndef __ALGO_DLIST__
#define __ALGO_DLIST__

#include <vector>
using namespace std;

/**@remarks
*Types of linked lists.
*1. Linear linked lists
*2. Circular linked lists.
*3. Double linked lists.
*4. Circular double linked lists.
*5. others: xorlist
*/


struct dlist_node{
	int d;
	dlist_node* next;
	dlist_node* prev;
	dlist_node(int n):d(n){}
};

///@brief A HEAD_TAIL Double Linked List
class dlist{
	dlist_node* psentinel;// no need for front end

	size_t lsize;

	void initialize();
public:

	dlist();

	dlist(int* p,int* q);
	dlist(int* p,int size);
	dlist(const vector<int>& v);

	~dlist();

	/// @brief pass the end, which is the same as the sentinel in this case
	dlist_node* end();
	dlist_node* begin();

	size_t size();

	///@brief push new node as the next of sentinel
	void push_front(int n);
	void push_front(int* p,int* q);


	/// @brief push new node as the previous of sentinel\n
	/// A.next=B then B.prev=A, they always appear as a pair
	void push_end(int n);

	/// @brief swap pointer prev and next for every node including sentinel
	void reverse();
	static void test();
};

///@brief A Circular Double Linked List
class dclist{
	dlist_node* psentinel;// no need for front end

	size_t lsize;

	void initialize();
public:

	dclist();

	dclist(int* p,int* q);
	dclist(int* p,int size);
	dclist(const vector<int>& v);

	~dclist();

	/// @brief pass the end, which is the same as the sentinel in this case
	dlist_node* end();
	dlist_node* begin();

	size_t size();

	///@brief push new node as the next of sentinel
	void push_front(int n);
	void push_front(int* p,int* q);


	/// @brief push new node as the previous of sentinel\n
	/// A.next=B then B.prev=A, they always appear as a pair
	void push_end(int n);

	/// @brief swap pointer prev and next for every node including sentinel
	void reverse();
	static bool test();
};

struct slist_node{
	int d;
	slist_node* next;
	slist_node(int n):d(n){}
};

///@brief A HEAD_TAIL Single Liked List with a head only
class slist
{
public:
	slist();
	slist(int* p,int* q);
	slist(int* p,int size);
	slist(const vector<int>& v);
	~slist();

	///@brief push new node as the next of sentinel
	void push_front(int n);
	void push_front(int* p,int* q);

	static bool test();

	slist_node* end();
	slist_node* begin();

private:
	slist_node* head;
	slist_node* tail;
	size_t lsize;

	
};

///@brief A Circular Single Liked List with a head only
class sclist
{
public:
	sclist();
	sclist(int* p,int* q);
	sclist(int* p,int size);
	sclist(const vector<int>& v);
	~sclist();

	///@brief push new node as the next of sentinel
	void push_front(int n);
	void push_front(int* p,int* q);

private:
	slist_node* sentinel;
	size_t lsize;
};


#endif