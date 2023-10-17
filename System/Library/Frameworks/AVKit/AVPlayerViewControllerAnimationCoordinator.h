//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerViewControllerAnimationCoordinator : NSObject
{
    NSMutableArray *_animations;	// 8 = 0x8
    NSMutableArray *_completions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d8631
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
- (void)didFinishAnimations:(_Bool)arg1;	// IMP=0x00000000000d8473
- (void)performCoordinatedAnimations;	// IMP=0x00000000000d82d7
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d819f
- (id)init;	// IMP=0x00000000000d8102

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
