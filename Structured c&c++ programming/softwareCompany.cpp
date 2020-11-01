#include<iostream>
#include<string>
#include<vector>

using namespace std;

int n;

class softwareCompany
{

private:
    int fund;
    int dev_limit=10;
    vector<string> developers;
    int project_count=0;

public:

    string name;
    string location;

    softwareCompany(string s,string t,int num)
    {
        name=s;
        location=t;
        fund=num;
    }

    void setFund(int num)
    {
        fund=num;
    }

    int getFund()
    {
        return fund;
    }

    bool hireDeveloper(string dev)
    {
        if(developers.size()>=dev_limit)
            return false;
        developers.push_back(dev);
        return true;
    }

    void printDevelopers()
    {
        for(int i=0;i<developers.size();i++)
        {
            cout<<developers[i]<<endl;
        }
    }

    bool makeAndroidApp(int cost,int payment)
    {
        if(fund<cost)
        {
            cout<<"We can't make this project."<<endl;
            return false;
        }
        cout<<"We are making the app."<<endl;
        cout<<"............."<<endl;
        cout<<"We have made the app."<<endl;

        fund=fund-cost+payment;
        project_count++;
        if(project_count%3==0)
            giveSalary();
        return true;
    }

    void giveSalary(int salary)
    {

        for(int i=0;i<developers.size();i++)
        {
            fund=fund-salary;
        }

    }

};

int main()
{

    softwareCompany sc("Google","UK",1000000);

    cout<<sc.name<<endl;

    cout<<sc.getFund()<<endl;

    sc.setFund(50);

    cout<<sc.getFund()<<endl;

    cout<<sc.hireDeveloper("Subna")<<endl;
    cout<<sc.hireDeveloper("Samia")<<endl;

    sc.printDevelopers();

    return 0;
}
