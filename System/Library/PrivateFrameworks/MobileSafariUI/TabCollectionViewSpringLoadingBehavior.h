//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TabCollectionView><TabCollectionViewDragDropSupport, UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

__attribute__((visibility("hidden")))
@interface TabCollectionViewSpringLoadingBehavior : NSObject
{
    id <UISpringLoadedInteractionBehavior> _behavior;	// 8 = 0x8
    id <UISpringLoadedInteractionEffect> _effect;	// 16 = 0x10
    id <TabCollectionView><TabCollectionViewDragDropSupport> _tabView;	// 24 = 0x18
}

+ (void)addSpringLoadedInteractionToTabView:(id)arg1;	// IMP=0x00100000001d3087
- (void).cxx_destruct;	// IMP=0x00000000001d3561
@property(nonatomic) __weak id <TabCollectionView><TabCollectionViewDragDropSupport> tabView; // @synthesize tabView=_tabView;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x00000000001d343e
- (void)interactionDidFinish:(id)arg1;	// IMP=0x00000000001d3428
- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000001d32a5
- (id)init;	// IMP=0x00000000001d2ff2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
