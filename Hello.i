%module Hello
%{
extern void sorts(char *arr[], int length, int order);
%}
extern void sorts(char *arr[], int length, int order);