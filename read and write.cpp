#include<iostream>
#include<fstream>
using namespace std;

const int SIZE=10000;
    struct Records {
        string name;
        string type;
        int num;
    };
   /* struct Node{
    	int data;
    	Node * next;
	};*/
int main()

{
	
    
    Records record[SIZE];
	cout<<"1-Create a New File"<<endl;
	cout<<"2-Save"<<endl;
	cout<<"3-Save As"<<endl;
	fstream dir;
    dir.open("directory.txt");
    fstream file2;
    file2.open("partition.txt");
	int select;
	string name;
	string type;
	cout<<"Select Your Operation: "<<endl;
	cin>>select;

	if(select==1)
	{
	 cout << "Enter a file name: "<<endl;
     cin>>name;
     cout<<"Enter file type: "<<endl;
     cin>>type;
    int recCount = 0;  
    while (!dir.eof() && recCount < SIZE)
    {
        dir>> record[recCount].name >>record[recCount].type>> record[recCount].num;
       
        ++recCount;
    }
  
    int flag=true;
    for(int i=0;i<recCount;i++)
    {
    	if(name==record[i].name && type==record[i].type)
    	{
    		flag=false;
    	    	break;
		}
	}
	if(flag==false)
	{
		cout<<"file is already exist please choose another name"<<endl;
	}
	else{
		dir.close();
		
		//insert your code here.....
		
		
		
		
		
	
		/*dir.open("directory.txt",std::ios::app);
		dir<<name<<" "<<type<<" "<<123<<endl;*/
		
    	}
    
     
     
     
	}
	

}
