//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, CAStateController, NSString;

__attribute__((visibility("hidden")))
@interface AVMicaPackage : NSObject
{
    CALayer *_rootLayer;	// 8 = 0x8
    NSString *_state;	// 16 = 0x10
    NSString *_packageName;	// 24 = 0x18
    CAStateController *_stateController;	// 32 = 0x20
    long long _layoutDirection;	// 40 = 0x28
    struct CGSize _targetSize;	// 48 = 0x30
    struct CGSize _unscaledSize;	// 64 = 0x40
}

+ (id)classSubstitions;	// IMP=0x00100000000d7deb
+ (void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d7cf6
- (void).cxx_destruct;	// IMP=0x00000000000d7be5
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=_unscaledSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void)_loadRootLayerIfNeeded;	// IMP=0x00000000000d7796
- (id)sublayerWithName:(id)arg1;	// IMP=0x00000000000d7719
- (id)availableStatesOnLayer:(id)arg1;	// IMP=0x00000000000d763e
- (id)availableStates;	// IMP=0x00000000000d75df
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;	// IMP=0x00000000000d753e
- (void)transitionToStateWithName:(id)arg1;	// IMP=0x00000000000d74c9
- (void)_recursivelyRemoveCompositingFiltersWithName:(id)arg1 rootLayer:(id)arg2;	// IMP=0x00000000000d7239
- (void)_recursivelySetFillColor:(struct CGColor *)arg1 rootLayer:(id)arg2;	// IMP=0x00000000000d7099
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;	// IMP=0x00000000000d6eec
- (void)_setState:(id)arg1;	// IMP=0x00000000000d6e76
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;	// IMP=0x00000000000d6df7
- (void)removeCompositingFiltersWithName:(id)arg1;	// IMP=0x00000000000d6d82
- (void)setState:(id)arg1 color:(struct CGColor *)arg2;	// IMP=0x00000000000d6ca9
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;	// IMP=0x00000000000d6ac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

