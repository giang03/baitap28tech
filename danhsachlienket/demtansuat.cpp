#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    string data;
    int ts;
    node *next;
    node *prev;
};

node *makeNode(string x){
    node *ptr = new node;
    ptr->data = x;
    ptr->ts = 1;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void themdau(node *&head, string x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    for(node *i = head; i != NULL; i = i->next){
        if(i->data == x){
            i->ts++;
            return;
        }
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void duyet(node *head){
    while(head->next != NULL){
        head = head->next;
    }
    while(head != NULL){
        cout << head->data << ' ' << head->ts << endl;
        head = head->prev;
    }
}

int main(){
    node *head = NULL;
    string s;
    while(cin >> s){
        themdau(head,s);
    }
    duyet(head);
    return 0;
}