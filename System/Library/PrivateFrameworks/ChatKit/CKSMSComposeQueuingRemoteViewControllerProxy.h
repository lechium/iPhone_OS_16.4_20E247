//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CKSMSCompose;

__attribute__((visibility("hidden")))
@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject
{
    NSMutableArray *_queuedInvocations;	// 8 = 0x8
    id <CKSMSCompose> _serviceViewControllerProxy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000447ae5
@property(retain, nonatomic) id <CKSMSCompose> serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property(retain, nonatomic) NSMutableArray *queuedInvocations; // @synthesize queuedInvocations=_queuedInvocations;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000447a37
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000044798e
- (void)dealloc;	// IMP=0x000000000044776a
- (id)init;	// IMP=0x00000000004476ea

@end

