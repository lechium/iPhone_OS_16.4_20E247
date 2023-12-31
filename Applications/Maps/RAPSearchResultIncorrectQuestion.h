//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion, UIImage;

@interface RAPSearchResultIncorrectQuestion
{
    NSString *_localizedTitle;	// 8 = 0x8
    NSString *_localizedPhotosPickerExplanation;	// 16 = 0x10
}

+ (id)localizedTitleForResultCount:(unsigned long long)arg1;	// IMP=0x002000000017f8a9
- (void).cxx_destruct;	// IMP=0x002000000017fa61
- (id)localizedPhotosPickerExplanation;	// IMP=0x001000000017fa50
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
@property(readonly, nonatomic) long long questionCategory;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 searchResultsCount:(unsigned long long)arg3;	// IMP=0x001000000017f92c

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
@property(readonly) Class superclass;

@end

