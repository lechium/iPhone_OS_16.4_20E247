//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICollectionViewCell;

__attribute__((visibility("hidden")))
@interface VUILibraryiOSMenuCollectionConfiguration
{
    _Bool _isDesignedForIpadEnabled;	// 8 = 0x8
    UICollectionViewCell *_menuItemSizingCell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001985ad
@property(nonatomic) _Bool isDesignedForIpadEnabled; // @synthesize isDesignedForIpadEnabled=_isDesignedForIpadEnabled;
@property(retain, nonatomic) UICollectionViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;
- (id)_layout;	// IMP=0x0000000000198427
- (Class)classForCollectionViewCell;	// IMP=0x00000000001983e9
- (double)minimumLineSpacing;	// IMP=0x00000000001983e0
- (id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2;	// IMP=0x0000000000197fac
- (id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3;	// IMP=0x0000000000197c7b
- (id)generateCollectionView;	// IMP=0x0000000000197ad2
- (id)init;	// IMP=0x0000000000197a43

@end

