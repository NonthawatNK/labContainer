#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	for (int i = 0; i < 2; i++) line_up.pop_front(); // a o b l s n 

	loc = find(line_up.begin(),line_up.end(),"Luffy");
	line_up.insert(++loc,"Narutu"); // B N L S N

	line_up.push_front("Prayath"); // P B N L S N

	loc = find(line_up.begin(),line_up.end(),"Prayath");
	line_up.insert(++loc,"Tony"); // P T B N L S N
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.erase(loc);
	
	for (int i = 0; i < 3; i++) line_up.pop_front();
	
	printList(line_up);
		
	return 0;
}
