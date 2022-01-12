#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct tree{
	int info;
	struct tree *left, *right;
};
typedef struct tree node;
void insert (node **,int);
void preorder(node*);
void inorder(node*);
void postorder(node*);
node*search(node* ,int);
node* deleteNode(node*,int);
node *Min( node *);
int main()
{
	node* root;
	int x,choice, item,item_no,key;
	node* tmp;
	root=NULL;
	do{
		printf("\n1.insert\t2.delete\t3.postorder\t4.inorder\t5.preorder\t6search\t7exit\n");
		printf("enter your choice\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element to be added\t");
				scanf("%d",&item);
				insert(&root,item);
				break;
				case 2:
					printf(" what to delete\t");
					scanf("%d",&x);
					deleteNode(root,x);
					break;
				case 3:
					printf("postorder\t");
					postorder(root);
					break;
					case 4:
						printf("inorder\t");
						inorder(root);
						break;
					   case 5:
					   	printf("preorder traversal is \t");
					preorder(root);
					break;
					case 6:
						printf("enter the data you want to search for\t");
						scanf("%d",&key);
						tmp=search(root,key);
						if(tmp)
						printf("the item %d is found",key);
						else
						printf("item not found");
						default:
							break;
							
						
					
		}
		
	} while(choice!=7);
}
void insert(node **root,int item)
{
	node *temp=NULL;
	if(!(*root))
	{
		temp=(node*)malloc(sizeof(node));
		temp->left=temp->right=NULL;
	    temp->info=item;
	    *root=temp;
	    return;
	}
	if((*root)->info>item)
	{
		insert(&(*root)->left,item);
	}
	else
	{
		if((*root)->info<item)
	{
		insert(&(*root)->right,item);
	}
	}
}
void preorder(node *root)
{
	if(root)
	{
	printf("%d\t",root->info);
	preorder(root->left);
	preorder(root->right);
}
}
void postorder(node *root)
{
	if(root)
	{
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->info);
}
}
void inorder(node *root)
{
	if(root)
	{
	inorder(root->left);
	printf("%d\t",root->info);
	inorder(root->right);
	
}
}
node* search(node* root, int key)
{
	if(root==NULL)
	return NULL;
    // Base Cases: root is null or key is present at root
    if (root->info == key)
       return root;
    
    // Key is greater than root's key
    if (root->info < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}
 node *Min( node *ptr)
{
        if(ptr==NULL)
                return NULL;
        else if(ptr->left==NULL)
        return ptr;
        else
                return Min(ptr->left);
}/*End of min()*/
node* deleteNode(node* root, int key)
{
	// base case
	if (root == NULL)
		return root;
	if (key < root->info)
		root->left = deleteNode(root->left, key);
	else if (key > root->info)
		root->right = deleteNode(root->right, key);
	else {
		// node with only one child or no child
		if (root->left == NULL) {
			node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
		  node* temp = root->left;
			free(root);
			return temp;
		}

		// node with two children
		// replace with smallest in the right subtree
		node* temp = Min(root->right);

		// Copy the inorder
		// successor's content to this node
		root->info= temp->info;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->info);
	}
	return root;
}
