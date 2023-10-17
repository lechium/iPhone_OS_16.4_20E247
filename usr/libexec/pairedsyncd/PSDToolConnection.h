//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSDToolConnection : NSObject
{
}

- (oneway void)cancelSyncSession;	// IMP=0x002000000001035a
- (oneway void)clearCurrentResumeContext;	// IMP=0x0010000000010316
- (oneway void)getOrderedActivityInfosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000102b0
- (id)services;	// IMP=0x0010000000010271
- (oneway void)startSyncWithOptions:(id)arg1;	// IMP=0x001000000001026b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
