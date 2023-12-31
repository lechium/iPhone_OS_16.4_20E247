//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;
@protocol OS_xpc_object;

@interface BMStateVectorMetricsCollector : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000cc0a
- (unsigned long long)timestampCountForStateVector:(id)arg1;	// IMP=0x001000000000cb3d
- (unsigned long long)sizeOfSerializedStateVectorInBytes:(id)arg1;	// IMP=0x001000000000ca5d
- (id)dateToRelativePositionDictionary;	// IMP=0x001000000000c930
- (id)computeStateVectorMetrics;	// IMP=0x001000000000bfa2
- (void)computeAndSendStateVectorMetrics;	// IMP=0x001000000000be6a
- (id)initWithDatabase:(id)arg1 activity:(id)arg2;	// IMP=0x001000000000bdd1

@end

