#include <iostream>
#include <string>
using namespace std;

/*��ĳ�Ա����*/

class SalesItem{

public:
        /// �ⲿ��Ա����������������
        void printAverage() const;

        /// ����ڲ���Ա����
        bool isSameItem(const SalesItem &rhs) const{
            //this����ǰ����this��ָ��
            return (this->isbn == rhs.isbn);
        }

public:
        std::string isbn;   //���
        unsigned allSold;   //����
        double revenue;     //����
};

/// �ⲿ��Ա����������������
void SalesItem::printAverage() const
{
    //this->isbn = "0000";  const�ź�������,�����޸ġ�
    cout << "** ƽ�� **\n";
}


int main()
{
    SalesItem item1, item2;

    item1.isbn = "201-7852-16";
    item1.allSold = 10;
    item1.revenue = 300.00;

    item2.isbn = "201-7852-16";
    item2.allSold = 15;
    item2.revenue = 450.00;

    if (item1.isSameItem(item2)){
        cout << "������item��  һ���ģ�\n";
    }else{
        cout << "������item�ǲ�һ���ģ�\n";
    }

    item1.printAverage();

    return 0;
}
