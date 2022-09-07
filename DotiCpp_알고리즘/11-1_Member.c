
#ifndef ___Member
#define ___Member



typedef struct {
   int no;
   char name[20];
}Member;

#define MEMBER_NO 1
#define MEMBER_NO 2


int MemberNoCmp(const Member* x, const Member* y);

int MemberNameCompare(const Member* x, const Member* y);\

void PrintMember(const Member* x, const Member* y);
void PrintLnMember(const Member* x, const Member* y);

Member ScanMember(const char* messge, int sw);
#endif