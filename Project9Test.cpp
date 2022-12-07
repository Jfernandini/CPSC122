/*Test File for Project 9

*/

int main()
{
    List lst; 
    List* list1 = new List; 
    /*
    cout << "GetItemH/ PutItemH" << endl;
    lst.PutItemH(1);
    cout << lst.GetItem(); << endl;   
    */
    
    /*
    cout <<"Testing IsEmpty" << endl;

    lst1 ->PutItemH(10);
    lst1 ->PutItemH(5);
    lst1 ->PutItemH(1);
    cout <<"without text" << endl;
    lst1->Print();
    lst1->DeleteItemH();
    cout << "After Text " <<endl;
    lst1->Print();
    */
    
    /*
    cout << "Test IsEmpty Bool... Should return true, Fingers crossed." << endl;
    cout<< lst.IsEmpty();
    */

   /*
   cout << "Testing GetLength... Returns the length (should be 0)" << endl;
   cout << lst.GetLength(); << endl; 
   */
/*
cout<< "Testing Find" << endl;
cout<<"Needs to return x targets in the list" << endl; 
for(int i = 0; i < 5; i++)
{
    lst1->PutItemH(i);
}
cout << "Found " << lst1->Find(4) << endl;
*/
 

/*
cout << "Testing DeleteItem" << endl;
  const int key = 4;
  cout << "Should retun " << lst1->FIND(key) << endl;
  lst1->PutItemH(4);
  lst1->PutItemH(4); 
  lst1->PutItemH(4); 
  lst1->PutItemH(4); 
  lst1->PutItemH(4); 
  cout << "Before " << endl;
  lst1->Print();
  cout << "Deleted " << lst1->DeleteItem(key) << "things" << endl;
  cout << "After " << endl; 
  if(lst1->GetLength() != 0)
  {
    lst1->Print();
  }
  else{
    cout << "unable to delete" << endl; 
  }
*/

delete lst1; 
cout << endl; 
return 0;

  

}

