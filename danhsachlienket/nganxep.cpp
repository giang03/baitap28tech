#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    int data;
    node *next;
    node *prev;
};

node *makeNode(int x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void themdau(node *&head,int x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void themcuoi(node *&head,int x){
    node *newNode = makeNode(x);
    node *tmp = head;
    if(head == NULL){
        themdau(head,x);
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void xoacuoi(node *&head){
    if(head == NULL) return;
    node *tmp = head;
    if(tmp->next == NULL ){
        head = NULL;
        delete tmp;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->prev->next = NULL;
    delete tmp;
}
void duyet(node *head){
    if(head == NULL){
        cout << endl;
        return;
    }
    while(head->next != NULL){
        head = head->next;
    }
    while(head != NULL){
        cout << head->data << ' ';
        head = head->prev;
    }
    cout << endl;
}
int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        string lc; cin >> lc;
        if(lc == "push"){
            int x; cin >> x;
            themcuoi(head,x);
        }
        else if(lc == "pop"){
            xoacuoi(head);
        }
        else if(lc == "show"){
            if(head == NULL)
                cout << "EMPTY" << endl ;
            duyet(head);
        }
    }
    return 0;
}