//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDropAnimationHandlers : NSObject
{
    NSMutableArray *_alongsideAnimationHandlers;	// 8 = 0x8
    NSMutableArray *_completionHandlers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003d19c9
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d1965
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d1901
@property(readonly, nonatomic) NSArray *completionHandlers;
@property(readonly, nonatomic) NSArray *alongsideAnimationHandlers;
- (void)resetAllAnimationHandlers;	// IMP=0x00000000003d18aa
- (void)invokeAllCompletionHandlers;	// IMP=0x00000000003d179d
- (id)init;	// IMP=0x00000000003d1728

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

