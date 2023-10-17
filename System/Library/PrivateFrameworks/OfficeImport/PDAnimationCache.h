//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAnimateMotionBehavior, PDAnimationTarget, PDBuild;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject
{
    int mNodeType;	// 8 = 0x8
    int mPresetId;	// 12 = 0xc
    int mPresetSubType;	// 16 = 0x10
    int mPresetClass;	// 20 = 0x14
    PDAnimationTarget *mTarget;	// 24 = 0x18
    _Bool mHasDelay;	// 32 = 0x20
    double mDelay;	// 40 = 0x28
    _Bool mHasDuration;	// 48 = 0x30
    double mDuration;	// 56 = 0x38
    _Bool mHasDirection;	// 64 = 0x40
    double mDirection;	// 72 = 0x48
    _Bool mHasPartCount;	// 80 = 0x50
    int mPartCount;	// 84 = 0x54
    PDAnimateMotionBehavior *mMotionPath;	// 88 = 0x58
    _Bool mHasValue;	// 96 = 0x60
    double mValue;	// 104 = 0x68
    PDBuild *mBuild;	// 112 = 0x70
    int mIterateType;	// 120 = 0x78
    _Bool mIsHead;	// 124 = 0x7c
    int mLevel;	// 128 = 0x80
    NSString *mGroupId;	// 136 = 0x88
}

+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;	// IMP=0x006000000044c170
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;	// IMP=0x006000000044be16
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;	// IMP=0x006000000044c9c3
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;	// IMP=0x006000000044c54c
- (void).cxx_destruct;	// IMP=0x000000000044c50b
@property(retain, nonatomic) PDBuild *build; // @synthesize build=mBuild;
@property(nonatomic) int level; // @synthesize level=mLevel;
@property(nonatomic) _Bool isHead; // @synthesize isHead=mIsHead;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=mGroupId;
@property(nonatomic) double value; // @synthesize value=mValue;
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=mHasValue;
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath; // @synthesize motionPath=mMotionPath;
@property(nonatomic) int partCount; // @synthesize partCount=mPartCount;
@property(nonatomic) _Bool hasPartCount; // @synthesize hasPartCount=mHasPartCount;
@property(nonatomic) double direction; // @synthesize direction=mDirection;
@property(nonatomic) _Bool hasDirection; // @synthesize hasDirection=mHasDirection;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
@property(nonatomic) _Bool hasDuration; // @synthesize hasDuration=mHasDuration;
@property(nonatomic) double delay; // @synthesize delay=mDelay;
@property(nonatomic) _Bool hasDelay; // @synthesize hasDelay=mHasDelay;
@property(nonatomic) int iterateType; // @synthesize iterateType=mIterateType;
@property(nonatomic) int presetClass; // @synthesize presetClass=mPresetClass;
@property(nonatomic) int presetSubType; // @synthesize presetSubType=mPresetSubType;
@property(nonatomic) int presetId; // @synthesize presetId=mPresetId;
@property(nonatomic) int nodeType; // @synthesize nodeType=mNodeType;
@property(retain, nonatomic) PDAnimationTarget *target; // @synthesize target=mTarget;
- (id)initWithAnimationInfo:(id)arg1;	// IMP=0x000000000044ba9d

@end
