//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class CKServerChangeToken;
@protocol CKFetchNotificationChangesOperationCallbacks;

@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    _Bool _moreComing;	// 8 = 0x8
    _Bool _wantsChanges;	// 9 = 0x9
    CDUnknownBlockType _notificationChangedBlock;	// 16 = 0x10
    CKServerChangeToken *_resultServerChangeToken;	// 24 = 0x18
    CKServerChangeToken *_previousServerChangeToken;	// 32 = 0x20
    unsigned long long _resultsLimit;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001e3f8f
@property(nonatomic) _Bool wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000001e3e5b
- (void)main;	// IMP=0x00000000001e3b03
- (int)operationType;	// IMP=0x00000000001e3af8
- (void)_handleFetchChangesRequestFinished:(id)arg1;	// IMP=0x00000000001e37ba
- (id)activityCreate;	// IMP=0x00000000001e3791
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000001e36cf

// Remaining properties
@property(retain, nonatomic) id <CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

