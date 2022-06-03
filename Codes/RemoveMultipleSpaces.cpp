    string nstr;

    for(int i=0; i<s.length();  ){
        if(s[i] == ' '){
            
            if(i==0 || i==s.length()-1){
                i++;
                continue;
            }
            while(s[i+1] == ' ')
                i++;
        }
        nstr += s[i++];
    }
   cout<<nstr<<endl;