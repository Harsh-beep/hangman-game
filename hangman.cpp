#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>map;
    string fruits[38] = { "apple", "apricot", "avocado", "banana", "blackberry", "blueberry", "cantaloupe", "cherry", "coconut", "cranberry", "cucumber", "dragonfruit", "durian", "elderberry", "fig", "grape", "grapefruit", "guava", "honeydew melon", "kiwifruit", "lemon", "lime", "lychee", "mango", "mandarin orange", "nectarine", "orange", "papaya", "peach", "pear", "pineapple", "plum", "pomegranate", "raspberry", "strawberry", "tangerine", "watermelon", "zucchini" };
    string word;
    srand(time(0));
	for(int i = 0; i < 1; i++){
	    word = fruits[rand() % 38];
	}
    string guess = "";
    for(auto i:word){
        guess+="_";
        map[i]++;
    }
    int choices = map.size() * 2;
    cout<<"Size of the word is : "<<guess.size()<<endl;
    cout<<"No. of choices given : "<<choices<<endl;
    while(choices>0){
        char c;
        cout<<"Guess a character :- ";
        cin>>c;
        choices--;
        cout<<endl;
        bool flag=false;
        for(int i=0;i<word.size();i++){
            if(c==word[i]){
                guess[i]=c;
                flag=true;
            }
        }
        if(guess == word){
        	cout<<"Word = "<<word<<endl;
            cout<<"Congratulations!! You have guessed the correct word!"<<endl;
            break;
        }
        if(flag==true){
        	cout<<"Choices left : "<<choices<<endl;
            cout<<"You have guessed the correct character!"<<endl;
            cout<<"Word : "<<guess<<endl;
        }
        else{
        	cout<<"Choices left : "<<choices<<endl;
            cout<<"No character match to your guessed character!"<<endl;
        }
    }
    cout<<"Game Over";
    return 0;
}