
#ifndef HTTP_GETPOST_H_
#define HTTP_GETPOST_H_

bool HttpGet(char *URL,char *buffer,int buffer_size,char *authetication_token);
bool HttpPost(char *URL,char *buffer,int buffer_size,char *authetication_token);

#endif //HTTP_GETPOST_H_