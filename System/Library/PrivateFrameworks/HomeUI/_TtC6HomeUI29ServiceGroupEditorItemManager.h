//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC6HomeUI29ServiceGroupEditorItemManager : HFItemManager
{
    MISSING_TYPE *creatingNew;	// 8 = 0x8
    MISSING_TYPE *nameAndIconItem;	// 16 = 0x10
    MISSING_TYPE *accessoryElementItemModule;	// 24 = 0x18
    MISSING_TYPE *selectionController;	// 32 = 0x20
    MISSING_TYPE *staticItemProvider;	// 40 = 0x28
    MISSING_TYPE *accessoryElementContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f8a30
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000000f89d0
- (id)_homeFuture;	// IMP=0x00000000000f8920
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000000f8860
- (id)_buildItemModulesForHome:(id)arg1;	// IMP=0x00000000000f84e0
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000000f8290

@end

