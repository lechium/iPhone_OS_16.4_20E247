//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RBSTerminationAssertion;
@protocol OS_dispatch_semaphore;

@interface BATerminationAssertion : NSObject
{
    RBSTerminationAssertion *_terminationAssertion;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_syncSema;	// 16 = 0x10
    CDUnknownBlockType _asyncClientBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000008eac
@property(copy, nonatomic) CDUnknownBlockType asyncClientBlock; // @synthesize asyncClientBlock=_asyncClientBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncSema; // @synthesize syncSema=_syncSema;
@property(retain, nonatomic) RBSTerminationAssertion *terminationAssertion; // @synthesize terminationAssertion=_terminationAssertion;
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000008dd4
- (void)invalidate;	// IMP=0x0010000000008d6b
- (void)acquireAssertionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008a44
- (_Bool)acquireAssertionSync:(id *)arg1;	// IMP=0x00100000000088e6
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000008792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
