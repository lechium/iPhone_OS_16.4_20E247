//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIFont, _UIStatusBar;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Fallback : NSObject
{
    _UIStatusBar *_statusBar;	// 8 = 0x8
    NSArray *_placements;	// 16 = 0x10
}

+ (_Bool)requiresIterativeOverflowLayout;	// IMP=0x0010000000fa4c75
+ (_Bool)scalesWithScreenNativeScale;	// IMP=0x0010000000fa4c6d
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;	// IMP=0x0010000000fa4c57
- (void).cxx_destruct;	// IMP=0x0000000000fa53b8
@property(retain, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000fa529e
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000fa517c
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000fa4c85
@property(readonly, nonatomic) UIFont *clockFont;
@property(readonly, nonatomic) _Bool supportsIndirectPointerTouchActions;

// Remaining properties
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
