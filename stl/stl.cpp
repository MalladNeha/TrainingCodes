#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<set>//set as well as multi set
#include<map>//set as well as multi map
using namespace std;

/*void show1(int x) {
	cout << "using show " << x;
}*/

class emp {
	string name;
	int empid;
public:emp(){}
	   emp(int id,string nm):empid(id),name(nm){}
	   void accept() {
		   cout << "enter id nad name" << endl;
		   cin >> empid >> name;
	   }
	   void show()const
	   {
		   cout << empid << name<<endl;
	   }
	   bool operator < (const emp& ee)const {
		   return empid;
	   }
};

int main()
{
	multimap<string, int>mymap;
	mymap.insert(pair<string, int>("neha", 10));
	mymap.insert(pair<string, int>("s", 20));
	mymap.insert(pair<string, int>("neha", 10));
	mymap.insert(pair<string, int>("r", 40));
	mymap.insert(make_pair("neha", 50));
	for (map<string, int>::iterator itr = mymap.begin(); itr != mymap.end(); ++itr)
		cout << itr->first << " " << itr->second << endl;

	/*
	
	set<emp> myset;
	myset.insert(emp(10, "neha"));
	myset.insert(emp(11, "aboli"));
	myset.insert(emp(12, "aditi"));
	myset.insert(emp(13, "teju"));
	for (set<emp>::iterator ptr1 = myset.begin(); ptr1 != myset.end(); ++ptr1);
		ptr1->show();


		auto myptr = myset.find(10);
		if (myptr != myset.end())
			cout << "ele is present in set" << *myptr << endl;
		else
			cout << "ele is not present in set" << *myptr << endl;

		for (set<int>::iterator ptr1 = myset.begin(); ptr1 != myset.end(); ++ptr1)
			cout << *ptr1 << endl;
*/
	
	/*
	set<int>myset;
	myset.insert(10);
	myset.insert(5);
	myset.insert(3);
	myset.insert(38);
	myset.insert(13);
	myset.insert(3);//dupliacte number ignored in set and shows only once of duplicate values
	myset.find(10);
	myset.erase(10);

	set<int>::iterator myptr = myset.find(500);
	//auto myptr = myset.find(10);
	if (myptr != myset.end())
		cout << "ele is present in set" << *myptr << endl;
	else
		cout << "ele is not present in set" << *myptr << endl;

	for (set<int>::iterator citr = myset.begin(); citr != myset.end(); ++citr)
		cout << *citr << endl;
*/
	

	/*list<int> mylist;
	//for (int i = 0; i < 5; ++i)
	//	mylist.push_back(i * 10);
	auto ptr = mylist.begin();
	mylist.insert(ptr, 100);
	mylist.insert(ptr, 100);
	mylist.insert(ptr, 100);
	ptr = mylist.begin();
	mylist.erase(ptr);

	for (auto &i : mylist)
			cout << i << endl;

	deque<int> mydeq;
	mydeq.push_back(10);
	mydeq.push_back(20);
	mydeq.push_back(30);
	mydeq.push_front(5);
	mydeq.push_front(1);
	mydeq.pop_back();
	mydeq.pop_front();

	for (int i = 0; i < mydeq.size(); ++i)
		cout << mydeq[i] << " " << mydeq.at(i) << endl;
	
	for (deque<int>::iterator citr = mydeq.begin(); citr != mydeq.end(); ++citr)
		cout << *citr << endl;
	
	//vector<emp> v1[3];
	/*array <string, 4> arr1 = { "n","b","s","m" };
	//std::sort(arr1.begin(), arr1.end());
	std::reverse(arr1.begin(), arr1.end());
	for(int i = 0; i < arr1.size(); ++i)
	{
		cout << arr1[i] << endl;	
	}

	
    array<int, 5> myarr{ 10,20,30,-1,-2 };
	sort(myarr.begin(), myarr.end());

	//string arr2[4] = { "n","b","s","m" };*/
	

	/*
	vector<int> v1 = { 10,20,30,40 };
	cout << v1.size() << endl;
	cout << v1.capacity() << endl;
	v1.push_back(100);
	v1.push_back(120);
	v1.push_back(130);
	cout << v1.size() << endl;
	cout << v1.capacity() << endl;

	for (int i = 0; i < v1.size(); ++i)
		cout<< v1[i] <<" " << v1.at(i) << endl;

	v1[0] = 1000;
	v1[1] = 2000;

	cout << "using iterators to dispaly contents of vector" << endl;
	for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
	{
		
		cout << *itr << endl;
	}

	cout << "using constant iterators to dispaly contents of vector" << endl;
	for (vector<int>::const_iterator citr = v1.cbegin(); citr != v1.cend(); ++citr)
		cout << *citr << endl;

	cout << "using reverse iterators to dispaly contents of vector" << endl;
	for (vector<int>::reverse_iterator ritr = v1.rbegin(); ritr != v1.rend(); ++ritr)
		cout << *ritr << endl;


	vector<int>::iterator myitr = v1.begin();
	cout << "first ele vector" << *myitr << endl;
	myitr = v1.end()-1;//note v1.end() is next to last elemnt
	cout << "last ele vector" << *myitr << endl;


	for_each(v1.begin(), v1.end(), show1);
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.insert(v1.begin(), 99);
	v1.erase(v1.begin(), v1.end() - 2);
	v1.erase(v1.begin);


	cout << "using ranhe based for loop" << endl;
	for (auto &i : v1)
	{
		if(i%2==0)
			 cout << i << endl;
	}
	*/
	

   return 0;
}