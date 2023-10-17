//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPBadRouteSuggestionsQuestion, RAPReportComposerBadRouteSelectionSection, RAPReportComposerCommentPart, RAPTablePart;

@interface RAPReportComposerBadRouteSuggestionsViewController
{
    RAPBadRouteSuggestionsQuestion *_question;	// 8 = 0x8
    RAPReportComposerBadRouteSelectionSection *_whichRouteSection;	// 16 = 0x10
    RAPTablePart *_whichRoutePart;	// 24 = 0x18
    RAPReportComposerCommentPart *_commentPart;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000005e7e7a
- (void)_instrumentSelectingRoute;	// IMP=0x00100000005e7e13
- (id)tableParts;	// IMP=0x00100000005e7b1e
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000005e79fe

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
