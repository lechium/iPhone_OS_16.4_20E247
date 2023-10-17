//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowseManager, CarMapTrackingController, CarSearchCategoriesCardViewController, NGChromeViewController, NSArray, NSString, UIScrollView;

@interface CarSearchCategoriesModeController : NSObject
{
    _Bool _isNavigating;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
    CarSearchCategoriesCardViewController *_categoriesCard;	// 24 = 0x18
    BrowseManager *_browseManager;	// 32 = 0x20
    NSArray *_categories;	// 40 = 0x28
}

+ (void)prepareNearbySAR;	// IMP=0x00200000007e49cf
+ (void)prepareNearby;	// IMP=0x00100000007e4909
+ (id)_traitsForNavigation:(_Bool)arg1;	// IMP=0x00100000007e4029
- (void).cxx_destruct;	// IMP=0x00200000007e50fc
@property(nonatomic) _Bool isNavigating; // @synthesize isNavigating=_isNavigating;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) BrowseManager *browseManager; // @synthesize browseManager=_browseManager;
@property(retain, nonatomic) CarSearchCategoriesCardViewController *categoriesCard; // @synthesize categoriesCard=_categoriesCard;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)_ppt_selectKeyboardSearchButton;	// IMP=0x00100000007e506c
- (void)_ppt_selectKeyboardMode;	// IMP=0x00100000007e5023
- (void)_ppt_selectFirstCarplayBrowseCategory;	// IMP=0x00100000007e4fe6
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
- (void)searchCategoriesCard:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x00100000007e4c6c
- (void)searchCategoriesCardDidSelectKeyboardSearch:(id)arg1 usingInteractionModel:(unsigned long long)arg2;	// IMP=0x00100000007e4b82
- (void)searchCategoriesCardDidSelectSiriSearch:(id)arg1 usingInteractionModel:(unsigned long long)arg2;	// IMP=0x00100000007e4a98
- (void)_updateCategories:(id)arg1;	// IMP=0x00100000007e47d9
- (void)configureFocusContainerGuideController:(id)arg1;	// IMP=0x00100000007e47c2
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000007e4607
- (id)desiredCards;	// IMP=0x00100000007e45a0
- (void);	// IMP=0x00100000007e41f3
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsMapView;	// IMP=0x00100000007e41d8
- (id)mapView;	// IMP=0x00100000007e4188
- (id)init;	// IMP=0x00100000007e3e8e

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
