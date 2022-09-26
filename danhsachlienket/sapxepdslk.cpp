#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    int data;
    node *next;
};

node *makeNode(int x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

void themdau(node *&head, int x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
}

void sapxeptang(node *&head){
    for(node *i = head; i != NULL; i = i->next){
        for(node *j = head; j != NULL; j = j->next){
            if(i->data < j->data){
                swap(i->data,j->data);
            }
        }
    }
}

void sapxepgiam(node *&head){
    for(node *i = head; i != NULL; i = i->next){
        for(node *j = head; j != NULL; j = j->next){
            if(i->data > j->data){
                swap(i->data,j->data);
            }
        }
    }
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        themdau(head,x);
    }
    sapxeptang(head);
    duyet(head);
    cout << endl;
    sapxepgiam(head);
    duyet(head);
    return 0;
}