//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GEOMapRegion, NSString, RAPSearchAutocompleteBlockFilter, SearchDataSource, UISearchController, UITableView;
@protocol RAPSearchAutocompleteDelegate;

@interface RAPSearchAutocompleteViewController : UIViewController
{
    UISearchController *_searchController;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    SearchDataSource *_dataSource;	// 24 = 0x18
    NSString *_currentSearchString;	// 32 = 0x20
    unsigned long long _resultTypes;	// 40 = 0x28
    RAPSearchAutocompleteBlockFilter *_autocompleteFilter;	// 48 = 0x30
    _Bool _allowsFreeformResultText;	// 56 = 0x38
    int _entryPoint;	// 60 = 0x3c
    id <RAPSearchAutocompleteDelegate> _delegate;	// 64 = 0x40
    NSString *_titleText;	// 72 = 0x48
    GEOMapRegion *_boundedMapRegion;	// 80 = 0x50
    NSString *_placeholderText;	// 88 = 0x58
}

+ (id)poiAutocompleteViewControllerWithBoundedMapRegion:(id)arg1 excludedMUIDs:(id)arg2;	// IMP=0x002000000087eafb
+ (id)addressAutocompleteViewControllerWithInitialSearchString:(id)arg1;	// IMP=0x001000000087ea07
- (void).cxx_destruct;	// IMP=0x002000000088001c
@property(nonatomic) _Bool allowsFreeformResultText; // @synthesize allowsFreeformResultText=_allowsFreeformResultText;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) GEOMapRegion *boundedMapRegion; // @synthesize boundedMapRegion=_boundedMapRegion;
@property(nonatomic) int entryPoint; // @synthesize entryPoint=_entryPoint;
- (id);	// IMP=0x001000000087ff81
@property(nonatomic) __weak id <RAPSearchAutocompleteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x001000000087ff3f
- (void)_updateWithInputText:(id)arg1;	// IMP=0x001000000087fdb9
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x001000000087fcb3
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x001000000087fc41
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x001000000087fc21
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x001000000087fc04
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000087f86d
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x001000000087f867
- (void)_dismissViewController;	// IMP=0x001000000087f7a2
- (void)_cancelTapped;	// IMP=0x001000000087f717
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000087f59e
- (void)viewDidLoad;	// IMP=0x001000000087edaa
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)initWithPlaceholderText:(id)arg1 initialSearchString:(id)arg2 allowsFreeformResultText:(_Bool)arg3 resultTypes:(unsigned long long)arg4 blockFilter:(id)arg5;	// IMP=0x001000000087ec1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
