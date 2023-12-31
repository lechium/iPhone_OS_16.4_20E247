//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPLayoutDownloader, RAPPersonalPlaceRefinementCoordinator, RAPQuestion, RAPWorkflowLayoutManager, UIActivityIndicatorView;
@protocol RAPMenu;

@interface RAPReportComposerCategoryViewController
{
    RAPLayoutDownloader *_layoutDownloader;	// 48 = 0x30
    RAPWorkflowLayoutManager *_layoutManager;	// 56 = 0x38
    UIActivityIndicatorView *_activityIndicator;	// 64 = 0x40
    RAPQuestion<RAPMenu> *_categoryQuestion;	// 72 = 0x48
    RAPPersonalPlaceRefinementCoordinator *_homeWorkCoordinator;	// 80 = 0x50
    _Bool _isIncidentReportingEnabled;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000094790d
- (void)incidentsReportingEnablementDidUpdate;	// IMP=0x0010000000947887
- (void)refinementCoordinator:(id)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(id)arg3;	// IMP=0x0010000000947554
- (void)refinementCoordinatorRequestsChangeAddress:(id)arg1 withShortcut:(id)arg2;	// IMP=0x00100000009474a2
- (void)proceedToRAPPersonalPlaceCorrectionsQuestion:(id)arg1;	// IMP=0x0010000000947280
- (void)proceedToBadRouteSuggestionsQuestion:(id)arg1;	// IMP=0x00100000009471b8
- (void)_proceedToIncidentsQuestion:(id)arg1;	// IMP=0x00100000009470f0
- (void)proceedToLabelCorrectionsQuestion:(id)arg1;	// IMP=0x0010000000947028
- (void)proceedToPlaceClosureQuestion:(id)arg1;	// IMP=0x0010000000946f60
- (void)proceedToProblemWithDirectionsQuestion:(id)arg1;	// IMP=0x0010000000946e98
- (void)proceedToIncorrectSearchResultsQuestion:(id)arg1;	// IMP=0x0010000000946dd0
- (void)proceedToArrivalTimeIncorrectQuestion:(id)arg1;	// IMP=0x0010000000946d08
- (void)proceedToProblemNotListedQuestion:(id)arg1;	// IMP=0x0010000000946c40
- (void)proceedToNextQuestion:(id)arg1;	// IMP=0x0010000000946a10
@property(readonly, nonatomic) int analyticTarget;
- (void)_cancel;	// IMP=0x00100000009469df
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000946963
- (_Bool)_shouldUseServerControlledUI;	// IMP=0x0010000000946915
- (void)viewDidLoad;	// IMP=0x0010000000945d6d
- (void)dealloc;	// IMP=0x0010000000945cbb
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000945bc9

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

