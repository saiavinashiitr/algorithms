/* utility function that swaps two characters */
void swap(char &a,char &b){
  char c=a;
  a=b;
  b=c;
}
/* generates all possible permutations of the string */
void generatePermutations(string s,string temp,vector<string> &v,int l){
  if(l==s.length()){
    v.push_back(temp);
    return;
  }
  temp+="l";
  int k=temp.length();
  for(int i=l+1;i<=s.length();i++){
    temp[k-1]=s[l];
    generatePermutations(s,temp,v,l+1);
    swap(s[l],s[i]);
  }
}
/* returns all possible permutations of a string */
vector<string> permutations(string s){
  vector<string> v;
  generatePermutations(s,"",v,0);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  return v;
}
