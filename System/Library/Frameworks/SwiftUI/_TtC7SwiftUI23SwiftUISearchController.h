//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchController.h>

@class MISSING_TYPE, UISearchBar;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI23SwiftUISearchController : UISearchController
{
    MISSING_TYPE *searchItem;	// 53384 = 0xd088
    MISSING_TYPE *$__lazy_storage_$__searchBar;	// 0 = 0x0
    MISSING_TYPE *coordinator;	// 0 = 0x0
    MISSING_TYPE *suggestions;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000081b3cd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000081b36e
- (id)initWithSearchResultsController:(id)arg1;	// IMP=0x000000000081b31c
@property(nonatomic, readonly) UISearchBar *searchBar;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000081b293
- (void)updateSearchResultsForSearchController:(id)arg1 selectingSearchSuggestion:(id)arg2;	// IMP=0x000000000081b15b
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000000081b0df
- (void)searchController:(id)arg1 willChangeToSearchBarPlacement:(long long)arg2;	// IMP=0x000000000081b081
- (id)init;	// IMP=0x000000000081a2ec

@end
