//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPReportComposerCommentPart, RAPReportComposerSearchSubcategorySection, RAPReportComposerWhichSearchSection, RAPSearchWhichOneQuestion, RAPTablePart, RAPTablePartSection;

@interface RAPReportComposerIncorrectSearchViewController
{
    RAPSearchWhichOneQuestion *_question;	// 8 = 0x8
    RAPTablePart *_search;	// 16 = 0x10
    RAPTablePart *_searchRequestPart;	// 24 = 0x18
    RAPReportComposerWhichSearchSection *_searchSection;	// 32 = 0x20
    RAPTablePart *_subcategoryPart;	// 40 = 0x28
    RAPReportComposerSearchSubcategorySection *_subcategorySection;	// 48 = 0x30
    RAPReportComposerCommentPart *_commentPart;	// 56 = 0x38
    RAPTablePartSection *_commentSection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000ace5b8
- (void)proceedToSearchResultIncorrectQuestion:(id)arg1;	// IMP=0x0010000000ace4f0
- (void)proceedToPlaceClosureQuestion:(id)arg1;	// IMP=0x0010000000ace428
- (void)proceedToProblemNotListedQuestion:(id)arg1;	// IMP=0x0010000000ace360
- (void)proceedToNextQuestion:(id)arg1;	// IMP=0x0010000000ace260
- (void)_instrumentSelectedSearch;	// IMP=0x0010000000ace1bd
- (id)tableParts;	// IMP=0x0010000000acdc8b
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000acdb1a

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
