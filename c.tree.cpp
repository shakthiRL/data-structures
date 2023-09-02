#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root=NULL,*newnode;
struct node *insert(struct node *root,int ele)
{
	if(root==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node*));
		newnode-> left=NULL;
		newnode -> data=ele;
		newnode-> right=NULL;
		return(newnode);
	}
	else if(ele<root->data)
		root->left=insert(root->left,ele);
	else if(ele>root->data)
		root->right=insert(root->right,ele);
	return(root);
}
void Inorder(struct node*root)
{
	if (root!=NULL)
	{
		Inorder(root->left);
		printf("%d\t",root->data);	
		Inorder(root->right);
	}
}
void preorder(struct node*root)
{
	if (root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);	
		preorder(root->right);
	}
}
void postorder(struct node*root)
{
	if (root!=NULL)
	{
		postorder(root->left);	
		postorder(root->right);
		printf("%d\t",root->data);
	}
}
int main()
{
        int choice;
        do
        {
                printf("\n\n***Manin Menu ***");
                printf("\n1.create\n");
                printf("\n2.Inorder\n");
                printf("\n3.Preorder\n");
                printf("\n4.Postorder\n");
                printf("\n5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :int ele;
                 		printf("enter the element ");
                 		scanf("%d",&ele);
                 		root=insert(root,ele);
                        break;
                 case 2:
                        Inorder(root);
						break;
                 case 3:
				 		preorder(root);
                        break;
                 case 4:
                 		postorder(root);
                 		break;
                case 5:
                 		exit(0);
                 		break;
                 default:
                        printf("\nWrong choice\n");
                }
        }
	while(choice>=1&&choice<=5);
return 0;
} 
