#include <iostream>

struct node
{
	char data;  // 用于存放字符数据
	node *next; // 用于指向下一个结点
};

/**
 * 创建链表的函数，返回表头
 */
node* create();

/**
 * 遍历链表的函数
 * @param head 链表表头
 */
void showList(node *head);

/**
 * 查找链表
 * @param head 链表表头
 * @param keyWord 搜索关键字
 */
node* search(node *head, char keyWord);

/**
 * 根据关键字 插入结点
 * @param head 链表表头
 * @param keyWord 关键字
 * @param newData 新结点数据
 */
void insert(node * &head, char keyWord, char newData);

/**
 * 根据关键字 删除结点
 * @param head 链表表头
 * @param keyWord 关键字
 */
void deleteNode(node * &head, char keyWord);

/**
 * 删除链表
 * @param head 链表表头
 */
void destroy(node * &head);

int main(int argc, char const *argv[])
{
    node* head = create();
    
    
    char temp; //用于存放从键盘输入的字符
    do 
    {
        std::cout << "\nPlease input a code:" << std::endl;
        std::cout << " show List with 'l'" << std::endl;
        std::cout << " search with 's'" << std::endl;
        std::cout << " insert with 'i'" << std::endl;
        std::cout << " delete Node with 'd'" << std::endl;
        std::cout << " end with '#'" << std::endl;
        
        std::cin >> temp;

        if (temp == 'l')
        {
            showList(head);
        } 
        else if (temp == 's')
        {
            std::cout << "\nPlease input search keyWord:" << std::endl;
            char keyWord;
            std::cin >> keyWord;
            node *n = search(head, keyWord);
            if (n != NULL) 
                std::cout << "找到相关的结点" << std::endl;
            else 
                std::cout << "找不到相关的结点" << std::endl;
        }
        else if (temp == 'i')
        {
            std::cout << "\nPlease input keyWord:" << std::endl;
            char keyWord;
            std::cin >> keyWord;
            std::cout << "Please input new data:" << std::endl;
            char newdata;
            std::cin >> newdata;
            insert(head, keyWord, newdata);
        }
        else if (temp == 'd')
        {
            std::cout << "\nPlease input keyWord:" << std::endl;
            char keyWord;
            std::cin >> keyWord;
            deleteNode(head, keyWord);
        }
        else if (temp == '#')
        {
            destroy(head);
        }
        else 
        {
            std::cout << "\nInput code is wrong" << std::endl;
        }

    } while(temp != '#');

	return 0;
}

node* create()
{
	node *head = NULL; //表头指针，一开始没有任何结点，所以为NULL
	node *pEnd = head; //表为指针，一开始没有任何结点，所以指向表头
    node *pS; //创建新结点时使用的指针
    char temp; //用于存放从键盘输入的字符

    std::cout << "Please input a string end with '#':" << std::endl;

    do
    {
    	std::cin >> temp;

        if (temp != '#') {//如果输入的字符不是结尾符#，则建立新结点
         pS = new node;//创建新结点
         pS->data = temp;//新结点的数据为temp
         pS->next = NULL;//新结点将成为表尾，所以next为NULL
        
         if (head == NULL) {//如果链表还没有任何结点存在
            head = pS;//则表头指针指向这个新结点
         } else {
            pEnd->next = pS;//把这个新结点连接在表尾
         }

         pEnd = pS;//这个新结点成为了新的表尾
        }

    } while (temp != '#'); //一旦输入了结尾符，则跳出循环

    return head;
}

void showList(node *head)
{
    node *pRead = head;
    std::cout << "\nThe data of the link list are:" << std::endl;

    while(pRead != NULL) {
    	std::cout << pRead->data << " ";
    	pRead = pRead->next;
    }
   std::cout << std::endl;
}

node* search(node *head, char keyWord)
{
    node *pRead = head;
    while(pRead != NULL) {
        if (pRead->data == keyWord) {
            return pRead; //如果当前结点的数据和查找的数据相符,则返回当前结点的指针
        }
        pRead = pRead->next; //数据不匹配，pRead指针向后移动，准备查找下一个结点
    }
    return NULL;
}

void insert(node * &head, char keyWord, char newData)
{
    node *newnode = new node;//新建结点
    newnode->data = newData;//newdata是新结点的数据

    node *pGuard = search(head, keyWord);//pGuard是插入位置前的结点指针

    if (head == NULL || pGuard == NULL)
    {
        newnode->next = head;//先连
        head = newnode;//后断
    } else {
        newnode->next = pGuard->next;//先连
        pGuard->next = newnode;//后断
    }
}

void deleteNode(node * &head, char keyWord)
{
    node *p = NULL;

    if (head != NULL)
    {
        if (head->data == keyWord)
        {
            p = head;
            head = p->next;

        } else {
          node *pGuard = head;
          while(pGuard->next != NULL) {
            if (pGuard->next->data == keyWord)//如果pGuard后继结点数据符合关键字
            {
               p = pGuard->next;//pGuard后继结点是待删除结点 
               pGuard->next = p->next;//先连
               break;//结束循环
            } 

            pGuard = pGuard->next;//pGuard指针向后移动
          }
        } 
    }

    if (p != NULL)
    {
        delete p;//后断
        std::cout << "The deleted node is " << keyWord << std::endl;
    } else {
        std::cout << "The keyword node is not found or the link list is empty!" << std::endl;
    }
}

void destroy(node * &head)
{
    node *pRead;

    while(head != NULL) {
    	pRead = head;
        head = head->next;
    	delete pRead;
    }

    std::cout << "\nThe link list has been deleted!" << std::endl;
}
