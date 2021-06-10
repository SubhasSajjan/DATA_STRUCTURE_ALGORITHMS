
/*
//  MERGE SORT

#include<stdio.h>
#include<time.h>


void merge(int arr[],int l , int m , int r)
{
    int i,j ,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for (i = 0 ; i<n1; i++)
        L[i] = arr[l+i];
    for(j = 0; j< n2 ; j++)
        R[i] = arr[m+1+j];
    i =0;
    j =0;
    k =1;
    while(i<n1 && j<n2)
    {
    if (L[i] <= R[j])
    {
        arr[k] = L[i];
        i++;

    }
    else{
        arr[k] = R[j];
        j++;
    }
    k++;

    }
    while(i<n1)
    {

        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {

        arr[k] = R[j];
        j++ ;
        k++;
    }
}

void merge_sort(int arr[],int l , int r)
{   if(l > r){
    int m = (l + r)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);

    merge(arr,l,m,r);

}
}


int main(int argc, const char * argv[]) {
    clock_t start,end;
    int n,arr[1000];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    merge_sort(arr,0,n-1);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;
}


*/
/*

// QUICK SORT
#include<stdio.h>
#include<time.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int l , int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for(int j = l ; j <= r ; j++)
    {
        if(arr[j] < pivot )
        {
            i++;
            swap (&arr[i],&arr[j]);
        }

    }
    swap(&arr[i+1],&arr[r]);
    return(i+1);
}
void quick_sort(int arr[],int l , int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);

        quick_sort(arr , l ,pi-1);
        quick_sort(arr , pi+1 , r);

    }
}
int main()
{
  clock_t start,end;
    int n,arr[100];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    quick_sort(arr,0,n);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;

}

*/



/*

//INSERTION SORT:
#include<time.h>
#include<stdio.h>
void insertion_sort(int arr[],int n)
{
    int key,j;
    for(int i =1 ;i<n ; i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }
}int main()
{
  clock_t start,end;
    int n,arr[100];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    insertion_sort(arr,n);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;

}

*/


/*

 // MERGE SORT


 #include<stdio.h>
 #include<math.h>
 #include<time.h>
 void merge(int arr[], int l , int m , int r)
 {
     int n1 = m-l+1;
     int n2 = r-m;
     int L[n1],R[n2];
     for(int i = 0 ; i<n1 ; i++)
        L[i] = arr[l+i];
     for(int j = 0 ; j < n2 ; j++)
         R[j] = arr[m+1+j];
     int i=0 , j =0 , k = l;

     while(i < n1 && j < n2)
     {
         if(L[i]<=R[j])
         {
             arr[k]=L[i];
             k++;
             i++;
         }
         else
         {
             arr[k] = R[j];
             j++;
             k++;
         }


     }
      while(i < n1)
         {
             arr[k] = L[i];
             k++;
             i++;
         }
         while(j < n2)
         {
             arr[k] = R[j];
             k++;
             j++;
         }
 }

 void merge_sort(int arr[], int l ,int r)
 {
     if(r>l){
     int m = (l +r)/2;

     merge_sort(arr , l , m);
     merge_sort(arr , m+1 , r);


     merge(arr , l ,m ,r);
 }
 }
int main()
{
  clock_t start,end;
    int n,arr[100];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    merge_sort(arr,0,n-1);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;

}

*/

/*
//QUICK sort

#include<stdio.h>
#include<time.h>
void swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l , int r)
{
    int pivot = arr[r];
    int i = l -1;
    for (int j = l ; j <= r-1  ; j++ )
    {
        if(arr[j] < pivot )
        {
            i++;
            swap(&arr[i] , &arr[j]);
        }
    }
    swap(&arr[i+1] , &arr[r]);
    return (i+1);
}

void quick_sort( int arr[], int l , int r)
{if(r>l){
    int pi = partition(arr , l ,r);

    quick_sort(arr , l , pi-1);
    quick_sort(arr , pi+1 , r);
}

}
int main()
{
  clock_t start,end;
    int n,arr[100];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    quick_sort(arr,0,n);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;

}

*/




/*

//DFS


#include<stdio.h>
int adj[20][20],visited[20];
int st[20],tos=-1,n;
void push(int v)
{
    st[++tos] = v;
}
int pop()
{
    if(tos == -1)
    {
        return -1;
    }
    return st[tos--];
}
void dfs(int v)
{
    visited[v] = 1;
   printf("%d\t",v);
    for(int i=0;i<n;i++)
    {
        if(adj[v][i]==1 && visited[i]==0)
        {
            push(i);
            visited[i] = 1;
        }

    }
    int g = pop();
    if(g != -1)
    {
        dfs(g);
    }
}
int main()
{
    int  k;
    printf("Enter the size of the Adjecency matrix");
    scanf("%d",&n);
    printf("Enyer the elements to matrix\n");
    for (int i = 0 ; i < n ; i++)
    {
         for(int j = 0 ; j < n ;j++)
           {
               scanf("%d", &adj[i][j]);
           }
    }

    for(int i= 0 ; i < n ; i++ )
        visited[i] = 0;
     printf("Enter the starting vertex");
    scanf("%d",&k);
    dfs(k);
}
