//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFDialogRequest, WFWorkflowRunningContext;

@interface WFQueuedDialog : NSObject
{
    _Bool _isFollowUp;	// 8 = 0x8
    WFDialogRequest *_request;	// 16 = 0x10
    WFWorkflowRunningContext *_context;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000002fa9
@property(nonatomic) _Bool isFollowUp; // @synthesize isFollowUp=_isFollowUp;
- (void);	// IMP=0x0010000000002f88
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) WFDialogRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002e8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

