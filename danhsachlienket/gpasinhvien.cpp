#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien{
    string id,name;
    double gpa;
    void nhap(){
        getline(cin,id);
        getline(cin,name);
        cin >> gpa;
    }
    void in(){
        cout << id << ' ' << name << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};

struct node{
    SinhVien data;
    node *next;
    node *prev;
};

node *makeNode(SinhVien x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void themdau(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void duyet(node *head){
    double res = 0;
    for(node *i = head; i != NULL; i = i->next){
        res = max(res,i->data.gpa);
    }
    while(head->next != NULL){
        head = head->next;
    }
    while(head != NULL){
        if(head->data.gpa == res){
            head->data.in();
        }
        head = head->prev;
    }
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        cin.ignore();
        SinhVien x;
        x.nhap();
        themdau(head,x);
    }
    duyet(head);
    return 0;
}