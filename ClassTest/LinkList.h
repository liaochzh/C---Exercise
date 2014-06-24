#include "Class.h"

class LinkList
{
	public:
		LinkList(int i, char c);
	    LinkList(LinkList &l);
	    ~LinkList();
	    bool Locate(int i);
	    bool Locate(char i);
	    bool Insert(int i=0, char c='0');//在当前结点之后插入结点
        bool Delete();//删除当前结点
        void Show();//显示链表所有数据
        void Destroy();//清除整个链表
	
	private:
        Node  head;//头结点
        Node* pcurrent;//当前结点指针
};

LinkList::LinkList(int i, char c):head(i, c)
{
	pcurrent = &head;
}

LinkList::LinkList(LinkList &l):head(l.head)//调用结点的拷贝构造函数来初始化head
{
    pcurrent = l.pcurrent;
}

bool LinkList::Locate(int i)
{
	Node *ptemp = &head;
	while(ptemp != NULL)
	{
        if (ptemp->readi() == i)
        {
        	pcurrent = ptemp;
        	return true;
        }
        ptemp = ptemp->readn();
	}
	return false;
}