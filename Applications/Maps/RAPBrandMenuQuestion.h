//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSArray, NSString, RAPQuestion, RAPTransitLine;
@protocol RAPMenuItem, RAPPlace;

@interface RAPBrandMenuQuestion
{
    id <RAPPlace> _reportedPlace;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000050324c
@property(readonly, nonatomic) id <RAPPlace> reportedPlace; // @synthesize reportedPlace=_reportedPlace;
- (id)followUpQuestionForCategory:(long long)arg1;	// IMP=0x00100000005031c6
@property(readonly, nonatomic) MKMapItem *snippetMapItem;
@property(readonly, nonatomic) long long snippetStyle;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000503055
@property(readonly, nonatomic) _Bool shouldLoadClaimThisBusiness;
- (id)mainMenuItems;	// IMP=0x0010000000502fa4
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 reportedPlace:(id)arg3;	// IMP=0x0010000000502f17
- (id)initWithReport:(id)arg1 reportedPlace:(id)arg2;	// IMP=0x0010000000502f00

// Remaining properties
@property(readonly, nonatomic) NSArray *allMenuItems;
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *selectedMenuItem;
@property(readonly, nonatomic) _Bool shouldShowIcons;
@property(readonly, nonatomic) _Bool shouldShowSubtitles;
@property(readonly, nonatomic) RAPTransitLine *snippetTransitLine;
@property(readonly) Class superclass;

@end
