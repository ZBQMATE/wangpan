//read file
ifstream in("input.txt");
string line;
int i = 0;
while (getline(in, line)) {
	cout << line << endl;
}

// cin
while (cin >> n) {}
if (cin.get() == '\n')

//write file
ofstream hhh("report.txt");
hhh << "honda" << endl;

swap(a, b);

//string cut split substr include front
size_t pos = strs.find(pattern);
string temp = strs.substr(0, pos);//count pos from 0
strs = strs.substr(pos+1, strs.size());

//string reverse
string str = "geeksforgeeks";
reverse(str.begin(), str.end());

//string to int
int n = atoi(str.c_str());

//int to string
int n = 0;
stringstream ss;
string str;
ss<<n;
ss>>str;

int v = rand() % 100;  

//vector initialize
vector<vector<int>> m(row, vector<int>(col, 0));

//vector sub vector
vector<int> vec_cut(org_vec.begin(), org_vec.begin() + 4);

//vector erase
myvector.erase(myvector.begin()+5);

myvector.pop_back();

//8: new size; 100: tian chong shu ju
myvector.resize(8,100);

//vector insert
vct.insert(vct.begin() + 2, 1000);

//vector sort
sort(vct.begin(), vct.end());

//vector decending sort
sort(vct.begin(), vct.end(),greater<int>());

//for sorted v = { 10, 20, 30, 40, 50 }, output 3
vector<int>::iterator upper;
upper = upper_bound(v.begin(), v.end(), 35);
cout << (upper - v.begin());

//vector self define
bool compare(const int &odd1,const int &odd2) {
	return odd1>odd2;
}
sort(v.begin(),v.end(),compare);

struct stu
{
    int num;
    float grade;
};
stu susan = {1, 100.0};
bool compare(const stu* st1,const stu* st2)
{
	return st1->grade>st2->grade;
}
sort(v.begin(),v.end(),compare);

//vector reverse
reverse(myvector.begin(),myvector.end());

// pointer
vector<int>* k = new vector<int>;
vector<int>* p = &ss;
*k = ss;
cout << (*k)[2];

//map
map<char, int> curmap;

//map insert
pair<map<char, int>::iterator, bool> insert_pair;
insert_pair = curmap.insert(pair<char, int>(s[i], i));
if (insert_pair.second) {
	counter++;
}

//map insert erase
curmap['a'] = 120;
curmap.erase('a');

//map exist
if (curmap.find('a') != curmap.end()) {}

//map iterator
map<char, int>::iterator iter = curmap.begin();
while (iter != curmap.end()) {
	if (iter->second <= 100) {
		curmap.erase(iter++);
	}
	else {
		iter++;
	}
}

//queue
queue<int> myqueue;
myqueue.push(100);
while (!myqueue.empty()) {
	myqueue.pop();
}
myqueue.front() -= myqueue.back();
cout << myqueue.size();

//priority_queue max heap
priority_queue<int> mypq;
mypq.push(30);
while (!mypq.empty()) {
	cout << mypq.top();
	mypq.pop();
}

//priority_queue min heap
priority_queue <int, vector<int>, greater<int> > pq;

//priority_queue min heap of pair order by first element
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
pq.push(pair<int, int>(10, 21));
cout << pq.top().second << endl;
pq.pop();

//set
set<int> s;
s.insert(1);
s.size();
s.empty();
s.count(1); //0 or 1
s.erase(1);
s.clear();
for (auto it = myset.begin(); it != myset.end(); ++it) cout << *it;

//stack
stack<int> s;
s.push(100);
while(!s.empty()) {
	cout << s.top() << endl;
	s.pop();
}

//class and templete
template <class T>
struct stackNode {
	T data;
	stackNode * next;
};
class myStack {
public:
	myStack();
	~myStack();
	void push(T data);
	void pop();
	T stackTop();
	bool isEmpty();
private:
	stackNode<T> * top;
};
myStack<T>::myStack(){
	top = NULL;
}
myStack<T>::~myStack(){
	stackNode<T> * node = NULL;
	while (top != NULL) {
		node = top;
		top = top->next;
		delete node;
	}
}
void myStack<T>::push(T data){
	stackNode<T>* node = new stackNode<T>;
	node->data = data;
	node->next = top;
	top = node;
}
void myStack<T>::pop(){
	stackNode<T>* node = top;
	top = top->next;
	delete node;
}
template <class T>
bool myStack<T>::isEmpty(){
	return top == NULL;
}
template <class T>
T myStack<T>::stackTop(){
	return top->data;
}

