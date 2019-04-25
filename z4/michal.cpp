#include "binTree.h"
#include "stddef.h"
#include <string>
using namespace std;
struct TreeNode
{
	string data;
	NodePtr lLink;
	NodePtr rLink;
	TreeNode(string, NodePtr, NodePtr);
};
	TreeNode::TreeNode(string str, NodePtr lPtr, NodePtr rPtr)
	{
		data = str;
		lLink = lPtr;
		rLink = rPtr;
	}

	StringTree::StringTree()
	{
		rootPtr = NULL;
	}
	bool StringTree::IsEmpty() const
	{
		return (rootPtr == NULL);
	}
	void StringTree::BuildRoot(string someString)
	{
		rootPtr = new TreeNode(someString, NULL, NULL);
	}
	NodePtr StringTree::Root() const 
	{ 
		return rootPtr; 
	}
	void StringTree::AppendLeft(NodePtr ptr, string someString)
	{
		ptr->lLink = new TreeNode(someString, NULL, NULL);
	}
	void StringTree::AppendRight(NodePtr ptr, string someString)
	{
		ptr->rLink = new TreeNode(someString, NULL, NULL);
	}
	void StringTree::Store(NodePtr ptr, string someString) 
	{
		ptr->data = someString;
	}
	string StringTree::Data(NodePtr ptr)
	{
		return ptr->data;
	}

	NodePtr StringTree::LChild(NodePtr ptr)
	{
		return (ptr == NULL) ? NULL : ptr->lLink;
	}
	NodePtr StringTree::RChild(NodePtr ptr)
	{
		return (ptr == NULL) ? NULL : ptr->rLink;
	}
	bool StringTree::IsLeaf(NodePtr ptr)
	{
		return (ptr->lLink == NULL && ptr->rLink == NULL);
	}
	void StringTree::DeleteLeaf(NodePtr& ptr)
	{
		delete ptr;
	}
	void StringTree::DeleteTree(NodePtr ptr)
	{
		TreeNode* tempPtr;
		if (ptr != NULL)
		{
			tempPtr = ptr;
			ptr = tempPtr->lLink;
			DeleteTree(ptr);
			ptr = tempPtr->rLink;
			DeleteTree(ptr);
			delete tempPtr;
		}
	}
	StringTree::~StringTree()
	{
		TreeNode* ptr = rootPtr;
		DeleteTree(ptr);
	}
