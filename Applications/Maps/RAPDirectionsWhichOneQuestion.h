//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, RAPDirectionsCategoryQuestion, Route, UIImage;
@protocol RAPUserDirectionRequest;

@interface RAPDirectionsWhichOneQuestion
{
    unsigned long long _transportType;	// 8 = 0x8
    Route *_route;	// 16 = 0x10
    _Bool _isInitialQuestion;	// 24 = 0x18
    RAPDirectionsCategoryQuestion *_followUpQuestion;	// 32 = 0x20
    NSArray *_selectableDirectionsRequests;	// 40 = 0x28
    id <RAPUserDirectionRequest> _selectedValue;	// 48 = 0x30
    NSString *_localizedServerControlledDescription;	// 56 = 0x38
}

+ (_Bool)_canDisplayForContext:(id)arg1 transportMode:(unsigned long long)arg2;	// IMP=0x00200000005a7ab0
+ (id)localizedTransitTitle;	// IMP=0x00100000005a78a8
- (void).cxx_destruct;	// IMP=0x00200000005a8743
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
@property(retain, nonatomic) id <RAPUserDirectionRequest> selectedValue; // @synthesize selectedValue=_selectedValue;
@property(readonly, nonatomic) int userAction;
- (_Bool)_followupQuestionsAreDirectionsRelated;	// IMP=0x00100000005a86b1
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x00100000005a81bb
- (id)_alternateAuxiliaryControlsRecording;	// IMP=0x00100000005a816b
@property(readonly, nonatomic) RAPDirectionsCategoryQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
- (_Bool)_isRecursivelyComplete;	// IMP=0x00100000005a807b
- (_Bool)isComplete;	// IMP=0x00100000005a8066
@property(readonly, nonatomic) Route *routeFromRecording;
@property(readonly, nonatomic) NSArray *selectableDirectionsRequests; // @synthesize selectableDirectionsRequests=_selectableDirectionsRequests;
@property(readonly, nonatomic) NSString *localizedSelectDirectionsRequestPrompt;
- (int)analyticTarget;	// IMP=0x00100000005a7aa5
@property(readonly, nonatomic) long long questionCategory;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 selectableDirectionRequests:(id)arg3;	// IMP=0x00100000005a7a7f
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 transportType:(unsigned long long)arg3 selectableRequests:(id)arg4;	// IMP=0x00100000005a79c8
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 transportType:(unsigned long long)arg3;	// IMP=0x00100000005a79b3
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;	// IMP=0x00100000005a7998
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
