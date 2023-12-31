//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, GEORPCategoryRating, NSString;

@interface UGCRatingCategory : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    long long _ratingType;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    long long _currentState;	// 40 = 0x28
    long long _initialState;	// 48 = 0x30
}

+ (id)ratingCategoryListForQuestionnaireCategories:(id)arg1;	// IMP=0x0020000000914973
+ (id)ratingCategoryListForScorecard:(id)arg1;	// IMP=0x0010000000914643
+ (id)overallRatingCategoryWithInitialState:(long long)arg1;	// IMP=0x001000000091458b
+ (id)overallRatingCategoryFromScorecard:(id)arg1;	// IMP=0x0010000000914516
- (void).cxx_destruct;	// IMP=0x0020000000914e7a
@property(readonly, nonatomic) long long initialState; // @synthesize initialState=_initialState;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long ratingType; // @synthesize ratingType=_ratingType;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000914e32
- (void)addObserver:(id)arg1;	// IMP=0x0010000000914e1c
@property(readonly, nonatomic) GEORPCategoryRating *geoCategoryRating;
@property(readonly, nonatomic) _Bool hasValidSelectedState;
@property(readonly, nonatomic, getter=isEdited) _Bool edited;
- (void)revertCorrections;	// IMP=0x0010000000914cce
- (id)initWithKey:(id)arg1 localizedTitle:(id)arg2 initialState:(long long)arg3 ratingType:(long long)arg4;	// IMP=0x0010000000914bd3
- (id)initWithKey:(id)arg1 localizedTitle:(id)arg2 initialState:(long long)arg3;	// IMP=0x0010000000914bbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

