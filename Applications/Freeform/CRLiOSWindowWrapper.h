//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLTraceableResource, UIWindow;

@interface CRLiOSWindowWrapper : NSObject
{
    CRLTraceableResource *_userInteractionIgnoredTraceableResource;	// 8 = 0x8
    unsigned long long _userInteractionIgnoredCount;	// 16 = 0x10
    unsigned long long _suspendUserInteractionIgnoredCount;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
}

+ (id)windowWrapperForView:(id)arg1 assert:(_Bool)arg2;	// IMP=0x00400000000e3a62
- (void).cxx_destruct;	// IMP=0x00200000000e4b99
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, nonatomic) _Bool isInSplitViewMode;
- (id)newWrapperBeginningIgnoringUserInteractionSafely;	// IMP=0x00100000000e4940
- (void)endIgnoringUserInteractionWithToken:(id)arg1;	// IMP=0x00100000000e451c
- (id)beginIgnoringUserInteraction;	// IMP=0x00100000000e40a8
- (id)initWithWindow:(id)arg1;	// IMP=0x00100000000e39cb

@end

