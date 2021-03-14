#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
//最大连续和
int maxsum(int* a,int x,int y)
{
    if(y-x==1) return a[x];
    int mid=x+(y-x)/2;
    int maxn=max(maxsum(a,x,mid),maxsum(a,mid,y));
    int v,l,r;
    v=0,l=a[mid-1];
    for(int i=m-1;i>=x;i--)
    {
        l=max(l,v+=l);
    }
    v=0,r=a[mid];
    for(int i=m;i<y;i++)
    {
        r=max(r,v+=r);
    }
    return max(maxn,l+r);
}
//归并排序
void merge(int* A,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    for(int i=1;i<=n1;i++)
    {
        L[i]=A[p+i-1];
    }
    for(int i=1;i<=n2;i++)
    {
        R[i]=A[q+i];
    }
    int i=1,j=1;
    for(int k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i+=1;
        }
        else{
            A[k]=R[j];
            j+=1;
        }
    }
}
void merge_sort(int* A,int p,int r)
{
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q,r);
        merge(A,p,q,r);
    }
}
//分治策略
int find_max_crossing_subarray(int* A,int low,int mid,int high)
{
    int left_sum=-1000;
    int sum=0,max_left=mid;
    for(int i=mid;i>=low;i--)
    {
        sum=sum+A[i];
        if(sum>left_sum)
        {
            left_sum=sum;
            max_left=i
        }
    }
    sum=0;
    int right_sum=-1000;
    for(int j=mid+1;j<=high;j++)
    {
        sum+=A[j];
        if(sum>right_sum)
        {
            right_sum=sum;
            max_right=j;
        }
    }
    int a[3]={max_left,max_right,left_sum+right_sum};
    return a;
}
//寻找最大子数组
int find_maximum_subarray(int* A,int low,int high)
{
    if(high==low) return(low,high,A[low]);
    else{
        mid=(low+high)/2;
        int b[3]=find_maximum_subarray(A,low,mid);
        int c[3]= find_maximum_subarray(A,mid+1,high);
        int d[3]=find_max_crossing_subarray(A,low,mid,high);
        if(b[2]>=c[2] && b[2]>=d[2])
        {
            int b;
        }
        else if(c[2]>=b[2] && c[2]>=d[2])
        {
            return c;
        }
        else return d;
}
//插入排序
insertion_sort(int* A)
{
    for(int j=2;j<=A.size();j++)
    {
        int key=A[j];
        int i=j-1;
        while(i>0&&A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key
    }
}
void print(int* A)
{
    for(int i=0;i<A.size();i++)
    {
        printf("%d ",A[i]);
    }
    cout<<endl;
}
int main()
{
    int a[4]={4,5,1,3};
    insertion_sort(a);
    print(a);
    return 0;

}