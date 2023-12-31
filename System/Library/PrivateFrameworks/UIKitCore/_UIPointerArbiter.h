//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIPointerArbitrating;

__attribute__((visibility("hidden")))
@interface _UIPointerArbiter : NSObject
{
    id <_UIPointerArbitrating> _core;	// 8 = 0x8
}

+ (id)sharedArbiter;	// IMP=0x0010000000caf605
- (void).cxx_destruct;	// IMP=0x0000000000caf71e
- (void)endScrollingWithRegion:(id)arg1;	// IMP=0x0000000000caf708
- (void)beginScrollingWithRegion:(id)arg1;	// IMP=0x0000000000caf6f2
@property(readonly, nonatomic) long long pointerState;
- (void)exitRegion:(id)arg1 removeStyle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000caf6c6
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000caf6b0
- (id)init;	// IMP=0x0000000000caf65a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

