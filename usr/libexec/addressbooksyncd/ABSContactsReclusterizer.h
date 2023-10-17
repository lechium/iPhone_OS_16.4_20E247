//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ABSContactsReclusterizer : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    NSMutableDictionary *_clusters;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000014d14
- (void).cxx_destruct;	// IMP=0x002000000001605a
- (void)_insureContact:(id)arg1 isClustered:(id)arg2;	// IMP=0x00100000000158d4
- (void)_insureContactsAreSolo:(id)arg1;	// IMP=0x0010000000015523
- (void)_processClusters;	// IMP=0x0010000000014f9f
- (void)_registerForNotifications;	// IMP=0x0010000000014f04
- (void)stashCluster:(id)arg1 forGuid:(id)arg2;	// IMP=0x0010000000014df6
- (id)init;	// IMP=0x0010000000014d69

@end
