//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUILibraryMenuItemViewCell;

__attribute__((visibility("hidden")))
@interface VUILibraryGenresMenuCollectionConfiguration
{
    VUILibraryMenuItemViewCell *_menuItemSizingCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014a57
@property(retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;
- (Class)classForCollectionViewCell;	// IMP=0x0000000000014a21
- (double)minimumLineSpacing;	// IMP=0x0000000000014a18
- (id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2;	// IMP=0x000000000001476b
- (id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3;	// IMP=0x000000000001457a
- (id)generateCollectionView;	// IMP=0x00000000000143cd

@end

