//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFWorkflowRunningContext;

@interface WFQueuedStatusPresentation : NSObject
{
    WFWorkflowRunningContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003173
@property(readonly, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000309e
@property(readonly) unsigned long long hash;
- (id)initWithRunningContext:(id)arg1;	// IMP=0x0010000000002fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

