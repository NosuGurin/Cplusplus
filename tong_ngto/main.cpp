/*Số nguyên tố là số chỉ chia hết cho một và chính nó.
Bạn hãy cho biết số lượng tối thiểu các số nguyên tố có một chữ số mà tổng của chúng bằng X.
Hay nói cách khác, hãy tìm cách phân tích X thành tổng của các số nguyên tố có một chữ số mà số lượng số hạn là nhỏ nhất.
Dữ liệu nhập: Dòng đầu tiên chứa một số nguyên T - số lượng test case (T ≤ 100).
T dòng tiếp theo, mỗi dòng chứa một số nguyên X (X ≤ 106).
Dữ liệu xuất: Với mỗi dòng, xuất ra số lượng nhỏ nhất tìm được.
Nếu như không thể phân tích X thành tổng các số nguyên tố có 1 chữ số thì xuất ra -1.*/
#include<iostream>

using namespace std;

int main()
{
    int n,x;
    int du=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)  cout<<-1;

        else
        {
            du=x%7; // ly do dề yêu cầu là các số nguyên tố 1 chữ số 2,3,5,7;
            switch(du)
            {
                case 0: cout<<x/7<<endl;
                    break;
                case 1:
                case 2:
                case 3:
                case 5: cout<<x/7 +1<<endl;
                    break;
                case 4:
                case 6: cout<<x/7 +2<<endl;
                    break;
            }

        }
    }
    return 0;
}
