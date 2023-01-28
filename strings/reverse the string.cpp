string Solution::solve(string A) {

    vector<string>helper ;

    int ind = -1 ;

    for(int i = 0; i < A.size() ; i++){

        if(A[i]==' '){

            continue ;

        }else{

            ind = i ;

            break ;

        }

    }

    if(ind==-1){

        return "";

    }else{

        int n = A.size();

        string temp = "";

        for(int i = ind ; i < n ; i++){

            if(A[i]==' '){

                if(temp != ""){

                    helper.push_back(temp);

                }

                temp = "";

            }else{

                string x(1, A[i]);

                temp += x ;

            }

        }

        if(temp.size()>0){

            helper.push_back(temp);

        }

        reverse(helper.begin(), helper.end());

        string ans = "";

        for(int i = 0 ; i < helper.size() ; i++){

            // cout << "<" << helper[i] << " " << helper[i].size() << ">";

            if(i==helper.size()-1){

                ans += helper[i] ;

            }else{

                ans += helper[i] + " ";

            }

        }

        return ans ;

    }

}