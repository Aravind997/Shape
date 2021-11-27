#include<iostream>

using namespace std;

class Shape{
	protected:

		double x,y;

	public:

		virtual void get_data() = 0;

		virtual void display_area()=0;

};

class Rectangle : public Shape{

	public:

		void get_data(){

			cout<<"Enter Width and Length of Rectangle :";

			cin>>x>>y;			

		}

		void display_area(){

			double ar;

			ar = x*y;

			cout<<"Area of Rectangle is :"<<ar<<endl;

		}	

};

class Triangle  : public Shape{

	public:

		void get_data(){

			cout<<"Enter Height and Base of Triangle :";

			cin>>x>>y;			

		}

		void display_area(){

			double at;

			at = 0.5 * x * y;

			cout<<"Area of Triangle is :"<<at<<endl;

		}		

};

main(){


	int op;

	char choice;

	Rectangle rect;

	Triangle tr;

    Shape *sh[2];
    
	sh[1] = &rect;

	sh[2] = &tr;

	do{

	cout<<"=== Calculate Area of Different Shape ==="<<endl;

	cout<<"1: Area of Rectangle "<<endl;

	cout<<"2: Area of Triangle "<<endl;

    cout<<" Enter Your Choice"<<endl;

    cin>>op;

	switch(op){


		case 1:

			sh[1]->get_data();

			sh[1]->display_area();

			break;

		case 2:

			sh[2]->get_data();

			sh[2]->display_area();

			break;

		default:

			cout<<"Invalid Number You Enter "<<endl;		

	   }

	   cout<<"Do You Want to Calculate Another Area [Yes / No] :";

	   cin>>choice;

	}while(choice =='Y'||choice == 'y');	

}

