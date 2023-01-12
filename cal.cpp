#include<iostream>
using namespace std;
class cal
{
    public:
    	//variables of calculator.
    int a,b,c;float d;int temp=0,s=0;
    
    //function of calculator given below
    
    //addition function
    void add()  
    {
        cout<<"Enter the first number \n";
        cin>>a;
        cout<<"Enter the second number \n ";
        cin>>b;
        c=a+b;
        cout<<"Sum of given number is "<<c;
        a=0;b=0;c=0;

    }
    
    //substraction function
     void sub() 
    {
        cout<<"Enter the first number \n";
        cin>>a;
        cout<<"Enter the second number \n";
        cin>>b;
        c=a-b;
        cout<<"Substraction of given number is "<<c;
         a=0;b=0;c=0;
        
    }
    //multiplication function
     void mul()
    {
        cout<<"Enter the first number \n";
        cin>>a;
        cout<<"Enter the second number \n";
        cin>>b;
        c=a*b;
        cout<<"Multiplication of given number is "<<c;
         a=0;b=0;c=0;
        
    }
    //Division function
     void div()
    {
        cout<<"Enter the first number \n";
        cin>>a;
        cout<<"Enter the second number \n ";
        cin>>b;
        d=a/b;
        cout<<"Divison of given number is"<<d;
         a=0;b=0;d=0;

        
    }
    
    //prime number function
    void pri()
    {    b=0;
        cout<<"Enter the number \n";
        cin>>a;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {  b++;
               break;

            }
            
        }
        if(b==0)
        {
            cout<<"Number is prime number \n";
        }
        else
        {
            cout<<"number is not prime \n";

        }
         a=0;b=0;
    }
    //table printing function.
    void tab()
    { cout<<"Enter the number \n";
       cin>>a;
       for(int i=1;i<=10;i++)
       {
       	cout<<a<<"x"<<i<<"="<<a*i<<"\n";
	   }
    
	}
	//strong number checker function.
    void str()
    {s=0;
         cout<<"Enter the number \n ";
         cin>>a;
         temp=a;
         while(a>0)
         {
            b=a%10;
            c=1;
            while(b>0)
            {
                c=c*b;
                b--;
            }
            s=c+s;

            a=a/10;
         }
         if(s==temp)
         {
            cout<<"number is strong number\n";

         }
         else{
            cout<<"number is not strong number\n";
            
         }
         a=0;b=0;c=0;d=0;temp=0;s=0;
    }
    //Armstrong number checker.
    void arm()
    { b=0;c=0;
    	cout<<"Enter the number \n";
    	cin>>a;
    	temp=a;
    	while(a>0)
    	{
    		b=a%10;
    		c=b*b*b;
    		s=c+s;
    		a=a/10;
    		
		}
		if(s==temp)
		{
			cout<<"Given number is Armstrong\n ";
			
		}
		else
		{
			cout<<"Given number is not armstrong\n";
		}
		
	}


};
