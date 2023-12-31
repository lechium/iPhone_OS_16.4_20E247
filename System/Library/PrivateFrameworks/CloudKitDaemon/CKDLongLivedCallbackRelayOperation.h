//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation
{
}

- (void)cancel;	// IMP=0x00000000002fde3e
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002fdd65
- (void)operationWithID:(id)arg1 receivedCallback:(id)arg2;	// IMP=0x00000000002fdc90
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;	// IMP=0x00000000002fdc7c
- (void)main;	// IMP=0x00000000002fdbe3
- (_Bool)isLongLivedCallbackRelayOperation;	// IMP=0x00000000002fdbdb
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002fdbd3
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

