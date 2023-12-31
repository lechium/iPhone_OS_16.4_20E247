//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RoutingAppLaunchRecord : NSObject
{
    NSMutableArray *_recentlyLaunchedApps;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000008e239c
- (void).cxx_destruct;	// IMP=0x00100000008e23b5
@property(retain, nonatomic) NSMutableArray *recentlyLaunchedApps; // @synthesize recentlyLaunchedApps=_recentlyLaunchedApps;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000008e22f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000008e22ce
- (void)recordAppLaunch:(id)arg1;	// IMP=0x00100000008e2221
- (id)appIDsSortedByMostRecentLaunch:(id)arg1;	// IMP=0x00100000008e1f53
- (id)initWithRecentlyLaunchedApps:(id)arg1;	// IMP=0x00100000008e1eb3
- (id)init;	// IMP=0x00100000008e1e9a
- (id)rankedRoutingAppProxiesWithProxies:(id)arg1;	// IMP=0x0010000000751e56

@end

