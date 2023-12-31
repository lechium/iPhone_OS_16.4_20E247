//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTEmbeddedReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x006000000000e807
+ (id)reachabilityForInternetConnection;	// IMP=0x006000000000e7ab
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x006000000000e71f
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x006000000000e65d
- (long long)currentReachabilityStatus;	// IMP=0x000000000000eb99
- (_Bool)connectionRequired;	// IMP=0x000000000000eaa7
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000000ea66
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000000e873
- (void)dealloc;	// IMP=0x000000000000e616

@end

