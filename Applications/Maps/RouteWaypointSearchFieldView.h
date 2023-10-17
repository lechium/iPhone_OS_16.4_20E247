//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SearchFieldItem, UISearchBar, UISearchTextField;
@protocol RouteWaypointSearchFieldsDelegate;

@interface RouteWaypointSearchFieldView
{
    UISearchBar *_searchBar;	// 8 = 0x8
    UISearchTextField *_searchField;	// 16 = 0x10
    SearchFieldItem *_searchFieldItem;	// 24 = 0x18
    SearchFieldItem *_previousSearchFieldItem;	// 32 = 0x20
    id <RouteWaypointSearchFieldsDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000bd69bc
@property(nonatomic) __weak id <RouteWaypointSearchFieldsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SearchFieldItem *previousSearchFieldItem; // @synthesize previousSearchFieldItem=_previousSearchFieldItem;
@property(retain, nonatomic) SearchFieldItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
- (_Bool)searchBarShouldClear:(id)arg1;	// IMP=0x0010000000bd68be
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000bd67d1
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000bd6752
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0010000000bd6636
- (void)clear;	// IMP=0x0010000000bd65c6
- (void)updateSearchFieldsFromIndex:(unsigned long long)arg1 withItem:(id)arg2;	// IMP=0x0010000000bd6520
- (_Bool)containsWaypointForItem:(id)arg1;	// IMP=0x0010000000bd6425
@property(readonly, nonatomic) _Bool containsCurrentLocationItem;
- (id)itemsForRouteRequest;	// IMP=0x0010000000bd632c
- (_Bool)_shouldHideDynamicCurrentLocation;	// IMP=0x0010000000bd62c7
- (void)endEditingFields;	// IMP=0x0010000000bd62aa
- (void)beginEditingNextSearchField;	// IMP=0x0010000000bd61d4
@property(readonly, nonatomic) _Bool isEditingAnySearchField;
@property(readonly, nonatomic) _Bool hasInput;
- (void)updateTheme;	// IMP=0x0010000000bd606c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000bd5b7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
