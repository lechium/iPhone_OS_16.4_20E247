//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIContextMenuView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCascadedHierarchyLayout : NSObject
{
    _Bool _isAnimatingMenuAddition;	// 8 = 0x8
    _UIContextMenuView *_menuView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f59f2b
@property(nonatomic) _Bool isAnimatingMenuAddition; // @synthesize isAnimatingMenuAddition=_isAnimatingMenuAddition;
@property(nonatomic) __weak _UIContextMenuView *menuView; // @synthesize menuView=_menuView;
- (struct CAPoint3D)_submenuOffsetForCascadingLeft:(_Bool)arg1;	// IMP=0x0000000000f59e00
- (struct CGRect)_cascadingAreaBounds;	// IMP=0x0000000000f59a7e
- (id)_metrics;	// IMP=0x0000000000f599b0
- (void)navigateUpFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f5971e
- (void)navigateDownFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f58d74
- (void)performLayoutForComputingPreferredContentSize:(_Bool)arg1 withMaxContainerSize:(struct CGSize)arg2;	// IMP=0x0000000000f58003
- (struct CGSize)encompassingSize;	// IMP=0x0000000000f57f0c
- (id)initWithMenuView:(id)arg1;	// IMP=0x0000000000f57ea4

@end

