#include<iostream>
#include"structStudent.h"
#include"showList.h"
#include"create.h"
#include"createNode.h"
#include"addNote.h"
#include"deleteNode.h"
using namespace std;
student* head;

int main()
{
	create();
	showList();
	addNote();
	showList();
	deleteNode();
	showList();
}