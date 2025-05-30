#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 6
int vertex_count=0;
struct vertex{
	char data;
	bool visited;
};
struct vertex *graph[MAX];
int adj_matrix[MAX][MAX];
int stack[MAX];
int top=-1;
void push(int data){
	struct[++top]=data;
	}
int pop(){
	return stack[top--];
	}
int peek(){
	return stack[top];
	}
	bool is_stack_empty(){
	void add_vertex(chat data){
		struct vertex*new=(struct vertex*)malloc(sizeof(struct vertex));
		new->data=data;
		new->visited=false;
		graph[vertex_count]=new;
		vertex_count++;
	}
	void add_edge(int start,int end){
	adj_matrix[start][end]=1;
	adj_matrix[end][start]=1;
	}
int adj_vertex(int vertex_get)
{
int i;
for(i=0;i<vertex_count;i++)
{
if(adj_matrix[vertex-get][i]==1 && graph[i]->visited==false){
return i;
}
}
return -1;
}
void display_vertex(int pos){
printf("%c",graph[pos]->data);
}
void dfs(){
int i;
int unvisited;
printf("\n|||||||||||||||||||||||\n");
graph[0]->visit=true;
display_vertex(0);
push(0);
while(!is_stack_empty()){
int unvisited=adj_vertex(peek());
if(unvisited==-1{
pop();
}
else{
graph[unvisited]->visited=true;
display_vertex(unvisited);
push(unvisited);
}}
printf("\n|||||||||||||||\n");
for(i=0;i<vertex_count;i++){
	graph[i]->visisted=false;
	}
}
void show(){
int i;
printf("\n......................\n");
for(i=0;i<vertex_count;i++){
printf("edge position of '%c' is %d\n",graph[i]->data,i);
}
printf("............\n");
}
int main(){
	int opt;
	char data;
	int edge_1,edge_2;
	int i,j;
	for(i=0;i<MAX;i++)
	for(j=0;j<MAX;j++)
	adj_matrix[i][j]=0;
	do
	{
	printf("\n1)Add vertex \n2) create edge \n3)traversal \n0)exit \nchoose option::");
	scanf("%d",&opt);
	switch(opt){
		case 1:
		       printf("\nenter data to be added to vertex:");
		       scanf("%c",&data);
		       add_vertex(data);
		       break;
		case 2:
		show();
		       printf("\nenter edge starting:");
		       scanf("%d",&edge_1 );
		       printf("\nenter edge ending :");
		       scanf("%d",&edge_2);
		       if(vertex_count-1<edge_1 || vertex_count-1 < edge_2){
					printf("\nThere is no vertex !!\n");
				}
				else{
					add_edge(edge_1,edge_2);
				}
				break;
			case 3:
				dfs();
				break;
			default:
				printf("\nInvalid option try again !! ...");
		}
	}while(opt!=0);
	
	return 0;
}
		              
		
		


	


