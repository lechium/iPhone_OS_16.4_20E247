//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUndoManager, PXHideAssetsAction;

__attribute__((visibility("hidden")))
@interface PUHidePhotosActionController : NSObject
{
    PXHideAssetsAction *_action;	// 8 = 0x8
    NSArray *_assets;	// 16 = 0x10
    NSUndoManager *_undoManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d6260
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d618b
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d5e17
- (id)initWithAssets:(id)arg1 undoManager:(id)arg2;	// IMP=0x00000000000d5d28

@end
