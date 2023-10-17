//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPDirectionsRequestsCheckmarkSection, RAPDirectionsWhichOneQuestion, RAPReportComposerBadRouteSuggestionSection, RAPReportComposerDirectionsSubcategorySection, RAPTablePart;

@interface RAPReportComposerDirectionsViewController
{
    RAPDirectionsWhichOneQuestion *_question;	// 8 = 0x8
    RAPTablePart *_directionsRequestsPart;	// 16 = 0x10
    RAPDirectionsRequestsCheckmarkSection *_directionsRequestsSection;	// 24 = 0x18
    RAPTablePart *_subcategoryPart;	// 32 = 0x20
    RAPReportComposerDirectionsSubcategorySection *_subcategorySection;	// 40 = 0x28
    RAPTablePart *_betterRoutePart;	// 48 = 0x30
    RAPReportComposerBadRouteSuggestionSection *_betterRouteSection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000089baf1
- (void)_instrumentSelectingRoute;	// IMP=0x001000000089ba8a
- (void)_didTapOnCancel;	// IMP=0x001000000089ba14
- (void)proceedToDirectionInstructionsIncorrectQuestion:(id)arg1;	// IMP=0x001000000089b94c
- (void)proceedToArrivalEntryPointIncorrectQuestion:(id)arg1;	// IMP=0x001000000089b884
- (void)proceedToArrivalTimeIncorrectQuestion:(id)arg1;	// IMP=0x001000000089b7bc
- (void)proceedToBadRouteSuggestionsQuestion:(id)arg1;	// IMP=0x001000000089b6f4
- (void)proceedToProblemNotListedQuestion:(id)arg1;	// IMP=0x001000000089b62c
- (void)proceedToNextQuestion:(id)arg1;	// IMP=0x001000000089b50e
- (id)tableParts;	// IMP=0x001000000089ae44
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000089adc8
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) RAPDirectionsWhichOneQuestion *rapDirectionsWhichOneQuestion;
- (void)dealloc;	// IMP=0x001000000089ad5c
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089ab70

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
