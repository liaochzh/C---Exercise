#include <iostream>

class Node
{
  public:
    Node();//构造函数的声明，构造函数是公有的成员函数，没有返回值类型
    Node(int i, char c='0');
    Node(int i, char c, Node *p, Node *n);

  	int  readi() const;
  	char readc() const;
    Node * readp() const;//读取上一个结点的位置
    Node * readn() const;//读取下一个结点的位置
  	bool set(int i);
  	bool set(char c);
  	bool setp(Node *p);
  	bool setn(Node *n);

  
  private:
  	int idata;
  	char cdata;
  	Node *prior;
  	Node *next;
};

Node::Node()
{
  idata = 0;
  cdata = '0';
  prior = NULL;
  next = NULL;
}

Node::Node(int i, char c)
{
  idata = i;
  cdata = c;
  prior = NULL;
  next = NULL;
}

Node::Node(int i, char c, Node *p, Node *n)
{
  idata = i;
  cdata = c;
  prior = p;
  next = n;
}

int Node::readi() const
{
  return idata;
}

char Node::readc() const
{
  return cdata;
}

Node* Node::readp() const
{
   return prior;
}
Node* Node::readn() const
{
   return next;
}

bool Node::set(int i)
{
  idata = i;
  return true;
}

bool Node::set(char c)
{
  cdata = c;
  return true;
}

bool Node::setp(Node *p)
{
  prior = p;
  return true;
}

bool Node::setn(Node *n)
{
  next = n;
  return true;
}