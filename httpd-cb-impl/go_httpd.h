#ifndef _HTTPD_GO_H_
#define _HTTPD_GO_H_

#ifdef __cplusplus
extern "C" {
#endif

// exported functions by golang httpd.so
int StartHttpd(char* host, int port, void *httpd_cb, int show_log);
void StopHttpd();
int GetReqEnv(int client_id, char* name, char** val, int* val_len);
void IterReqEnvs(int client_id, void* iter_cb, void* udd);
int ReadBody(int client_id, char** body, int* body_len);
int SetStatus(int client_id, int code);
int SetRespHeader(int client_id, char* name, char* val);
int AddRespHeader(int client_id, char* name, char* val);
int OutputChunk(int client_id, char* chunk, int length);

#ifdef __cplusplus
}
#endif

#endif
