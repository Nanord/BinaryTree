#include <iostream>

struct tree
{
	int x;
	tree* l;
	tree* r;
	tree(int x = 0)
	{
		this->x = x;
		this->l = NULL;
		this->r = NULL;
	};
};


void bintree(int x, tree* node)
{
	if(node == NULL)
	{
		node = new tree(x);
	}
	else if(node->x > x)
	{
		bintree(x, node->l);
	}
	else
	{
		bintree(x, node->r);
	}

}

int main(int argc, char const *argv[])
{
	tree* node;
	int x[] = {5,4,6,3,9,1,2};
	for (int i = 0; i < 7; ++i)
	{
		bintree(x, node);
	}
	return 0;
}