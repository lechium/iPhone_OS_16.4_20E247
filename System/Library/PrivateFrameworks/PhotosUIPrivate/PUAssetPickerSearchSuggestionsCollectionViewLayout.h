//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@protocol SearchSuggestionsCollectionViewLayoutUpdatesDelegate;

__attribute__((visibility("hidden")))
@interface PUAssetPickerSearchSuggestionsCollectionViewLayout : UICollectionViewCompositionalLayout
{
    id <SearchSuggestionsCollectionViewLayoutUpdatesDelegate> _layoutUpdatesDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000117f11
@property(nonatomic) __weak id <SearchSuggestionsCollectionViewLayoutUpdatesDelegate> layoutUpdatesDelegate; // @synthesize layoutUpdatesDelegate=_layoutUpdatesDelegate;
- (void)invalidateLayout;	// IMP=0x0000000000117e73

@end

