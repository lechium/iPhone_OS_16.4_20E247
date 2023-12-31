//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class DDLookupQuery, DDParsecFirstTimeViewController, NSArray, NSDate, NSString, SearchUIResultsViewController;

@interface DDParsecServiceCollectionViewController : UINavigationController
{
    SearchUIResultsViewController *_resultsViewController;	// 8 = 0x8
    DDLookupQuery *_lookupQuery;	// 16 = 0x10
    _Bool _sectionsIsSet;	// 24 = 0x18
    _Bool _loadingError;	// 25 = 0x19
    _Bool _useNetwork;	// 26 = 0x1a
    _Bool _searchViewVisible;	// 27 = 0x1b
    _Bool _fteMode;	// 28 = 0x1c
    NSString *_fte_ack_key;	// 32 = 0x20
    DDParsecFirstTimeViewController *_firstTimeViewController;	// 40 = 0x28
    NSDate *_lastAppearTime;	// 48 = 0x30
    NSDate *_lastDisappearTime;	// 56 = 0x38
    _Bool _sourceIsHint;	// 64 = 0x40
    _Bool _previewMode;	// 65 = 0x41
    _Bool _sheetMode;	// 66 = 0x42
    _Bool _popoverMode;	// 67 = 0x43
    _Bool _doneClicked;	// 68 = 0x44
    _Bool _hasExternaDataSource;	// 69 = 0x45
    long long _style;	// 72 = 0x48
    double _scale;	// 80 = 0x50
    NSString *_trueTitle;	// 88 = 0x58
    _Bool _remoteTextQuery;	// 96 = 0x60
    _Bool _dictionaryMode;	// 97 = 0x61
    CDUnknownBlockType _queryBlock;	// 104 = 0x68
    NSArray *_sections;	// 112 = 0x70
    unsigned long long _queryId;	// 120 = 0x78
}

+ (id)_exportedInterface;	// IMP=0x002000000000a540
+ (id)_remoteViewControllerInterface;	// IMP=0x001000000000a520
- (void).cxx_destruct;	// IMP=0x002000000000fae0
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) CDUnknownBlockType queryBlock; // @synthesize queryBlock=_queryBlock;
@property(nonatomic) double DDViewScale; // @synthesize DDViewScale=_scale;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000000f910
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000000f850
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000000f720
- (void)fetchPreviewImageForResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f530
- (void)didReportUserResponseFeedback:(id)arg1;	// IMP=0x001000000000f180
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;	// IMP=0x001000000000f010
- (void)didEngageResult:(id)arg1;	// IMP=0x001000000000ef10
- (void)didEngageCardSection:(id)arg1;	// IMP=0x001000000000ed80
- (_Bool)firstTimeExperienceIsInPopoverPresentation;	// IMP=0x001000000000ed50
- (void)firstTimeExperienceContinueButtonPressed;	// IMP=0x001000000000ebe0
- (void)updateVisualModeWithController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000e880
- (void)updateVisualMode:(_Bool)arg1;	// IMP=0x001000000000e810
- (void)setSheetMode:(_Bool)arg1;	// IMP=0x001000000000e7a0
- (void)setPreviewMode:(_Bool)arg1;	// IMP=0x001000000000e730
- (void)setPopoverMode:(_Bool)arg1;	// IMP=0x001000000000e6c0
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x001000000000e670
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x001000000000e560
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000e260
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000dcc0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000dc60
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000da60
- (void)showError:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000d240
- (void)showContent:(_Bool)arg1;	// IMP=0x001000000000cc60
- (void)interactionEndedWithPunchout:(_Bool)arg1;	// IMP=0x001000000000cb80
- (void)doneButtonPressed:(id)arg1 punchout:(_Bool)arg2;	// IMP=0x001000000000ca40
- (void)doneButtonPressed:(id)arg1;	// IMP=0x001000000000c9e0
- (void)showLoadingSpinner:(_Bool)arg1;	// IMP=0x001000000000c8f0
- (void)appWillEnterForeground;	// IMP=0x001000000000c680
- (void)appDidEnterBackground;	// IMP=0x001000000000c500
- (void)setSearchVisible:(_Bool)arg1;	// IMP=0x001000000000c4b0
- (void)setTitle:(id)arg1;	// IMP=0x001000000000c320
- (void)addSections:(id)arg1 error:(id)arg2;	// IMP=0x001000000000bfc0
- (void)dealloc;	// IMP=0x001000000000bf70
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000000bf10
- (_Bool)presentsWithMargins;	// IMP=0x001000000000beb0
- (void)prepareWithQueryObject:(id)arg1 previewMode:(_Bool)arg2 sheetMode:(_Bool)arg3 popoverMode:(_Bool)arg4 viewStyle:(long long)arg5 scale:(double)arg6 dictionaryMode:(_Bool)arg7 remoteTextQuery:(_Bool)arg8;	// IMP=0x001000000000b8d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000b7e0
- (void)setQuery:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b750
- (void)startQueryWithResult:(id)arg1 context:(id)arg2;	// IMP=0x001000000000af60
- (void)showClientQueryResults:(id)arg1 error:(id)arg2;	// IMP=0x001000000000aee0
- (void)startQueryWithQuery:(id)arg1;	// IMP=0x001000000000ad40
- (void)startQueryWithString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x001000000000a560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

