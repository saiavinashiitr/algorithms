/* generates all possible permutations of the string */
void permutations(string s,string temp,vector<string> &v,int l){
  if(l==s.length()){
    v.push_back(temp);
    return;
  }
  temp+="l";
  int k=temp.length();
  for(int i=l+1;i<=s.length();i++){
    temp[k-1]=s[l];
    permutations(s,temp,v,l+1);
    swap(s[l],s[i]);
  }
}
vector<string> generatePermutations(string s){
  vector<string> v;
  permutations(s,"",v,0);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  return v;
}
