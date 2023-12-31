//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MULoadingView, UIView;

__attribute__((visibility("hidden")))
@interface MULoadingOverlayController : NSObject
{
    MULoadingView *_loadingView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UIView *_parentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006d801
- (void)updateLayoutForBoundsChange;	// IMP=0x000000000006d78e
- (void)removeLoadingOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d557
- (void)attachLoadingOverlay;	// IMP=0x000000000006d3a8
- (id)initWithParentView:(id)arg1 contentView:(id)arg2;	// IMP=0x000000000006d316

@end

