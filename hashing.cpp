hash_table(int a){
all_ele = a;
tbl = new list<int>[all_ele];
}
void inst_ele(int k){
tbl[fetch_hash(k)].push_back(k);
}
void disp(){
for(int i = 0; i < all_ele; i++){
cout << "The Index of item is " << i << "\n " <<endl;
for(int j : tbl[i])
cout <<"The value for the index "<<i << " is " << j << endl;
cout << endl;
}
}
};
int main() {
hash_table kh(3);
int a[] = {2, 4, 6};
for(int i = 0; i < 3; i++)
kh.inst_ele(a[i]);
cout << "The hash table is created is as follows: " << "\n"<< endl;
kh.disp();
return 0;
}