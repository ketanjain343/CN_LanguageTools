char* uniqueChar(char *str){
    // Write your code here
  int ch[256];
  for(int i=0;i<256;i++)
  {
    ch[i]=0;
  }
  
    int i=0;
  while(str[i]!='\0')
  {
    int t=str[i];
    ch[t]++;
    i++;
  }
  
    int j=0;
  while(str[j]!='\0')
  {
    int t=str[j];
    if(ch[t]!=0)
    {
      j++;
      ch[t]=0;
    }
    
    else
    {
      int k;
      for(k=j+1;str[k]!='\0';k++)
      {
        str[k-1]=str[k];
      }
      str[k-1]=str[k];
    }
    int l;
    for(l=0;l<256;l++)
    {
    	if(ch[l]!=0)
    	{
    		break;
		}    	
	}
    if(l==256)
    {
    	int alpha;
    	for(alpha=j;str[alpha]!='\0';alpha++)
    	{
    		str[alpha]='\0';
		}
	}
  }
  return str;
}