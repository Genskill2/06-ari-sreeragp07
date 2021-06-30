#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int count_characters(string s){
  int noc=0;
  for(int i=0;i<=strlen(s);i++){
    if(isalnum(s[i])>0){
      noc+=1;
    }
  }
  return noc;
}

int count_words(string s){
  int word_count=0;
  for(int i=0;i<=strlen(s);i++){
    if(s[i]==' '){
      word_count+=1;
    }
  }
  return word_count;
}

int count_sent(string s){
  int sent_count=0;
  for(int i=0;i<=strlen(s);i++){
    if(s[i]=='.' || s[i]=='?' || s[i]=='!'){
      sent_count+=1;
    }
  }
  return sent_count;
}


string ari(string s){
  float char_count,word_count,sent_count,r1,r2;
  double r;
  char_count = count_characters(s);
  word_count = count_words(s);
  sent_count = count_sent(s);
  r1 = (4.71*(char_count)/(word_count));
  r2 = (0.5*(word_count)/(sent_count));
  r=r1+r2-21.43;
  switch(((int)r/1)+1){
  case 1:
    return "Kindergarten";
  case 2:
    return "First/Second Grade";
  case 3:
    return "Third Grade";
  case 4:
    return "Fourth Grade";
  case 5:
    return "Fifth Grade";
  case 6:
    return "Sixth Grade";
  case 7:
    return "Seventh Grade";
  case 8:
    return "Eight Grade";
  case 9:
    return "Ninth Grade";
  case 10:
    return "Tenth Grade";
  case 11:
    return "Eleventh Grade";
  case 12:
    return "Twelfth grade";
  case 13:
      return "College student"; 
  case 14:
    return "Professor";
  }
}
