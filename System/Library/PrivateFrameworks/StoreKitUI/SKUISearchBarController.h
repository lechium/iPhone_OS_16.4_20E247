//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUIClientContext, SKUIFocusedTouchGestureRecognizer, SKUISearchBarViewElement, SKUISearchFieldController, UISearchBar, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISearchBarController : NSObject
{
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    _Bool _displaysSearchBarInNavigationBar;	// 24 = 0x18
    UIViewController *_parentViewController;	// 32 = 0x20
    UISearchBar *_searchBar;	// 40 = 0x28
    SKUISearchFieldController *_searchFieldController;	// 48 = 0x30
    _Bool _showsResultsForEmptyField;	// 56 = 0x38
    _Bool _usesSearchFieldController;	// 57 = 0x39
    SKUISearchBarViewElement *_viewElement;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000329acf
@property(nonatomic) _Bool showsResultsForEmptyField; // @synthesize showsResultsForEmptyField=_showsResultsForEmptyField;
@property(retain, nonatomic) SKUISearchBarViewElement *searchBarViewElement; // @synthesize searchBarViewElement=_viewElement;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_searchFieldController;	// IMP=0x0000000000329a15
- (void)_removeCancelTouchGestureRecognizer;	// IMP=0x000000000032999c
- (id)_newSearchFieldController;	// IMP=0x00000000003298c7
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;	// IMP=0x0000000000329744
- (void)_dispatchChangeEventWithText:(id)arg1;	// IMP=0x00000000003296a6
- (void)_customizeSearchFieldController:(id)arg1;	// IMP=0x00000000003295d2
- (void)_customizeSearchBar:(id)arg1;	// IMP=0x000000000032946c
- (void)_cancelGestureAction:(id)arg1;	// IMP=0x000000000032942f
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000000003293a8
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000329393
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000000329381
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x000000000032924f
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;	// IMP=0x00000000003291ea
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;	// IMP=0x00000000003290ce
@property(readonly, nonatomic) UISearchBar *searchBar;
- (void)resignActive:(_Bool)arg1;	// IMP=0x0000000000328f7b
- (void)becomeActive;	// IMP=0x0000000000328f65
@property(readonly, nonatomic) _Bool canBecomeActive;
- (void)reloadAfterDocumentUpdate;	// IMP=0x0000000000328ee1
- (void)dealloc;	// IMP=0x0000000000328e7d
- (id)initWithSearchBarViewElement:(id)arg1;	// IMP=0x0000000000328db9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

