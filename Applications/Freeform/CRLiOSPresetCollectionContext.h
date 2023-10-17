//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLEditingCoordinator, UITraitCollection;

@interface CRLiOSPresetCollectionContext : NSObject
{
    _Bool _isSearching;	// 8 = 0x8
    unsigned long long _contextType;	// 16 = 0x10
    CRLEditingCoordinator *_editingCoordinator;	// 24 = 0x18
    unsigned long long _pageIndex;	// 32 = 0x20
    unsigned long long _subpageIndex;	// 40 = 0x28
    UITraitCollection *_traitCollection;	// 48 = 0x30
    struct CGSize _contentSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003902d
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) unsigned long long subpageIndex; // @synthesize subpageIndex=_subpageIndex;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(readonly, nonatomic) CRLEditingCoordinator *editingCoordinator; // @synthesize editingCoordinator=_editingCoordinator;
@property(readonly, nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)description;	// IMP=0x0010000000038e8b
@property(readonly, nonatomic) _Bool isInTranslucentContainer;
@property(readonly, nonatomic) _Bool isInDarkContainer;
@property(readonly, nonatomic) _Bool hasCompactHeightCompactWidthTraitCollection;
@property(readonly, nonatomic) _Bool hasRegularHeightRegularWidthTraitCollection;
@property(readonly, nonatomic) _Bool hasRegularHeightCompactWidthTraitCollection;
@property(readonly, nonatomic) _Bool hasCompactHeightRegularWidthTraitCollection;
@property(readonly, nonatomic) _Bool isSidebarLike;
- (_Bool);	// IMP=0x0010000000038bdd
- (id)initWithContextType:(unsigned long long)arg1 contentSize:(struct CGSize)arg2 editingCoordinator:(id)arg3 isSearching:(_Bool)arg4 pageIndex:(unsigned long long)arg5 subpageIndex:(unsigned long long)arg6 traitCollection:(id)arg7;	// IMP=0x0010000000038afc

// Remaining properties
@property(readonly, nonatomic) _Bool isInPopover;

@end
