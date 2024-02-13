// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

	int mid;
	bool isBad;
	int left=0,right=n;
	int badversion=n;
	while(left<right-1){
        mid=(left+(right-left)/2);
		isBad=isBadVersion(mid);
		if (isBad)
		{   right=mid;
//			mid=(left+mid)/2;
		}else{
            left=mid;
//			mid=(mid+right)/2;
		}
		if (isBad && mid<badversion)
		{
			badversion=mid;
		}
	}
	
        return badversion;
    }
};
