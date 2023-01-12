#include<iostream>
#include "cal.cpp"
using namespace std;
int main()
{
 int ch;char start='y';
	cal obj;
	cout<<"Select the option\n1.Addtion\n2.Substraction\n3.Multiplication\n4.division\n5.prime\n6.table\n7.strong\n8.Armstrong\n";
	cin>>ch;
	while(start=='y')
	{
	
	switch(ch)
	{
		case 1:
			obj.add();
			//Additon function calling.
			break;
			
			case 2:
				obj.sub();
				//Substraction function calling.
				break;
				
				case 3:
					obj.mul();
					//Multiplication function calling.
					break;
					
					case 4:
						obj.div();
						//Divison function calling.
						break;
						
						case 5:
							obj.pri();
							// Prime checker calling.
							break;
							
							case 6:
								obj.tab();
								//table printing function calling.
								break;
								
								case 7:
									obj.str();
									//Strong number checker calling.
									break;
									
									case 8:
										obj.arm();
										//Armstrong number checker calling.
										break;
										
										default:
											cout<<"Invalid key";
											break;
									
						
	}
	cout<<"\nyou want continue y/n \n ";
	cin>>start;
	
	if(start=='y')
	{ cout<<"Select the option\n1.Addtion\n2.Substraction\n3.Multiplication\n4.division\n5.prime\n6.Table\n7.strong\n8.Armstrong \n";
	 cin>>ch;
		continue;
	}
	else
	{ cout<<"Thank you ";
		break;
	}
	}
	
}
