//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface RAPPersonalPlaceCorrectionsWhichOneQuestion
{
    long long _shortcutType;	// 24 = 0x18
    _Bool _isRefreshing;	// 32 = 0x20
    NSString *_localizedServerControlledDescription;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000420ba7
@property(readonly, nonatomic) long long shortcutType; // @synthesize shortcutType=_shortcutType;
// Error: Property attributes should begin with the type ('T') attribute, property name: localizedServerControlledDescription
// Property attributes: (null)

- (_Bool)_isRecursivelyComplete;	// IMP=0x0010000000420afd
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) UIImage *image;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000420750
- (id)allMenuItems;	// IMP=0x001000000042073e
- (void)refreshMainMenuItemsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000004201e5
- (void)_createQuestionsFromShortcuts:(id)arg1;	// IMP=0x001000000041ff9c
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 shortcutType:(long long)arg3;	// IMP=0x001000000041fe02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

